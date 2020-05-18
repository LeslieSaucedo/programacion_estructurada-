#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char informacion[8][20];
char aux[15];
void insertar_arreglo();


int main(){
	printf("Ingrese el ID del alumno: ");
	gets(informacion[0]);
	//strcpy(informacion[0], aux);
	system("cls");
	
	printf("Ingrese el nombre del alumno: ");
	gets(informacion[1]);
	system("cls");
	
	printf("Ingrese el primer apellido del alumno: ");
	gets(informacion[2]);
	system("cls");
	
	printf("Ingrese el segundo apellido del alumno: ");
	gets(informacion[3]);
	system("cls");
	
	printf("Ingrese la fecha de nacimiento del alumno: ");
	gets(informacion[4]);
	system("cls");
	
	printf("Ingrese el nombre de la escuela del alumno: ");
	gets(informacion[5]);
	system("cls");
	
	printf("Ingrese el grado del alumno: ");
	gets(informacion[6]);
	system("cls");
	
	printf("Ingrese la carrera del alumno: ");
	gets(informacion[7]);
	system("cls");
	
	printf("Ingrese el genero del alumno: ");
	gets(informacion[8]);
	system("cls");

	printf("El ID del alumno es: %s\n\n", informacion[0]);
	printf("El nombre del alumno es: %s\n\n", informacion[1]);
	printf("El apellido del alumno es: %s\n\n", informacion[2]);
	printf("El segundo apellido del alumno es: %s\n\n", informacion[3]);
	printf("la fecha de nacimiento del alumno es: %s\n\n", informacion[4]);
	printf("El nombre la escuela del alumno es: %s\n\n", informacion[5]);
	printf("El grado del alumno es: %s\n\n", informacion[6]);
	printf("La carrera del alumno es: %s\n\n", informacion[7]);
	printf("El genero del alumno es: %s\n\n", informacion[8]);
}


