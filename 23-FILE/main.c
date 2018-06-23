#include <stdio.h>

int main(int argc, char **argv)
{
	
	FILE *archivo;
	int cerrado;
	
	if((archivo = fopen("fichero1","w+"))== NULL);
	perror( "No se puede abrir el fichero\n");
	
	cerrado = fclose(archivo);//devuelve 0 en caso de éxito y EOF en caso de error
	printf("%d\n",cerrado);
	return 0;
}
