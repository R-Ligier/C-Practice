# Topic: Binary Trees/Binary Search Trees

- Definition: An effecient structure to organize data to perform quick search and updating data

#### How does it work?
- The data must be sorted
- Left part of the tree should consist of data less than the root node
- Right side of the tree should consist of data greater than the root node
- It halves the searchable items which reduces the count of comparisons to be made

- Algorithm:
Step 1: Begin searchin g the data from the middle of the list

Step 2: If it's amatch, return the index of the data position and exit

Step 3: If not, divide the list using the prob formula and fnd the new middle

Step 4: If data is greater than middle, search in higher sub-list

Step 5: If data is smaller than middle, search in lower sub-list

Step 6: Repeat until match


#### Terminology

- Root = the node on the very top, "starting point"
- Parent = describes the relationship between two nodes
- Child = the node connected to the parent
- Leaf = a node that does not point to any nodes, it only has a parent but no children
- Pre-order Traversal (prefix) = process all nodes of a tree by processing the root, then recursively processing all subtrees.
- Post-order Traversal (postfix) = Process all nodes of a tree by recursively processing all subtrees, then finally processing the root
- In-order Traversal = Process all nodes of a tree by recursively processing the left subtree, then processing the root, and finally the right subtree
- Tree is balanced = for all nodes the difference between the heghts of left and right subtrees is not greater than 1


#### Defining a Node
struct node{
	 
	 // want each node to hold an int value
	int data;

	// want the node to point to 2 other nodes
	node* left;
	node* right;
};

<<<<<<< HEAD
#### Complexity
=======
#### Complexity 
>>>>>>> 045bba818fe79b81d5dc9d2c4f8c5b970b5aca69

- When searching, we take n which is the middle element and if it isn't what were looking for keep dividing n/2, n/4, n/.... until we reach our answer.
- Searching = O(log n) 
- Inserting = O(log n)
- Removing = O(log n)

*To keep the BT's complexity at O(log n), the tree must be balanced

### AVL/Balanced Binary Tree

Definition: Checks the height of the left and the right sub-trees and assures the difference isn't greater than 1


![Alt text](/relative/path/to/AVL trees.jpg?raw=true "Optional Title")


#### Checking if a Binary Tree is Balanced

- All the branches in the tree are no more than one different in height/lengths
- Calculate tallest and shortest branch and compare them ... can do this recursively = will take linear time 

Finding the height of a tree - USE RECURSION

Code for finding the height and checking if it's balanced:

int CheckTreeHeight(Node root){

	// Height of 0.
	if(root == null) return 0;
	
	// Check if left is balanaced
	int leftChildHeight = CheckTreeHeight(root.left);
	
	// Not Balanced
	if(leftChildHeight == -1) return -1; 

	// Check if right is balanaced
	int rightChildHeight = CheckTreeHeight(root.right);
	if(rightChildHeight == -1) return -1; // Not Balanced
	
	// Check if current node is balanced
	int heightDifference = leftChildHeight - rightChildHeight;
	
	if(Math.abs(heightDifference) > 1)
	return -1; // not balanaced
	else
	return Math.max(leftChildHeight, rightChildHeight) + 1; // Return Height
}

bool IsBalanced(Node root){

	if(CheckTreeHeight(root) == -1){
      	return false;
   	}
   	else{
	return true;
  	}
}
<<<<<<< HEAD

bool IsBalanced(Node root)
{
   if(CheckTreeHeight(root) == -1)
   {
      return false;
   }
   else
   {
      return true;
   }
}
=======
>>>>>>> 045bba818fe79b81d5dc9d2c4f8c5b970b5aca69
