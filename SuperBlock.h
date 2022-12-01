//
// Created by Nick Liu on 2022-11-30.
//

#ifndef YLLFS_SUPERBLOCK_H
#define YLLFS_SUPERBLOCK_H

#include "Block.h"


class SuperBlock: public Block{
private:
    int magicalNumber;
    int numberOfBlocks;
    int numberOfInodes;
    int availableBytes;
public:
    SuperBlock(int _magicalNumber=0, int _numberOfBlocks=4096, int _numberOfInodes=4096);
    int getMagicalNum() {return magicalNumber;}
    int getNumberOfBlocks() {return numberOfBlocks;}
    int getNumberOfInodes() {return numberOfInodes;}
    int getAvailableBytes() {return availableBytes;}
    std::string toString();
};


#endif //YLLFS_SUPERBLOCK_H
