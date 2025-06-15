#ifndef INCLUDE_SRC_ENTITY_H_
#define INCLUDE_SRC_ENTITY_H_

#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Vector2.hpp>

class Entity
{
public:
    static sf::Vector2f sScaleFactor;
    Entity();
    Entity(const sf::Vector2i& initialPos, const sf::Color& color);
    void move(const sf::Vector2i& offset);
    void draw(sf::RenderWindow& window);

private:
    sf::Vector2i mCoord{ 0, 0 };
    sf::RectangleShape mSprite;
    sf::Color color{ sf::Color::Red };
};

#endif // INCLUDE_SRC_ENTITY_H_
