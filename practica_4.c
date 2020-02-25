#include <stdio.h>
#include <stdlib.h>

int main()
{
	char op;
	float num1,num2,resultado=0.0f;
	
	printf("Bienvenido a la calculadora simple\n\n");
	printf("Ingrese una cifra, el tipo de operacion y la segunda cifra:\n ");
	scanf("%f %c %f",&num1,&op,&num2);
	switch (op)
	{
		case '+':
			resultado= num1+num2;
			break;
			
		case '-':
			resultado= num1-num2;
			break;
			
		case '*':
			resultado= num1*num2;
			break;
			
		case '/':
			resultado= num1/num2;
			break;
			
		default:
			printf("Numero invalido\n");
			
			
		
	}
	printf("%.2f %c %.2f = %.2f\n\n",num1,op,num2,resultado);
	system("pause");
	return 0;
}
