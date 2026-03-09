#include <stdio.h>
int main() {
    int n = 0, flag = 0;
    float suma = 0, calificacion;
    do
    {
    printf("Ingresa la calificacion\n");
    scanf("%f", &calificacion);
    printf("¿Deseas ingresar otra calificacion? 1 para si, 0 para no\n");
    scanf("%d", &flag);
    suma += calificacion;
    n++;
    } while (flag==1);
    printf("El promedio es: %.2f", suma/n);    
    return 0;
}