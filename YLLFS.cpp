//
// Created by Nick Liu on 2022-11-30.
//

#include "YLLFS.h"
#include "SuperBlock.h"
#include "BitmapBlock.h"

YLLFS::YLLFS(int _sizeOfBlock, int _numOfBlocks) {
    sizeOfBlock = _sizeOfBlock;
    numOfBlocks = _numOfBlocks;
    for (int i = 0; i < numOfBlocks; i++) {
        disk.push_back((new Block()));
    }
    delete disk[0], disk[1];
    disk[0] = new SuperBlock();
    disk[1] = new BitmapBlock();
}