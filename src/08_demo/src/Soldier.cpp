#include "Soldier.h"
#include <iostream>
Soldier::Soldier(std::string name, Gun* ptr_gun) {
    _name = name;
    _ptr_gun = ptr_gun;
}
Soldier::~Soldier(){
    delete this->_ptr_gun;
}
void Soldier::addBulletToGun(int count) {
    this->_ptr_gun->addBullets(count);
    std::cout << "Bullets added: " << count << std::endl;
}
void Soldier::fire(){
    if (this->_ptr_gun->shoot() == true) {
        std::cout << "Bang!" << std::endl;
    } else {
        std::cout << "Out of bullets!" << std::endl;
    }
}