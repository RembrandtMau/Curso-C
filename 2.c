#include <stdio.h>
#include <cJSON.h>

void suma(float num1, float num2);
void resta(float num1, float num2);
void multiplicacion(float num1, float num2);
void division(float num1, float num2);



int main()
{
    
    float num1, num2;
    int Opiones;
    
    printf("Ingresa el primer numero:\n");
    scanf("%f", &num1);
    
    printf("Ingresa el segundo numero:\n");
    scanf("%f", &num2);
    
    printf("Ingresa que operación quieres hacer:\n1 = suma\n2 = resta \n3 = multiplicación\n4 = divición.\n");
    scanf("%d", &Opiones); 
    

    switch (Opiones)
    {
        case 1:
        suma(num1, num2);
        break;
    
        case 2:
        resta(num1, num2);
        break;
        
        case 3:
        multiplicacion(num1, num2);
        break;
        
        case 4:
        division(num1, num2);
        break;
        
        default:
            printf("Opción inválida\n");
    }
    return 0;
}


void suma(float num1, float num2)
{
    float resultado = num1 + num2;
        printf("El resultado de tu suma es: %.2f", resultado);
}

void resta(float num1, float num2)
{
    float resultado = num1 - num2;
        printf("El resultado de tu resta es: %.2f", resultado);
}

void multiplicacion(float num1, float num2)
{
    float resultado = num1 * num2;
        printf("El resultado de tu multiplicación es: %.2f", resultado);
}

void division(float num1, float num2)
{
    float resultado = num1 / num2;
        printf("El resultado de tu división es: %.2f", resultado);
}
