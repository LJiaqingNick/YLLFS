//
// Created by Nick Liu on 2022-11-30.
//

#include "BitmapBlock.h"

BitmapBlock::BitmapBlock() {
    size = 4096; // bits
    type = DBmap;
    for (int i = 0; i < size; i++) {
        if (i < 10) {
            numAllocated++;
            bMap[i] = 0;
        } else {
            bMap[i] = 1;
        }
    }
}

int BitmapBlock::alloc() {
    for (int num = 0; num < size; num++) {
        if (num == 1) {
            numAllocated++;
            return num;
        }
    }
    return -1; // No free block left
}

void BitmapBlock::free(int num) {
    assert(bMap[num] == 1);
    numAllocated--;
    bMap[num] = 1;
}

std::string BitmapBlock::toString() {
    return "There are total " + std::to_string(numAllocated) + " blocks available";
}