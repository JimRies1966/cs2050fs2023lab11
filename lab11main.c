#include "lab11.h"

int main() 
{
	// Some simple attempts to use the BST to get you started
	BST * tree = initBST();
	if (tree)
	{
		insertBST(tree,2);
		insertBST(tree,3);
		insertBST(tree,1);
		inOrderPrintBST(tree);
		freeBST(tree);
	}
}
