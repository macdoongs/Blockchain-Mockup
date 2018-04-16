#ifndef _MINING_H_
#define _MINING_H_

#include <string>
#include <stddef.h>
#include <stdint.h>
#include "block.h"

extern Block* miningBlock(std::string preHash, std::string data, int64_t timestamp, int64_t difficulty);

#endif
