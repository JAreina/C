#include <stdio.h>

int main(int argc, char **argv)
{
	
	FILE *archivo;
	int cerrado;
	int i;
	
	if((archivo = fopen("fichero1","a"))== NULL);
	perror( "No se puede abrir el fichero\n");
	
	// escribir
	for(i =0;i<6;i++)
	   fprintf(archivo, "estoy escribiendo\n");
	
	
	
	cerrado = fclose(archivo);//devuelve 0 en caso de éxito y EOF en caso de error
	printf("%d\n",cerrado);
	rename("fichero1","RENOMBRADO.txt");
	return 0;
}
