# Topic: Stacks

**Definition:** LIFO (Last-in-first-out) data structure. The element which is placed (inserted or added) last, is accessed first.

![Stacks Image](https://github.com/R-Ligier/C-Practice/blob/master/stack.png "Stacks image")

#### **Basic Operations/Terminology**
- Push( ) = inserting
- Pop ( ) = removing
- Top ( ) = the data element on the top of the stack
- Size( ) = returns the size of the stack
- empty ( ) = checks if the stack is empty

#### **Push ( ) Operation**
- Inserts a new element at the top of the stack, above its current top element. The content of this new element is initialized to a copy of val.
The push and pop operation involves a series of steps:

**CODE:**

    #include <stack>

    stack <int> myStack;

    for(int i = 0; i<4; i++){ myStack.push(i); }

#### **Pop ( ) Operation**
- Removes the element on top of the stack, effectively reducing its size by one.
- The element removed is the latest element inserted into the stack, whose value can be retrieved by calling member stack::top.
- Calls the removed element's destructor.

**CODE:**

    #include <stack>

    stack <int> myStack;

    for(int i = 0; i<4; i++){ myStack.push(i); }
    
    while(!myStack.empty()){
        cout << "Top element: " << myStack.top() <<endl; //shows the element that will be popped
        myStack.pop();
    }

#### **Top ( ) Operation**
- Returns a reference to the top element in the stack.
- Since stacks are last-in first-out containers, the top element is the last element inserted into the stack.

**CODE:**

    #include <stack>

    stack <int> myStack;

    myStack.push(10);
    myStack.push(20);

    myStack.top() -= 5;

    cout << "myStack.top() is now " << myStack.top() << '\n';  //Outputs 15

#### **Time Complexity**
- Worst-case: for all standard stack operations O(1)
-  It's obvious that size and empty are constant-time operations.
- push and pop are O(1) because they only work with one end of the data structure - the top of the stack.
