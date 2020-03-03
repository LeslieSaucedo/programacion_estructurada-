#include <stdio.h>
#include <stdlib.h>
int main(){
	int num=0,sum=0,cant=0;
	float prom=0;
	do{
		printf("Introduzca un numero entero\nPara terminar ingrese -1\n\t");
			scanf("%d",&num);
			if(num>=0){
			sum+=num;
			cant++;	
			}
		
	}while(num>=0);
		prom=sum/cant;
	printf("La suma de los numeros ingresados es:%d\nLa cantidad de numeros es %d\nEl promedio de los numeros es: %.2f\n\n",sum,cant,prom);
	system("pause");
	return 0;
}
