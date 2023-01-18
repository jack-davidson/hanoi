#include<stdio.h>
#include<iostream>
#include<math.h>
#include "stack.h"
#include "disc.h"
using namespace std;

Stack::Stack()
{
    size += STACK_ALLOC;
    data = new void*[size];
    head = 0;
}

Stack::~Stack()
{
    delete[] data;
}

void Stack::push(void* inData)
{
    /* reallocate when the head index
     * is greater than the size of the array. */
    if (head >= size) {
        size += STACK_ALLOC;
        data = (void **)realloc(data, size);
        void **tmp = new void*[size];

        for (int i = 0; i < head; i++) {
            tmp[i] = data[i];
        }

        delete[] data;

        data = tmp;
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
    return (data[0] == NULL);
}

void Stack::display()
{
    for (int i = head; i >= 0; i--)
	{
        if (data[i] != NULL) {
            cout<< ((Disc*)(data[i]))->toString();
        }
	}
	cout<<endl;
}

