#pragma once
#include <iostream>
class swap2 {
   private:
    /* data */
    int _a;
    int _b;

   public:
    swap2(int a, int b){
        _a = a;
        _b = b;
    };
    void run();
    void printInfo();
};

