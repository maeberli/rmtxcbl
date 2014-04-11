#include <iostream>

int main()
{
    std::cout << "Hey you, the next instruction will" << std::endl
              << " cause a floating point exception, " << std::endl
              << " due a division by zero. So be aware!" << std::endl;

    int result = 55 / 0;

    std::cout << "Try to print out the result:  " << result << std::endl;
    return 0;
}
