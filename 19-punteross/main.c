#include <stdio.h>

int main(int argc, char **argv)
{
	int x = 103210; 
	int *punt = &x; 
	printf("valor puntero: %d \n valor variable:%d \n", *punt, x);
	
	
	int numeros[] ={ 10,12, 243, 13, 4, 5}; 
	int *puntNumeros = numeros;// no usa & numeros
	 printf("POSICION 2 DEL ARRAY NUMEROS %d\n", *(puntNumeros+2));
	
	numeros[2]= 30000;
	printf("POSICION 2 DEL ARRAY NUMEROS %d\n", *(puntNumeros+2));
	*(puntNumeros+2)=60000;
	printf("POSICION 2 DEL ARRAY NUMEROS %d\n", *(puntNumeros+2));
	return 0;
}
