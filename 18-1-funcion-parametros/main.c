#include <ctype.h>
#include <stdio.h>

void imprime_mayusculas(char* cadena);

int main(int argc, char** argv)
{
    char x[80];
    printf("introduce una cadena de caracteres\n");
    gets(x);
    imprime_mayusculas(x); // llamada a la funcion por referencia
    printf("\n\nla cadena nueva es\n");
    printf("%s\n\n", x);
    return 0;
}

void imprime_mayusculas(char* cadena)
{
    int i;
    for(i = 0; cadena[i]; i++)
	   cadena[i] = toupper(cadena[i]);
}