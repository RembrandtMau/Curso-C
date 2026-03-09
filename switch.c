#include <stdio.h>
int main() {
    int opcion, salir = 0;
do
{
    printf("Selecciona la opcion deseada \n 1- Opción 1\n 2- Opción 2 \n 3- Opción 3\n 4- Opción 4\n 5- Salir\n");
    scanf("%d", &opcion);
    switch (opcion)
    {case 1:
    printf("Opción 1 seleccionada\n");
    break;
    case 2:
    printf("Opción 2 seleccionada\n");
    break;  
    case 3:
    printf("Opción 3 seleccionada\n");
    break;
    case 4:
    printf("Opción 4 seleccionada\n");
    break;
    case 5:
    printf("\nSaliendo del programa...\n");
    salir = 1 ;
    break;
    default:
    printf("Opción no válida\n");
    break;
    }
} while (!salir);
return 0;
}