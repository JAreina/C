#include <stdio.h>

int main(int argc, char** argv)
{
   
	int variable, *puntero, **punteroAPuntero;
	variable = 10012;
	printf("VARIABLE TIENE: %d\n", variable);
	puntero = &variable;
	printf("PUNTERO TIENE: %d\n", *puntero);
	punteroAPuntero = &puntero;
	printf("PUNTERO A PUNTERO TIENE: %d\n", **punteroAPuntero); /* imprime el valor de variable */
	return 0;
}
