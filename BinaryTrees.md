# Topic: Binary Trees/Binary Search Trees

- **Definition:** An effecient structure to organize data to perform quick search and updating data

#### **How does it work?**
- The data must be sorted
- Left part of the tree should consist of data less than the root node
- Right side of the tree should consist of data greater than the root node
- It halves the searchable items which reduces the count of comparisons to be made

#### **Terminology**

- Root = the node on the very top, "starting point"
- Parent = describes the relationship between two nodes
- Child = the node connected to the parent
- Leaf = a node that does not point to any nodes, it only has a parent but no children
- Tree is balanced = for all nodes the difference between the heghts of left and right subtrees is not greater than 1
- Edge = link from a node to a child
- Node's Depth = the number of edges on the path from the root to the node. Root has depth = 0
- Tree Height = the largest depth of any node. Tree with one node has height 0

- Successor = the node that comes after in BST ordering
If a node has no right child, the successor will be the first ancestor having this node in a left subtree. A node's successor need not involve a direct link.
    - Example: A,B,C -> A's successor is B, B's successor is C ...
- Predecessor = node that comes after in BST ordering

**Tree Traversal**

- In-order Traversal = visits all nodes in a BST from smallest to largest, which is useful for example to print the tree's nodes in sorted order. Starting from the root, the algorithm recursively prints the left subtree, the current node, and the right subtree.
- Pre-order Traversal (prefix) = process all nodes of a tree by processing the root, then recursively processing all subtrees.
- Post-order Traversal (postfix) = Process all nodes of a tree by recursively processing all subtrees, then finally processing the root

#### **Notes**
- Only considered a binary search tree if nodes and subtrees follow BST ordering.
- Binary trees can each have up to two children and ordering is required.

#### **Complexity**

- When searching, we take n which is the middle element and if it isn't what were looking for keep dividing n/2, n/4, n/.... until we reach our answer.
- Searching = O(log n) , worst case = height (log(n))+ 1
- Inserting = O(log n)
- Removing = O(log n)

#### **Defining a Node**

    struct node{
        int data; // want each node to hold an int value
        // want the node to point to 2 other nodes
        node* left;
        node* right;
    };

#### **Searching in a BST**

**CODE:**

    If (currentNode->key == desiredKey) {
        return currentNode; // The desired node was found
    }else if (desiredKey < currentNode->key) {
        // Visit left child, repeat
        }
    else if (desiredKey > currentNode->key)
    // Visit right child, repeat
    }

#### **Inserting in a BST**
- Given a new node, a BST insert operation inserts the new node in a proper location obeying the BST ordering property. A simple BST insert algorithm compares the new node with the current node (initially the root).
- Insert as left child: If the new node's key is less than the current node, and the current node's left child is 0, the algorithm assigns that node's left child with the new node.
- Insert as right child: If the new node's key is greater than the current node, and the current node's right child is 0, the algorithm assigns the node's right child with the new node.
- Search for insert location: If the left (or right) child is not 0, the algorithm assigns the current node with that child and continues searching for a proper insert location.

**CODE:**

    TreeInsert(tree, node) {
    if (tree->root is 0)
        tree->root = node
        node->left = 0
        node->right = 0
    else
        cur = tree->root
        while (cur is not 0)
            if (node->key < cur->key)
                if (cur->left is 0)
                    cur->left = node
                    cur = 0
                else
                    cur = cur->left
            else
                if (cur->right is 0)
                    cur->right = node
                    cur = 0
                else
                    cur = cur->right
                    node->left = 0
                    node->right = 0
    }
    
#### **Removing a Node in a BST**

- Remove a leaf node: If X has a parent (so X is not the root), the parent's left or right child (whichever points to X) is assigned with 0. Else, if X was the root, the root pointer is assigned with 0, and the BST is now empty.
- Remove an internal node with single child: If X has a parent (so X is not the root), the parent's left or right child (whichever points to X) is assigned with X's single child. Else, if X was the root, the root pointer is assigned with X's single child.
- Remove an internal node with two children: This case is the hardest. First, the algorithm locates X's successor (the leftmost child of X's right subtree), and copies the successor to X. Then, the algorithm recursively removes the successor from the right subtree.

**CODE:**

![BST Remove Image](https://github.com/R-Ligier/C-Practice/blob/master/BSTRemove.png "BST Remove Image")

### AVL/Balanced Binary Tree

Definition: Checks the height of the left and the right sub-trees and assures the difference isn't greater than 1

![alt text](https://github.com/R-Ligier/C-Practice/blob/master/AVLTree.png "AVL Tree image")

Balanced Tree Calculation = height of let sub-tree - height of right sub-tree

**To keep the BT's complexity at O(log n), the tree must be balanced**

#### **Checking if a Binary Tree is Balanced**

- Calculate tallest and shortest branch and compare them ... can do this recursively = will take linear time

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

