from flask import Flask, render_template, request
import tree_sitter_dataview as tsdv
from tree_sitter import Language, Parser, Tree, Node
from collections.abc import Generator

DV_LANG = Language(tsdv.language(), "dataview")

parser = Parser()
parser.set_language(DV_LANG)

app = Flask(__name__)


@app.route("/", methods=["GET", "POST"])
def index():
    if request.method == "POST":
        q = request.form["query"]
        tree = parser.parse(bytes(q, "utf8"))
        result = list(map(processing, traverse_tree(tree)))
        return render_template(
            "index.html", **{"result": " ".join(result), "query": request.form["query"]}
        )
    return render_template("index.html")


def traverse_tree(tree: Tree) -> Generator[Node, None, None]:
    cursor = tree.walk()
    visited_children = False
    while True:
        if not visited_children:
            yield cursor.node
            if not cursor.goto_first_child():
                visited_children = True
        elif cursor.goto_next_sibling():
            visited_children = False
        elif not cursor.goto_parent():
            break


def processing(node: Node):
    print(node.type, node.text)
    if node.type == "dataview":
        return ""
    if node.type == "list":
        return "ul >"
    return ""
