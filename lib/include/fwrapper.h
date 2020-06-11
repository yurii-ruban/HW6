#ifndef _FWRAPPER_H
#define _FWRAPPER_H

#include <functional>

using func_t = std::function<int(int, int)>;

int add(int, int);
int divide(int, int);
int multiply(int, int);
int subtract(int, int);

struct operation_t
{
    char m_operation;
    func_t m_func;

    operation_t(char operation, func_t func = nullptr);
    operation_t();
};

#endif