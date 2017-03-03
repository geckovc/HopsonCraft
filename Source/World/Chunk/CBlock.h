#ifndef CBLOCK_H_INCLUDED
#define CBLOCK_H_INCLUDED

#include "../Block/Block_ID.h"

struct CBlock
{
    CBlock() = default;
    CBlock(Block_t      id);
    CBlock(Block::ID    id);

    template<typename T>
    CBlock& operator=(T id)
    {
        this->id = static_cast<Block_t>(id);
        return *this;
    }

    Block_t id = 1;
    //meta data?
};

bool operator == (CBlock left, Block::ID right);

#endif // CBLOCK_H_INCLUDED
