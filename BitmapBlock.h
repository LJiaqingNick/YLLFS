//
// Created by Nick Liu on 2022-11-30.
//

#ifndef YLLFS_BITMAPBLOCK_H
#define YLLFS_BITMAPBLOCK_H

#include "Block.h"
#include <vector>

class BitmapBlock: public Block{
private:
    std::vector<int> bMap;
    int numAllocated;
public:
    BitmapBlock();
    int alloc();
    void free(int num);
    std::string toString();
};


#endif //YLLFS_BITMAPBLOCK_H
