package tree_sitter_dataview_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-dataview"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_dataview.Language())
	if language == nil {
		t.Errorf("Error loading Dataview grammar")
	}
}
