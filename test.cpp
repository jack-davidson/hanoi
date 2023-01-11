#include <stdio.h>
#include <iostream>
#include <math.h>
#include <assert.h>
#include <cstring>
#include "stack.h"
#include "disc.h"

void test_stack() {
    Stack s = Stack();
    char *str = (char *)malloc(6);
    strcpy(str, "hello");
    s.push(str);
    std::cout << (char*)s.pop() << '\n';
}

int main() {
    test_stack();
}
