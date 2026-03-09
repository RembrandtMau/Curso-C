#include <stdio.h>
int main ()
{

int calificaciones, n;
float promedio, suma;
suma = 0;
printf("Cuantas materias deseas calcular?\n");
scanf("%i", &n);
for(int i=1;i<=n;i++)
{
printf("Ingresa la calificación de tu materia %i\n", i);
scanf("%i", &calificaciones);
//suma+=calificaciones;
suma=suma + calificaciones;
}

promedio=suma/n;
printf("El promedio es: %f\n", promedio);









return 0;
}