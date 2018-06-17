#include <stdio.h>

int main(int argc, char** argv)
{
    int t;
    for(t = 0; t < 100; t++)
	{
	    printf("%d \n", t);
	    if(t == 10){
			printf("-------\n");
		    break;
		}
	   }
	
    int x;
    for(x = 0; x < 100; x++)
	{
	    if(x % 2)
		continue;
	    printf("%d \n", x);
	}

    return 0;
}
