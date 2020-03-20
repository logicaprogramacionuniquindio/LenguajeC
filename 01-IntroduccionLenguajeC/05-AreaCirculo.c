#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r,a;
    printf("Programa para el calculo del area de un circulo\n");
    printf("Radio = ");
    scanf("%f",&r);
    a=3.1416*r*r;
    printf("El area del circulo es: %f",a);
    return 0;
}
