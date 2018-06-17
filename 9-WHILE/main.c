#include <stdio.h>

int main(int argc, char **argv)
{
	char carac;
    carac = '\0';
    while( carac != 'A') carac = getchar();
	
	while ( (carac = getchar()) != 'B' )
           putchar(carac);
	return 0;
}
