// We need to implement a First-In-First-Out (FIFO) list, called Queue, with four functions: insert (adding an element), remove (removing the first inserted element), front (peeking the first inserted element without removing it) and rear (peeking the last inserted element without removing it). 

// Like Stack, it can be implemented by storing the data contiguously or non-contiguously. 

// Create an interface class IQueue with the functionalities mentioned above. Create a class ArrayQueue that inherits IQueue and stores the data elements in an array. 

// The insert() method must throw an exception if the queue is full. Similarly, remove(), front() and rear() must throw an exception if the queue empty. 

// The remove() method must remove the first element, and then move all remaining elements to the previous index, i.e. the element at index 1 must be moved to index 0, the element at index 2 to index 1 and so on.




// ## Pesudo Code 

// - Class IQueue
// - {insert, remove , front and rear} function in Queue
// - Class ArraQueue ; inherits IQueue 
// - store the data elements in an array
// - throw exception 
// - 



#include<iostream>



using namespace std;

