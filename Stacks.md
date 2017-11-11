# Topic: Stacks

**Definition:** LIFO (Last-in-first-out) data structure. The element which is placed (inserted or added) last, is accessed first.

#### **Basic Operations/Terminology**
- Push( ) = inserting
- Pop ( ) = removing
- Top ( ) = the data on the top of the stack
- peek ( ) = get the top data element without removing it
- isFull( ) = checks if the stack is full
- isEmpty ( ) = checks if the stack is empty

#### **Push/Pop Operation**

The push and pop operation involves a series of steps:

Step 1: Checks if the stack is full/empty

If the stack is full, produces an error and exits. if not, goes to Step 2
If the stack is emptyl, produces an error and exits. if not, goes to Step 2

Step 2: Increments **top** to point to the next empty space/space with data

Step 3: Adds the data element to the stack location where top is pointing to/removes the data that top is pointing to

#### **Time Complexity**
- Worst-case: for all standard stack operations O(1)
-  It's obvious that size and isEmpty constant-time operations. push and pop are also O(1) because they only work with one end of the data structure - the top of the stack.
