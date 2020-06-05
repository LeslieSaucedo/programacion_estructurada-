/* 3.71. Ask to the user less than 100 and calculate all the primes numbers equals or less the given number */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

int main(int argc, char *argv[]) {
	int n,i,x;
	int a[100];
	
	printf("Ingrese un numero\n\t");
	scanf("%d",&n);
	
	while(n<1 && n>100){
		printf("Numero no valido, ingrese otro numero");
		scanf("%d",&n);	
	}
	
	for(i=1;i<=n;i++){
		a[i]=i;
	}
	for(i=1;i<=n;i++){
		if(a[i]==2 || a[i]==3 || a[i]==5 || a[i]==7){
			printf("%d el numero ingresado es primo\n",a[i]);
		}else{
	if(a[i]%2!=0 && a[i]%3!=0 && a[i]%5!=0 && a[i]%7!=0){
	printf("%d el numero ingresado es primo\n",a[i]);
	}
	else{
		printf("%d el numero ingresado no es primo\n",a[i]);
	}
	}
}
	return 0;
}
