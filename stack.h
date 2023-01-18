#ifndef _Stack_H_
#define _Stack_H_

/* allocate stack in increments of. */
#define STACK_ALLOC 10

/* array based stack, the head grows down and data[0] is always the (first in) element. */
class Stack
{
private:
    int size; /* size of data. */
    int head; /* index of end of stack data. */
    void **data;

public:
    Stack();					// Construct stack
    ~Stack();
    void push(void* inData);	// Add element to top of stack
    void* pop();				// Return element at top of stack and remove from top
    void* top();				// Return element at top of stack
    bool empty();
    void display();

};

#endif 		//_Stack_H_
