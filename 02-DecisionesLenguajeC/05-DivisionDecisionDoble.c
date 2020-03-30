#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a,b,d;
	printf("programa para calcular una division\n");
	scanf("%f",&a);//Leer a
	scanf("%f",&b);//Leer b
	if(b!=0)
	{
		d=a/b;
		printf("El resultado es: %f",d);
	}else
	{
		printf("Error matematico");
	}
	return 0;
}