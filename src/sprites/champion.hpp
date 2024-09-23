/*
** EPITECH PROJECT, 2024
** CMakeSFMLProject
** File description:
** champion.hpp
*/

#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

class Champion {
public:
    explicit Champion(const std::string &texture_path);
    ~Champion();
    int getHp();
    int getPv();
    void setHp(int amount);
    void setPv(int amount);
    void printStat() const;
    void draw(sf::RenderWindow &window);
    void move(sf::Vector2i new_pos);
private:
    sf::Sprite _sprite;
    sf::Texture _texture;
    sf::Vector2i _pos;
    std::string _texturePath;
    int _hp;
    int _pv;
};