//
// Created by 簡仲研 on 2024/8/7.
//

#ifndef SNAKE_GAME_HPP
#define SNAKE_GAME_HPP
#include "World.hpp"
#include "Window.hpp"
#include "Textbox.hpp"
#include <SFML/Window.hpp>

class Game {
public:
    Game();
    ~Game();

    void HandleInput();
    void Update();
    void Render();

    [[maybe_unused]] sf::Time GetElapsed();
    void RestartClock();

    Window *GetWindow();

private:
    Window m_window;
    sf::Clock m_clock;
    float m_elapsed{};

    World m_world;
    Snake m_snake;

    Textbox m_textbox;
};


#endif //SNAKE_GAME_HPP
