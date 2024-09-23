/*
** EPITECH PROJECT, 2024
** CMakeSFMLProject
** File description:
** main.cpp
*/

#include <SFML/Graphics.hpp>
#include "sprites/champion.hpp"

int main()
{
    auto *oui = new Champion("../../assets/champ.png");
    auto window = sf::RenderWindow{ { 1920u, 1080u }, "Turret Game" };
    window.setFramerateLimit(144);

    while (window.isOpen()) {
        for (auto event = sf::Event{}; window.pollEvent(event);) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
        window.clear();
        oui->draw(window);
        window.display();
    }
}
