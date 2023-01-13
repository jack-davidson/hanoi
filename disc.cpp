#include "disc.h"

using namespace std;

int Disc::getSize() {
    return size;
}

void Disc::setSize(int s) {
    size = s;
}

std::string Disc::toString() {
    string output;
    output += "(";
    output += " " + to_string(size) + " ";
    for (int j = 0; j < size; j++) output += " ";
    output += ")";
    output += "\n";
    return output;
}
