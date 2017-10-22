#ifndef MAYBSFML_ENTITY_HPP
#define MAYBSFML_ENTITY_HPP


#include <SFML/Graphics.hpp>
#include "Maths/Vector2.hpp"
#include "Maths/Collider.hpp"


class Entity {
public:
    Vector2 position;
    Vector2 velocity;
    Vector2 size;
    Collider bounding_box;
    bool grounded;
    sf::IntRect rect;
    sf::Sprite sprite;
    sf::Texture texture;
    sf::Texture texture_mirror;

    Entity(Vector2 size_, Vector2 pos={0, 0}, Vector2 vel={0, 0});

    void resolveCollision(COLLISION_TYPE );
};


#endif //MAYBSFML_ENTITY_HPP
