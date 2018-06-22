#include <stdio.h>

int intercambia(int* x, int* y);

int main(int argc, char** argv)
{
    int x=200, y=300;
	printf("x: %d\n y: %d\n",x,y);
	
    // pasa la direccion de las variables con &x &y, por referencia
	intercambia(&x, &y); 
	
	printf("x: %d\n y: %d\n",x,y);
    return 0;
}

int intercambia(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
	return 0;
}