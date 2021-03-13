#include <calculator_operations.h>

int addition(int operand1, int operand2)
{
    return operand1 + operand2;
}
 
int subtraction(int operand1, int operand2)
{
    return operand1 - operand2;
}

double multiplication(int operand1, int operand2)
{
    return operand1 * operand2;
}

double division(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}
float modulous(int operand1 , int operand2)
{
    return operand1 % operand2;
}


