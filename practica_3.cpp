#include <stdio.h>;
#include <stdlib.h>;

int main()
{
	char c;
	printf("Ingrese un caracter\n");
	c=getchar();
	int a = (int) c;
	if(48 <= a&&a <=57)
	
		printf("Numero ingresado\n");
	else
	  if(65 <= a&&a <= 90)
	  	 printf("Mayuscula ingresada\n");
	  	else
		  	if(97 <= a&&a <=122)
		  		printf("Minuscula ingresada\n");
			  else
			  	printf("Simbolo ingresado\n");
			  	
	system("pause");
	return 0;
}
