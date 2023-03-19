#include "Gun.h"
#include <iostream>
Gun::Gun(int bulletCount, std::string type) {
    this->_bulletCount = bulletCount;
    _type = type;
}
void Gun::addBullets(int count) {
    this->_bulletCount += count;
}
bool Gun::shoot() {
    if (_bulletCount > 0) {
        _bulletCount--;
        return true;
    } else {
        return false;
    }
    
}