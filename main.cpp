#include <stdio.h>
#include <iostream>
#include <math.h>
#include <assert.h>
#include "stack.h"
#include "disc.h"

using namespace std;

void toh(int n)
{
    int i, x;
	Disc* a;
	Disc* b;

    /* Three discs */
	Stack* t1 = new Stack();
	Stack* t2 = new Stack();
	Stack* t3 = new Stack();
	
    // add initial discs to first tower.
    for (i = 0; i < n; i++)
    {
		Disc* d = new Disc(n-i);
        t1->push(d);
    }

    cout << "Printing discs" << endl;

    t1->display();

	// ****  Your Tower of Hanoi solution!


}
int main()
{
    int n;
    cout<<"enter the number of disks ";
    cin>>n;
    toh(n);
    return 0;
}
