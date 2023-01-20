#include<stdio.h>
#include<iostream>
#include<math.h>
#include "stack.h"
#include "disc.h"
using namespace std;

Stack::Stack(int n)
{
    data = (void **)malloc(n * sizeof(void*));
    top = 0;
}

Stack::~Stack()
{
    free(data);
}

void Stack::push(void* inData)
{
    if (top == size - 1) {
        // resize
    }
    data[++top] = inData;
}
void* Stack::pop()
{
    if (top == 0) {
        return NULL;
    }

    void *popped;
    popped = data[top--];
    return popped;
}

bool Stack::empty()
{
    return (data[0] == NULL);
}

void Stack::display()
{
    for (int i = top; i >= 0; i--)
	{
        if (data[i]) {
            cout << ((Disc*)(data[i]))->toString();
        }
	}
	cout<<endl;
}

