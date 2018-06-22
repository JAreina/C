#include <stdio.h>

int cuad(int x);
main()
{
    int t = 10;
    printf("REtorno funcion: %d \n valor variable : %d\n", cuad(t), t);
    return 0;
}

cuad(int x)
{
    x *=  x;
    return (x);
}