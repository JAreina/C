#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	char resultado[100];
	
	/*int strlen (const char *s1);*/
	
	char cadena[]="En un lugar de la Mancha";
	printf("%d \n", strlen(cadena));
	
	
	/*char *strcpy (char *s1, const char *s2);*/
	
	memset(resultado, '\0', sizeof(cadena));
	printf("%s \n", strcpy(resultado,cadena));
	return 0;
}

/* 
char *strcpy (char *s1, const char *s2);
char *strcat (char *s1, consta char *s2);
int strlen (const char *s1);
int strcmp (const char *s1, const char *s2);*/