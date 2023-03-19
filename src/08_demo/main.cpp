#include "Gun.h"
#include "Soldier.h"
#include <iostream>
int main(int argc, char const* argv[]) {
    std::cout << "Hello World!" << std::endl;
    Gun* ptr_gun = new Gun(10, "AK-47");
    Soldier* ptr_soldier = new Soldier("John", ptr_gun);
    for (auto i = 0; i < 11; i++) {
        ptr_soldier->fire();
    }
    ptr_soldier->addBulletToGun(5);
    return 0;
}
