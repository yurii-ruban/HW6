#include "fwrapper.h"
#include <iostream>

int main(int argc, char** argv)
{
    const std::size_t SIZE = 4;
    operation_t operations[SIZE] {'+', '-', '/', '*'};

    for(std::size_t i = 0; i < SIZE; ++i)
    {
        int arg1 = i;
        int arg2 = i + 1;
        auto res = operations[i].m_func(arg1, arg2);

        std::cout << arg1 << " " << operations[i].m_operation
                  << ' ' << arg2 << " = " << res << std::endl;
    }

    return 0;
}