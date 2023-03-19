#include "swap2.h"
int main(int argc, char const *argv[])
{
    swap2 s(1, 2);
    std::cout << "before swap" << std::endl;
    s.printInfo();
    
    std::cout << "after swap" << std::endl;
    s.run();
    s.printInfo();
    return 0;
}
