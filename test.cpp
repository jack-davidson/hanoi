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
    s.push((new string("Hello test Data #1.")));
    s.push((new string("Hello test Data #2.")));
    std::cout << "\tpop() -> " << *(string *)s.pop() << '\n';
    std::cout << "\tpop() -> " << *(string *)s.pop() << '\n';
}

int main() {
    test_stack();
}
