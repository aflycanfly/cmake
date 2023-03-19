#pragma once // This is a preprocessor directive that prevents the file from being included more than once
#include <string> 
class Gun {
   private:
    int _bulletCount;
    std::string _type;

   public:
    Gun(int bulletCount, std::string type); 
    void addBullets(int count);
    bool shoot();
    
   
};



