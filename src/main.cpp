#include "Entity.h"
#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>

sf::Vector2f Entity::sScaleFactor{ 50.F, 50.F };

int main()
{
    auto window = sf::RenderWindow(sf::VideoMode({ 800u, 600u }), "CMake SFML Project");
    window.setFramerateLimit(144);

    Entity a{};
    a.move({ 10, 1 });

    while (window.isOpen()) {
        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
        }

        window.clear();
        a.draw(window);
        window.display();
    }
}
