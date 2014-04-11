#include <iostream>
#include <unistd.h>

int main()
{
    unsigned int timeout = 1;
    for(int i = 0; i < 30; ++i)
    {
        std::cout << "current counter: " << i << std::endl;
        sleep(timeout);
    }

    return 0;
}

