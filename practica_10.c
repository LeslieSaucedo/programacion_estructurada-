#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct informacion {
	char ID[10];
	char nombre[15];
	char pApellido[15];
	char sApellido[15];
	char bDate[10];
	char nEscuela[40];
	char grado[10];
	char career[15];
	char genero[12];
}estudiante;

int main(){
	printf("Ingrese el ID del alumno: ");
	gets(estudiante.ID);
	//strcpy(informacion[0], aux);
	system("cls");
	
	printf("Ingrese el nombre del alumno: ");
	gets(estudiante.nombre);
	system("cls");
	
	printf("Ingrese el primer apellido del alumno: ");
	gets(estudiante.pApellido);
	system("cls");
	
	printf("Ingrese el segundo apellido del alumno: ");
	gets(estudiante.sApellido);
	system("cls");
	
	printf("Ingrese la fecha de nacimiento del alumno: ");
	gets(estudiante.bDate);
	system("cls");
	
	printf("Ingrese el nombre de la escuela del alumno: ");
	gets(estudiante.nEscuela);
	system("cls");
	
	printf("Ingrese el grado del alumno: ");
	gets(estudiante.grado);
	system("cls");
	
	printf("Ingrese la carrera del alumno: ");
	gets(estudiante.career);
	system("cls");
	
	printf("Ingrese el genero del alumno: ");
	gets(estudiante.genero);
	system("cls");

	printf("El ID del alumno es: %s\n\n", estudiante.ID);
	printf("El nombre del alumno es: %s\n\n", estudiante.nombre);
	printf("El apellido del alumno es: %s\n\n", estudiante.pApellido);
	printf("El segundo apellido del alumno es: %s\n\n", estudiante.sApellido);
	printf("la fecha de nacimiento del alumno es: %s\n\n", estudiante.bDate);
	printf("El nombre la escuela del alumno es: %s\n\n", estudiante.nEscuela);
	printf("El grado del alumno es: %s\n\n", estudiante.grado);
	printf("La carrera del alumno es: %s\n\n", estudiante.career);
	printf("El genero del alumno es: %s\n\n", estudiante.genero);
}


