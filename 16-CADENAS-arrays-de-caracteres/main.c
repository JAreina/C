#include <stdio.h>

int main(int argc, char** argv)
{
    /*char cadena[5] = "hola";
    char cadenas[5] = { 'h', 'o', 'l', 'a', '\0' };
     
	  */
	char nombre[15], apellidos[30];
printf("Introduce tu nombre: ");
scanf("%s",nombre);
printf("Introduce tus apellidos: ");
scanf("%s",apellidos);
printf("Usted es %s %s\n",nombre,apellidos);

    return 0;
}
