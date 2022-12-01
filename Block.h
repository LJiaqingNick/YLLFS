//
// Created by Nick Liu on 2022-11-30.
//

#ifndef YLLFS_BLOCK_H
#define YLLFS_BLOCK_H

#include <iostream>

enum Type {Super, Directory, File, Free, IBmap, DBmap};

class Block {
protected:
    Type type = Free;
    int size = 512;
public:
    virtual void setType(Type _type) {type = _type;}
    virtual Type getType() {return type;}
    virtual void free() {;};
    virtual std::string toString() {return "This is free block";}
};


#endif //YLLFS_BLOCK_H
