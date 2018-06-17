#include <stdio.h>

int main(int argc, char** argv)
{
    int opc;
    printf("1. Derivadas\n");
    printf("2. Limites\n");
    printf("3. Integrales\n");
    do {
	printf(" Teclear una opcion: ");
	scanf("%d", &opc);
	switch(opc) {
	case 1:
	    printf("\tOpcion 1 seleccionada\n\n");
	    break;
	case 2:
	    printf("\tOpcion 2 seleccionada\n\n");
	    break;
	case 3:
	    printf("\tOpcion 3 seleccionada\n\n");
	    break;
	default:
	    printf("\tOpcion no disponible\n\n");
	    break;
	}
    } while(opc != 1 && opc != 2 && opc != 3);
    return 0;
}
