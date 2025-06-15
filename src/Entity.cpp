#include "Entity.h"
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Vector2.hpp>

Entity::Entity()
    : Entity({ 0, 0 }, sf::Color::Red)
{
}
Entity::Entity(const sf::Vector2i& initialPos, const sf::Color& color)
    : mCoord(initialPos)
{
    mSprite.setPosition(static_cast<sf::Vector2f>(mCoord));
    mSprite.setSize({ 1.F, 1.F });
    mSprite.setFillColor(color);
}

void Entity::draw(sf::RenderWindow& window)
{
    mSprite.setScale(sScaleFactor);
    mSprite.setPosition({ mCoord.x * sScaleFactor.x, mCoord.y * sScaleFactor.y });
    window.draw(mSprite);
}

void Entity::move(const sf::Vector2i& offset)
{
    mCoord += offset;
}
