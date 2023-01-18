#include<stdio.h>
#include<iostream>
#include<math.h>
#include "stack.h"
#include "disc.h"
using namespace std;

Stack::Stack()
{
    data = (void **)malloc(STACK_ALLOC);
    size += STACK_ALLOC;
    head = 0;
}

Stack::~Stack()
{
    free(data);
}

void Stack::push(void* inData)
{
    /* reallocate when the head index
     * is greater than the size of the array. */
    if (head > size) {
        size += STACK_ALLOC;
        data = (void **)realloc(data, size);
    }

    data[head] = inData;
    head++;
}
void* Stack::pop()
{
    void *popped;
    head--;
    popped = data[head];
    return popped;
}

void* Stack::top()
{
	// your code
    return data[head];
}

bool Stack::empty()
{
	// your code
    return (data[head] == NULL);
}

void Stack::display()
{
    for (int i = head; i >= 0; i--)
	{
        if (data[i]) {
            cout<< ((Disc*)(data[i]))->toString();
        }
	}
	cout<<endl;
}

