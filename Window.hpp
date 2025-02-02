//
// Created by 簡仲研 on 2024/8/7.
//

#ifndef SNAKE_WINDOW_HPP
#define SNAKE_WINDOW_HPP
#include <SFML/Graphics.hpp>

class Window {
public:
    Window();
    Window(const std::string& title, const sf::Vector2u& size);
    ~Window();

    void BeginDraw();
    void EndDraw();

    void Update();

    bool IsDone();
    bool IsFullscreen();
    sf::RenderWindow* GetRenderWindow();
    sf::Vector2u GetWindowSize();

    void ToggleFullscreen();

    void Draw(sf::Drawable& l_drawable);
private:
    void Setup(const std::string title, const sf::Vector2u& size);
    void Create();
    void Destroy();

    sf::RenderWindow m_window;
    sf::Vector2u m_windowSize;
    std::string m_windowTitle;
    bool m_isDone;
    bool m_isFullscreen;
};



#endif //SNAKE_WINDOW_HPP
