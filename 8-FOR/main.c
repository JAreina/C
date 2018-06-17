#include <stdio.h>

int main(int argc, char **argv)
{
	
	int x;
	int a,y;
	int tres,cuatro,z;
	
	
		
	for ( x=0; ( (x>3) && (x<9) ); x++ )
		 printf("xx=%d\n",x);
    for (  a=0, y=4; ( (a==0) || (y<9) ); a++, y+=2)
	     printf("a=%d\n",a);
    for (tres=0, cuatro=4, z=4000; z; z/=10)
         printf("tres=%d\n",tres);	
	return 0;
}