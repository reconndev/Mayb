#include "Block.hpp"

Block::Block(float width, float height)
        : size{width, height}, position{0, 0}, Collider(position, size) {}
