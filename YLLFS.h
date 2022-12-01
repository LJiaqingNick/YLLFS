//
// Created by Nick Liu on 2022-11-30.
//

#ifndef YLLFS_YLLFS_H
#define YLLFS_YLLFS_H

#include <iostream>
#include <vector>
#include "Block.h"
using namespace std;

class YLLFS {
public:
    vector<Block*> disk;
    int sizeOfBlock; // in bytes
    int numOfBlocks;
public:
    YLLFS(int _sizeOfBlock=512, int _numOfBlocks=4096);
    void run();
    std::string toString();
};


#endif //YLLFS_YLLFS_H
