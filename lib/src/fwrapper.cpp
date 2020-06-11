#include "fwrapper.h"

int add(int a, int b)
{
    return a + b;
}

int divide(int a, int b)
{
    return a / b;
}

int multiply(int a,  int b)
{
    return a * b;
}

int subtract(int a, int b)
{
    return a - b;
}

operation_t::operation_t():m_operation('+'), m_func(add)
{

}

operation_t::operation_t(char operation, func_t func) : m_operation(operation), m_func(func)
{
    switch(m_operation)
    {
        case '+':
            m_func = add;
            break;
        case '-':
            m_func = subtract;
            break;
        case '*':
            m_func = multiply;
            break;
        case '/':
            m_func = divide;
            break;
    }
}
