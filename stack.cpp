#include<stdio.h>
#include<iostream>
#include<math.h>
#include "stack.h"
#include "disc.h"
using namespace std;

Stack::Stack(int n)
{
    data = new void*[n];
    head = 0;
}

Stack::~Stack()
{
    delete[] data;
}

void Stack::push(void* inData)
{
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
    return data[head];
}

bool Stack::empty()
{
    return (data[0] == NULL);
}

void Stack::display()
{
    for (int i = head; i >= 0; i--)
	{
        cout<< ((Disc*)(data[i]))->toString();
	}
	cout<<endl;
}

