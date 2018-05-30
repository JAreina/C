#include<stdio.h>


int main()
 {
	 
	  int x;
	 float y;
	 char z;
	char cadena[24]; 
	 

/*
    printf("Type an integer: ");
    scanf("%d", &x);// & OPERADOR DE MEMORIA
    printf("Integer %d\n", x);
	


	 printf("Type a floating point value: ");
	 scanf("%f", &y);
	 printf("Floating point value %f\n", y);
	
	 
	   Type an integer: 55
        Integer 55
        Type a floating point value: 67.88
        Floating point value 67.879997
	  
	  


	 printf("Type a  CARACTER value: ");
	 scanf("%c", &z);
	 printf("caracter value %c\n", z);
 

     printf("Type a  cadena: ");
	 scanf("%s", cadena);   // strings sin &
	 printf("cadena: %s\n", cadena);
 
 */
 
     pedirNombre();
 
      
 return(0);
 }
 
 
 
  void pedirNombre(){
		  char input[64];
            // para recoger cadenas fgets()
             printf("Instructions: ");
             fgets(input,64,stdin); 
             puts("Thank you! Here are your instructions:");
             puts(input);
	  }