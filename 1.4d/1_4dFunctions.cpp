#include <iostream>
 
void doIt(int x)
{
    int y = 4;
    std::cout << "doIt: x = " << x << " y = " << y << std::endl;
    x = 3;
    std::cout << "doIt: x = " << x << " y = " << y << std::endl;
}
 
int main()
{
    int x = 1;
    int y = 2;
    std::cout << "main: x = " << x << " y = " << y << std::endl;
    doIt(x);
    std::cout << "main: x = " << x << " y = " << y << std::endl;
    return 0;
}