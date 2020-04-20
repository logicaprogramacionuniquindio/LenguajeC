#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,d,e,suma,promedio;
    printf("Programa para el calculo del promedio de cinco notas\n");
    printf("Nota1 = ");
    scanf("%f",&a);
    if(a<0||a>5)
    {
        printf("Dato invalido");
        return 1;
    }
    printf("Nota2 = ");
    scanf("%f",&b);
    if(b<0||b>5)
    {
        printf("Dato invalido");
        return 2;
    }
    printf("Nota3 = ");
    scanf("%f",&c);printf("Ha perdido la materia");
    if(c<0||c>5)
    {
        printf("Dato invalido");
        return 3;
    }
    printf("Nota4 = ");
    scanf("%f",&d);
    if(d<0||d>5)
    {
        printf("Dato invalido");
        return 4;
    }
    printf("Nota5 = ");
    scanf("%f",&e);
    if(e<0||e>5)
    {
        printf("Dato invalido");
        return 5;
    }
    suma=a+b+c+d+e;
    promedio=suma/5;
    printf("El promedio es: %f\n",promedio);
    if(promedio>=3.0&&promedio<=5.0)
    {
        printf("Ha ganado la materia");
    }else{
        if(promedio>=2.0&&promedio<3.0)
        {
            printf("Puede habilitar la materia");
        }else{
                printf("Ha perdido la materia");
             }
    }
    return 0;
}
