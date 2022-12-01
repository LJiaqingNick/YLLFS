//
// Created by Nick Liu on 2022-11-30.
//

#include "SuperBlock.h"

SuperBlock::SuperBlock(int _magicalNumber, int _numberOfBlocks, int _numberOfInodes) {
    magicalNumber = _magicalNumber;
    numberOfBlocks = _numberOfBlocks;
    numberOfInodes = _numberOfInodes;
    availableBytes = size - 4 * 3;
    type = Super;
}

std::string SuperBlock::toString() {
    return "Magical number is " + std::to_string(magicalNumber) + " blocks and there are "
    + std::to_string(numberOfBlocks) + " Blocks and " + std::to_string(numberOfInodes) + " Inodes";
}