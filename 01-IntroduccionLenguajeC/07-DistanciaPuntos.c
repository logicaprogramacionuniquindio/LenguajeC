#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float d,x1,x2,y1,y2;
    printf("Programa para el calculo de la distancia entre dos puntos\n");
    printf("Punto 1\n");
    printf("x1 = ");
    scanf("%f",&x1);
    printf("y1 = ");
    scanf("%f",&y1);
    printf("x2 = ");
    scanf("%f",&x2);
    printf("y2 = ");
    scanf("%f",&y2);
    d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("La distancia entre los puntos es: %f",d);
    return 0;
}
