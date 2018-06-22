#include <stdio.h>

int main(int argc, char **argv)
{
	int i,j;
	char *arrayPunteros[15];
	int arrayEnteros[15];
	
	for ( i =0;i<15;i++){
		arrayPunteros[i]= i+60;
		arrayEnteros[i]= i+60;
	}
	for( j =0;j<15;j++){
		printf("%c ",arrayPunteros[j]);
		printf("%d\n",arrayEnteros[j]);
	}
	return 0;
}
