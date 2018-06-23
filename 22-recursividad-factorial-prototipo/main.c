#include <stdio.h>

int factorial(int); // prototipo, define funcion que se va a usar
                    // antes de su declaracion

int main(int argc, char** argv)
{
    printf("%d\n",factorial(6));
    return 0;
}
int factorial(int x)
{
    int facto;
    if(x == 1)
	return 1;
    facto = x * factorial(x - 1);
    return facto;
}