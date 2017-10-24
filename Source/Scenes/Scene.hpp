#ifndef MAYBSFML_SCENE_HPP
#define MAYBSFML_SCENE_HPP


#include "../Rendering/RenderManager.hpp"

class Scene {
protected:
    bool hasFinished = false;
public:
    bool closed() { return hasFinished; }
    virtual void update() = 0;
    virtual void render(const RenderManager&) = 0;
};


#endif //MAYBSFML_SCENE_HPP
