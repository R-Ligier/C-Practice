# Topic: Queues

**Definition:** Similar to stacks but queues are opened at both ends of the line. One end is used to insert data and the other to remove.
- Follows FIFO = first in first out

![Queues Image](https://github.com/R-Ligier/C-Practice/blob/master/Queues.png "Queues Image")

#### **Basic Operations**
- push( ) = add (store) an item to the queue
- pop ( ) = remove (access) an item from the queue
- front ( ) = gets the element at the front of the queue without removing it
- back ( ) = gets the last element
- isfull ( ) = checks if the queue is full
- empty ( ) = checks if the queue is empty

#### **Push( ) Operation**
- Queues maintain two data pointers, front and rear.
- The following steps should be taken to enqueue (insert) data into a queue:

**CODE:**

    #include <queue>
    queue <int> list;

    if(list.empty()) //if the list is empty
    {
        for(int i =0; i<4;  ++i)
        {
            list.push(i); //adds values to the queue
        }
    }
    
#### **Pop( ) Operation**
- Removes the next element in the queue, effectively reducing its size by one.
- The element removed is the "oldest" element in the queue whose value can be retrieved by calling member queue::front.

**CODE:**

    #include <queue>
    using namespace std;

    queue <int> list;

    if(list.empty()){
        for(int i=0; i<4; ++i)
        {
            list.push(i); //adds values to the queue
        }
    }

    while(!list.empty())
    {
        int i; //"counter"
        cout<< i << ":" << list.front() << endl; //prints the number that will be popped
        list.pop(); //pops the first element
        i++;
    }
    
#### **Front( ) Operation**
- Returns a reference to the next element in the queue.
- The next element is the "oldest" element in the queue and the same element that is popped out from the queue when queue::pop is called.

**CODE:**

        #include <queue>
        queue <int> list;

        if(list.empty()) //if the list is empty
        {
            for(int i =0; i<4;  ++i)
            {
                list.push(i); //adds values to the queue
                cout << list.front() << endl; //Outputs 0 b/c it's the oldest element
            }
        }
        
#### **Back( ) Operation**
- Returns a reference to the last element in the queue.
- This is the "newest" element in the queue (i.e. the last element pushed into the queue).

**CODE:**

        #include <queue>
        queue <int> list;

        if(list.empty()) //if the list is empty
        {
            for(int i =0; i<4;  ++i)
            {
                list.push(i); //adds values to the queue
                cout << list.back() << endl;
            }
        }

#### **Time Complexity**
Queue using an underlying array-based list:
- push is O(1) unless the array size has to be increased (in which case it’s O(n))
- pop is O(n) : all the remaining elements have to be shifted down by one position to retain the property that the remaining n-1 queue elements reside in the first n-1 position of the array
- searching and random access = O(n)

