//
// Created by 簡仲研 on 2024/8/7.
//

#ifndef SNAKE_TEXTBOX_HPP
#define SNAKE_TEXTBOX_HPP
#include <SFML/Graphics.hpp>

using MessageContainer = std::vector<std::string>;

class Textbox {
public:
    Textbox();

    Textbox(int l_visible, int l_charSize, int l_width, sf::Vector2f l_screenPos);
    ~Textbox();

    void Setup(int l_visible, int l_charSize, int l_width, sf::Vector2f l_screenPos);

    void Add(std::string l_message);
    void Clear();

    void Render(sf::RenderWindow &l_wind);
private:
    MessageContainer m_messages;
    int m_numVisible;

    sf::RectangleShape m_backdrop;
    sf::Font m_font;
    sf::Text m_content;
};


#endif //SNAKE_TEXTBOX_HPP
