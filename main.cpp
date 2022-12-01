#include <iostream>
#include "YLLFS.h"

int main() {
    YLLFS fs = YLLFS();

    std::cout << fs.disk[0]->toString() << std::endl;
    std::cout << fs.disk[1]->toString() << std::endl;
    return 0;
}
