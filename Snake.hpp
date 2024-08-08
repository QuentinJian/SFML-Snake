//
// Created by 簡仲研 on 2024/8/6.
//

#ifndef SNAKE_SNAKE_HPP
#define SNAKE_SNAKE_HPP
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <vector>
#include "Textbox.hpp"

struct SnakeSegment {
    sf::Vector2i position;
    SnakeSegment(int x, int y) : position(x, y){}
};

using SnakeContainer = std::vector<SnakeSegment>;

enum class Direction{None, Up, Down, Left, Right};

class Snake {
public:
    Snake(int l_blockSize, Textbox *l_log);
    ~Snake();

    void SetDirection(Direction l_dir);
    Direction GetDirection();
    int GetSpeed();
    sf::Vector2i GetPosition();
    int GetLives();
    int GetScore();
    void IncreaseScore();
    bool HasLost();

    void Lose();
    void ToggleLost();

    void Extend();
    void Reset();

    void Move();
    void Tick();
    void Cut(int l_segments);
    void Render(sf::RenderWindow &l_window);

    Direction GetPhysicalDirection();
private:
    void CheckCollision();

    std::vector<SnakeSegment> m_snakeBody;
    int m_size;
    Direction m_dir;
    int m_speed;
    int m_lives;
    int m_score;
    bool m_lost;
    sf::RectangleShape m_bodyRect;

    Textbox *m_log;
};


#endif //SNAKE_SNAKE_HPP
