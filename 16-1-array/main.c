#include <stdio.h>
int main()
{
    int datos[10][10], i, j;
    // se carga la matriz con la suma de filas y columnas, se visualiza
    for(i = 0; i < 10; i++)
	{
	    for(j = 0; j < 10; j++)
		{
		    datos[i][j] = i + j;
		    printf("%d\t", datos[i][j]);
		}
	    printf("\n");
	}
    return (0);
}
