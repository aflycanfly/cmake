#pragma once
#include <string>
#include <Gun.h>
class Soldier {
   private:
    std::string _name;
    Gun* _ptr_gun;
   public:
    Soldier(std::string _name, Gun* _ptr_gun);
    ~Soldier();
    void addBulletToGun(int count);
    void fire();

};
