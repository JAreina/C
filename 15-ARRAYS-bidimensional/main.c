#include <stdio.h>

int main(int argc, char** argv)
{
    int t, i, num[3][4];
    for(t = 0; t < 3; ++t)
	for(i = 0; i < 4; ++i)
	    num[t][i] = (t * 4) + i * 1;
    for(t = 0; t < 3; ++t)
	{
	    for(i = 0; i < 4; ++i)
		printf("num[%d][%d]=%d ", t, i, num[t][i]);
	    printf("\n");
	}
    return 0;
}


/* crear arrays otra forma 
int i[10] = {1,2,3,4,5,6,7,8,9,10};
int num[3][4]={0,1,2,3,4,5,6,7,8,9,10,11};

 */