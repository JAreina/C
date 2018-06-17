
int main(int argc, char** argv)
{
    int num;
    do {
	printf("escribe un numero mayor de 100\n");

	scanf("%d", &num);
	if(num < 100) {
	    printf("%d ES MENOR de 100\n", num);
	}
    } while(num > 100);
    return 0;
}
