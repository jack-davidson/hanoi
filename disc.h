#ifndef DISC_H
#define DISC_H
#include<stdio.h>
#include<string.h>
#include<iostream>

class Disc
{
private:
	int size;
	
public:
	Disc(int s) {
        size = s;
    }
	int getSize();
	void setSize(int);
	std::string toString();
};

#endif // DISC_H
