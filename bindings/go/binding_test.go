package tree_sitter_opengoal_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-opengoal"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_opengoal.Language())
	if language == nil {
		t.Errorf("Error loading Opengoal grammar")
	}
}
