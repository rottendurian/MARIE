#pragma once

#include <stddef.h>
#include <stdint.h>

typedef uint8_t Byte;
typedef uint16_t Word;

struct Vector {
    size_t size;
    Word* buffer;
};

