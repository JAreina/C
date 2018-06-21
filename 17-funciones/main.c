#include <stdio.h>

float encontprom(int num1, int num2)
{
    float promedio;
    promedio = (num1 + num2) / 2.0;
    return (promedio);
}

int main(int argc, char** argv)
{
    int a = 7, b = 10;
    float resultado;
    resultado = encontprom(a, b);
    printf("Promedio=%f\n", resultado);
    return 0;
}
