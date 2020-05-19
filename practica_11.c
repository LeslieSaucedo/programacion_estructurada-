#include <stdio.h>
#include <stdlib.h>

long fibonacci(int);

int main(){
	int x;
	int i, j;
	long fib[200];
	printf("Ingrese el numero de terminos a generar: ");
	scanf("%d", &x);
	for(i = 0; i <= x; i++){
		fib[i] = fibbonacci(i);
	}
	
	printf("Serie terminada, la serie es:  \n\n");
	for(i = 0; i <=  x/11; i++){
		int y;
		for(j = 0; j <= 10; j++){
			if(y <= x){
			
			printf("%ld  ", fib[y]);
			y++;
		}
		}
		printf("\n\n");
	}
}

int fibbonacci(int n) {
   if(n == 0){
      return 0;
   } else if(n == 1) {
      return 1;
   } else {
      return (fibbonacci(n-1) + fibbonacci(n-2));
   }
}
