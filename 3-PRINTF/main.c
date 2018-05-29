#include <stdio.h>

int main(int argc, char **argv)
{
	//no añade salto de línea al final como puts
   printf("This the way the world ends\n");
   printf("Not with a bang but a whimper\t");
   printf("Hello!\nMy name is \"Hector.\"\n\n");


    // placeholders marcadores de posicion
	 printf("este número: %d no es igual a este: %d  \n", 44,108);
	 printf("SUMA  2+2=%d\n", 2+2);
     printf("Mulplica  2*21=%d\n", 2*21);
 	 printf("You are a %s\n", "programmer");
	 
	 printf("You are a %c %s\n", 'C', "programmer");// c char ;   s string
	 printf("I got %d% on my C exam!\n", 10); // ERRROR DEL TANTO POR CIENTO
	  printf("I got %d%% on my C exam!\n", 100);

	return 0;
}
