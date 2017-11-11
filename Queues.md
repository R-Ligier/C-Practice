# Topic: Queues
**Definition:** Similar to stacks but queues are opened at both ends of the line. One end is used to insert data and the other to remove.
- Follows FIFO = first in first out

![Queues Image](https://github.com/R-Ligier/C-Practice/blob/master/Queues.png "Queues Image")

#### **Basic Operations**
- enqueue ( ) = add (store) an item to the queue
- dequeue ( ) = remove (access) an item from the queue
- peek ( ) = gets the element at the front of the queue without removing it
- isfull ( ) = checks if the queue is full
- is empty ( ) = checks if the queue is empty

#### **Enqueue Operation**
- Queues maintain two data pointers, front and rear.
- The following steps should be taken to enqueue (insert) data into a queue:

Step 1 − Check if the queue is full.

Step 2 − If the queue is full, produce overflow error and exit.

Step 3 − If the queue is not full, increment rear pointer to point the next empty
space.

Step 4 − Add data element to the queue location, where the rear is pointing.

#### **Dequeue Operation**
- Accessing data from the queue is a process of two tasks − access the data where front is
pointing and remove the data after access.
- The following steps are taken to perform dequeue operation:

Step 1 − Check if the queue is empty.

Step 2 − If the queue is empty, produce underflow error and exit.

Step 3 − If the queue is not empty, access the data where front is pointing.

Step 4 − Increment front pointer to point to the next available data element.

#### **Time Complexity**
Queue using an underlying array-based list:
- peek is O(1)
- enqueue is O(1) unless the array size has to be increased (in which case it’s O(n))
- dequeue is O(n) : all the remaining elements have to be shifted down by one position to retain the property that the remaining n-1 queue elements reside in the first n-1 position of the array
- searching and random access = O(n)

