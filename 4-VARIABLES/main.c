#include <stdio.h>

int main(int argc, char **argv)
{
	
	// int
	int age;

	age = 30;
	printf("TIPO INT\n");
	printf("The C language is over %d years old!\n", age);
	age= 1000;
	printf("The C language is over %d years old!\n", age);
	
	age = 32;
    printf("%s is %d years old!\n", "Juan", age);
    printf("That’s %d months!\n", age*12);
	
	
	// char 
	char x, y, z;

     x = 'A';
     y = 'B';
     z = 'C';

     printf("TIPO CHAR : It’s as easy as %c%c%c\n", x,y,z);

	 x = 'A';
     y = x+1;
     z =  y+2;

     printf("TIPO CHAR : B = x+1 %c%c%c\n", x,y,z);
	 
	 
	 printf("TIPO FLOAT");
	 
	 float pi;

      pi = 22.00 / 7.0;  // AÑADIENDO LOS .00 A LOS ENTEROS 
      printf("The ancients calculated PI as %f.\n", pi);

	return(0);
}
