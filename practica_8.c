/* 3.8.1.  3 x 3 Matrix and ask to the user the 3 x 3 values int, ask for a scalar int value and multiply the matrix by the scalar */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int mato[3][3], mate[3][3], i, j , esc;
	printf("Bienvenido\n");
	
	for(i=0;i<3;i++)
	for(j=0;j<3;j++){
	printf("Ingrese el valor de la posicion %d,%d   ",i+1,j+1);
	scanf("%d",&mato[i][j]);
	}
	system("cls");
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	printf(" %4d ",mato[i][j]);
	}
	printf("\n");
	}
	printf("Ingrese el valor escalar  ");
	scanf("%d",&esc);
	
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	printf(" %4d ",mato[i][j]*esc);
	}
	printf("\n");
	}
	
	return 0;
}
