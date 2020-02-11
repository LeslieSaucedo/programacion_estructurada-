#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

unsigned char boolean;
char character;

int main()
{
	//Int
	int a=3,b=4,c;
    c=a+b;	
	printf("suma:\n%d+%d=%d\n\n",a,b,c);
	c=a-b;	
	printf("resta:\n%d-%d=%d\n\n",a,b,c);
	c=a*b;	
	printf("multiplicacion:\n%d*%d=%d\n\n",a,b,c);
	c=a/b;	
	printf("division:\n%d/%d=%d\n\n",a,b,c);
	c=a%b;	
	printf("residuo:\n%d/%d,r=%d\n\n",a,b,c);
	a++;
	printf("incremento:\n%d\n\n",a);
	a=3;
	b--;
	printf("decremento:\n%d\n\n",b);
	b=4;
	c=a>b;
	printf("mayor que:\n%d>%d=%d\n\n",a,b,c);
	c=a<b;
	printf("menor que:\n%d<%d=%d\n\n",a,b,c);
	c=a==b;
	printf("igual que:\n%d==%d=%d\n\n",a,b,c);
	
	//Boolean
	c=a<b&&a>b;
	printf("and:\n%d<%d && %d>%d=%d\n\n",a,b,a,b,c);
	c=a<b||a>b;
	printf("or:\n%d<%d || %d>%d=%d\n\n",a,b,a,b,c);
	c=!(a<b&&a>b);
	printf("not:\n%d<%d && %d>%d=%d\n\n",a,b,a,b,c);
	c=(a>b)==(a>b);
	printf("equals:\n%d<%d == %d>%d=%d\n\n",a,b,a,b,c);
	
	//Char
	char da='3',db='4';
	bool dc;
	dc=da>db;
	printf("mayor que:\n %s > %s = %d \n\n", '3', '4', '3'>'4');
	//dc=da<db;
	//printf("menor que:\n%s<%s=%d\n\n",da,db,dc);
	//dc=da==da;
	//printf("igual que:\n%s==%s=%d\n\n",da,db,dc);
	
	
	
	
	system("pause");
	return 0;
}
