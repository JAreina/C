#include <stdio.h>

int main(int argc, char** argv)
{
    int valor;
    while(scanf("%d", &valor) == 1 && valor != 0)
	{
	    if(valor < 0)
		{
		    printf("Valor no valido\n");
		    break;
		    /* Salir del ciclo */
		}
	    if(valor > 100)
		{
		    printf("Valor no valido\n");
		    continue;
		    /* Pasar al principio del ciclo nuevamente */
		}
	    printf("Se garantiza que el valor leido esta entre 1 y 100");
	}
    return 0;
}
