#pragma once

#include <memory>
#include <SFML/Graphics.hpp>
#include "engine-glue/ecs.hpp"
#include "engine/state-management/StateMachine.hpp"

class Game {
 public:
    void init(float width, float height) {
        // TODO
    }

    void update(const sf::Time& elapsedTime) {
        stateMachine.getState().update(elapsedTime);
    }

    void render(sf::RenderWindow& window) {
        stateMachine.getState().render(window);
    }

 private:
    ecs::World world;
    state::StateMachine stateMachine;
};
