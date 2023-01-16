#include<stdio.h>
#include<iostream>
#include<math.h>
#include "stack.h"
#include "disc.h"
using namespace std;

Stack::Stack()
{
    head = NULL;
}

Stack::~Stack()
{
    Node *n, *next;

    n = head;
    while(n) {
        next = n->next;
        free(n);
        n = next;
    }
}

void Stack::push(void* inData)
{
    // create new node with data
    Node *newnode = (Stack::Node*)malloc(sizeof(Stack::Node));
    newnode->data = inData;

    // retrieve pointer to rest of the old structure
    Node *old = head;

    /* set head to point to new top node and set the new node to point to
     * the rest of the old nodes. */
    head = newnode;
    newnode->next = old;
}
void* Stack::pop()
{
    void *popped = head->data; // get data from top node
    /* get pointer to the next top node (this will be our new top node) */
    Node *newtop = head->next;
    free(head); // deallocate top node
    head = newtop; // set new top node
    return popped;
}

void* Stack::top()
{
	// your code
    return head->data;
}

bool Stack::empty()
{
	// your code
    return (head == NULL);
}

void Stack::display()
{
	//cout<<endl;
	Node *p1;
	p1 = head;
	while (p1 != NULL)
	{
		cout<< ((Disc*)(p1->data))->toString();
		p1 = p1->next;
	}
	cout<<endl;
}

