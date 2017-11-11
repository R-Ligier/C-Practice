# Topic: Stacks

Definition: LIFO (Last-in-first-out) data structure. The element which is placed (inserted or added) last, is accessed first.

#### **Basic Operations/Terminology**
- Push( ) = inserting
- Pop ( ) = removing
- Top ( ) = the data on the top of the stack
- peek ( ) = get the top data element without removing it
- isFull( ) = checks if the stack is full
- isEmpty ( ) = checks if the stack is empty

##### Puh Operation

The push operations involves a series of steps:

Step 1: Checks if the stack is full

If the stack is full, produces an error and exits. if not, goesto Step 2

Step 2: Increments **top** to point to the next empty space

Step 3: Adds the data element to the stack location where top is pointing to

#### **Time Complexity**
For all the standard stack operations (push, pop, isEmpty, size), the worst-case run-time complexity can be O(1). We say can and not is because it is always possible to implement stacks with an underlying representation that is inefficient. However, with the representations we have looked at (static array and a reasonable linked list) these operations take constant time. It's obvious that size and isEmpty constant-time operations. push and pop are also O(1) because they only work with one end of the data structure - the top of the stack. The upshot of all this is that stacks can and should be implemented easily and efficiently.

