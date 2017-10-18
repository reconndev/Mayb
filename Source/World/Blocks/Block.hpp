#ifndef MAYBSFML_BLOCK_HPP
#define MAYBSFML_BLOCK_HPP


#include "../../Maths/Vector2.hpp"
#include "../../Maths/Collider.hpp"

struct Block : public Collider {
    Vector2 position;
    Vector2 size;

    Block(float width=0.f, float height=0.f);

};


#endif //MAYBSFML_BLOCK_HPP
