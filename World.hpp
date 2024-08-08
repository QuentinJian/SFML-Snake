//
// Created by 簡仲研 on 2024/8/6.
//

#ifndef SNAKE_WORLD_HPP
#define SNAKE_WORLD_HPP
#include "Snake.hpp"

class World {
public:
    World(sf::Vector2u l_windSize);
    ~World();

    int GetBlockSize();

    void RespawnApple();

    void Update(Snake &l_player);
    void Render(sf::RenderWindow &l_window);
private:
    sf::Vector2u m_windowSize;
    sf::Vector2i m_item;
    int m_blockSize;

    sf::CircleShape m_appleShape;
    sf::RectangleShape m_bounds[4];
};


#endif //SNAKE_WORLD_HPP
