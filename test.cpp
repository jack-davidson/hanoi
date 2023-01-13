#include <stdio.h>
#include <iostream>
#include <math.h>
#include <assert.h>
#include <cstring>
#include "stack.h"
#include "disc.h"

using namespace std;

void test_stack() {
    std::cout << "Testing Stack()\n";
    Stack s = Stack();
    string str = string("Hello test Data.");
    std::cout << "\tinput  = " << str << '\n';
    s.push(&str);
    s.push(&str);
    string popped = *(string *)s.pop();
    std::cout << "\tpop() -> " << popped << '\n';
    std::cout << "\tpop() -> " << *(string *)s.pop() << '\n';
    /*
    if (str.compare(popped) == 0) {
        std::cout << "\tpassed" << std::endl;
    }
    */
}

int main() {
    test_stack();
}
