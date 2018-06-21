#include <stdio.h>
void cuadrados()
{
    int contador;
    for(contador = 1; contador < 10; contador++)
	printf("%d\n", contador * contador);
}
int main(int argc, char** argv)
{
    cuadrados();
    return 0;
}
