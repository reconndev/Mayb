#ifndef MAYBSFML_ENTITY_HPP
#define MAYBSFML_ENTITY_HPP


#include "Rendering/Renderable.hpp"
#include "States/Serializable.hpp"
#include "Maths/Collider.hpp"


class Entity : public Renderable, public Serializable {
    sf::Vector2i    m_size;
    Collider        m_bounds;
protected:
    sf::Vector2f    m_velocity;
    sf::Vector2f    m_position;
    bool            grounded;
public:
    explicit Entity(sf::Vector2i size, sf::Vector2f position={0, 0}, sf::Vector2i offset={0, 0});

    void resolveCollision(CollisionType);

    const sf::Vector2f& velocity() const;

    Collider& AABBox();

    void writeObject() override;

    void readObject() override;

    ~Entity() override {
//        writeObject();
//        readObject();
    }
};


#endif //MAYBSFML_ENTITY_HPP
