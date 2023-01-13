#include "disc.h"

int Disc::getSize() {
    return size;
}

void Disc::setSize(int s) {
    size = s;
}

std::string Disc::toString() {
    return "Disc with size " + std::to_string(size);
}
