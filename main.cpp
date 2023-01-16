#include <stdio.h>
#include <iostream>
#include <math.h>
#include <assert.h>
#include "stack.h"
#include "disc.h"

using namespace std;

/* Recursive hanoi algorithm.  */
void toh(int n, Stack *a, Stack *b, Stack *c)
{
    if (n == 0) {
        return;
    }

    toh(n - 1, a, c, b);

    Disc *d = new Disc(n);

    /* Move the disc from Stack a to Stack b. */
    d = (Disc *)a->pop();
    b->push((Disc *)d);

    toh(n - 1, c, b, a);
}

int main()
{
    int n;
    cout<<"enter the number of disks ";
    cin>>n;

    /* Three discs */
	Stack* t1 = new Stack();
	Stack* t2 = new Stack();
	Stack* t3 = new Stack();
	
    // add initial discs to first tower.
    for (int i = 0; i < n; i++)
    {
		Disc* d = new Disc(n-i);
        t1->push(d);
    }

    cout << "Printing discs" << endl;

    t1->display();
    toh(n, t1, t2, t3);

    cout << "Printing Stack 1" << endl;
    t1->display();

    cout << "Printing Stack 2" << endl;
    t2->display();

    cout << "Printing Stack 3" << endl;
    t3->display();

    delete t1;
    delete t2;
    delete t3;

    return 0;
}
