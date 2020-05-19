#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int matrix[3][3];
int escalar;
void llenar_matriz();
void multiplicacion();
void imprimir_matriz();

int main(){
	
	llenar_matriz();
	
	printf("Ingrese un escalalar para multiplicar la matriz :");
	scanf("%d", &escalar);
	
	multiplicacion();
	
	imprimir_matriz();
	
}

void llenar_matriz(){	
	int i, j, x;
	
	for(i = 0; i <= 2; i++){
		for(j = 0; j <= 2; j++){
			printf("Ingrese el valor de la fila %d de la columna %d: ", i, j);
			scanf("%d", &x);
			matrix[i][j] = x;
			fflush(stdin);
			system("cls");	
		}
	}		
}

void multiplicacion(){
	int i, j;
	for(i = 0; i <= 2; i++){
		for(j = 0; j <= 2; j++){
			matrix[i][j] = matrix[i][j]*escalar;
		}
	}
}

void imprimir_matriz(){
	int i, j;
	printf("La matriz es : \n\n");
	for(i = 0; i <= 2; i++){
		for(j = 0; j <= 2; j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
}








