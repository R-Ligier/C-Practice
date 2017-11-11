#Binary Trees/Binary Search Trees

- Definition: An effecient structure to organize data to perform quick search and updating data

struct node{

	 // want each node to hold an int value
	int data;

	// want the node to point to 2 other nodes
	node* left;
	node* right;
};

*To keep the BT's complexity at O(log n), the tree must be balanced

- When searching, we take n which is the middle element and if it isn't what were looking for keep dividing n/2, n/4, n/.... until we reach our answer.

- Searching = O(log n) 
- Inserting = O(log n)
- Removing = O(log n)

###Terminology

- Root = the node on the very top, "starting point"
- Parent = describes the relationship between two nodes
- Child = the node connected to the parent
- Leaf = a node that does not point to any nodes, it only has a parent but no children
- Tree is balanced = for all nodes the difference between the heghts of left and right subtrees is not greater than 1

####Properties of a Binary Search Tree

- Left part of the tree should consist of data less than the root node
- Right side of the tree should consist of data greater than the root node
##BST Complexity
