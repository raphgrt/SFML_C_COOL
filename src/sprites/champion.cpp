/*
** EPITECH PROJECT, 2024
** CMakeSFMLProject
** File description:
** champion.cpp
*/

#include "champion.hpp"

Champion::Champion(const std::string &texture_path) {
    this->_hp = 100;
    this->_pv = 100;
    this->_texturePath = texture_path;
    this->_pos = (sf::Vector2i) {0, 0};
    if (!this->_texture.loadFromFile(this->_texturePath)) {
        std::cerr << "Texture Loading Error !" << std::endl;
    } else {
        this->_sprite.setTexture(this->_texture);
    }
}

int Champion::getHp() {
    return this->_hp;
}

int Champion::getPv() {
    return this->_pv;
}

void Champion::setHp(int amount) {
    this->_hp = amount;
}

void Champion::setPv(int amount) {
    this->_pv = amount;
}

void Champion::draw(sf::RenderWindow &window) {
    window.draw(this->_sprite);
}

void Champion::move(sf::Vector2i new_pos) {
    this->_pos = new_pos;
}

void Champion::printStat() const {
    std::cout << "Les HP :" << this->_hp << std::endl;
    std::cout << "Les PV :" << this->_pv << std::endl;
}

Champion::~Champion() = default;
