#include <stdio.h>
#include <stdlib.h>

int main()
{
int num=0,sum=0,cant=0;
float prom=0;
printf("Bienvenido\nPara terminar ingrese -1");
while(num>=0)
{
	sum+=num;
	cant++;
	printf("\nIngrese su numero\n\n");
	scanf("%d",&num);
}
prom=((float)sum)/(cant-1);
printf("La suma de los numeros ingresados es:%d\nLa cantidad de numeros es %d\nEl promedio de los numeros es: %.2f",sum,cant-1,prom);

system("pause");
return 0;
}

