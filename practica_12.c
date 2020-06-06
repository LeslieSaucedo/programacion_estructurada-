#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

#define POSIBLES 10

struct student
{
	int studentId;
	char firstName[' '];
	char firstLastName[' '];
	char secondLastName[' '];
	char birthDate[' '];	// dd-mm-yyyy
	char school[' '];
	char grade[' '];
	char career[' '];
	char gender[' '];
};

void crearEstudiante(struct student *estudiante, int studentId, char firstName[], char firstLastName[], char secondLastName[], char birthDate[], char school[], char grade[], char career[], char gender[]);

int main()
{
	setlocale(LC_ALL, "spanish");
	
	struct student studentList[POSIBLES];
	int opcion, n = 0, i;
	
	// variables temporales
	bool valido;
	int temp, studentId;
	char firstName[' '], firstLastName[' '], secondLastName[' '], birthDate[' '], school[' '], grade[' '], career[' '], gender[' '];
	
	// Control de registro de estudiantes
	do
	{
		printf("---------------------LECTURA---------------------\n\n");
		
		// Matricula
		do
		{
			printf("Introduzca la matrícula del estudiante: ", n+1);
			scanf("%i", &studentId);
			
			valido = true;
			
			if (studentId < 1)
			{
				valido = false;
				printf("\n\tError: la matrícula debe ser mayor a 0\n\n");
			}
			else
				for (i = 0; i < n; i++)
					if (studentId == studentList[i].studentId)
					{
						valido = false;
						printf("\n\tError: la matrícula introducida ya le pertenece a otro estudiante\n\n");
					}
		}
		while (!valido);
		
		// Primer nombre
		do
		{
			printf("Introduzca el primer nombre(s) del estudiante: ", i+1);
			fflush(stdin);
			gets(firstName);
			
			if (strlen(firstName) < 1)
				printf("\n\tError: introduzca un nombre\n\n");
			else
				if (strlen(firstName) > 32)
					printf("\n\tError: el límite de caracteres es de 32\n\n");
		}
		while (strlen(firstName) < 1 || strlen(firstName) > 32);
		
		// Primer apellido
		do
		{
			printf("Introduzca el primer apellido del estudiante: ", i+1);
			fflush(stdin);
			gets(firstLastName);
			
			if (strlen(firstLastName) < 1)
				printf("\n\tError: introduzca el primer apellido\n\n");
			else
				if (strlen(firstLastName) > 100)
					printf("\n\tError: el límite de caracteres es de 32\n\n");
		}
		while (strlen(firstLastName) < 1 || strlen(firstLastName) > 32);
		
		// Segundo apellido
		do
		{
			printf("Introduzca el segundo apellido del estudiante %i (opcional): ", i+1);
			fflush(stdin);
			gets(secondLastName);
			
			if (strlen(secondLastName) > 32)
				printf("\n\tError: el límite de caracteres es de 32\n\n");
		}
		while (strlen(secondLastName) > 32);
		
		// Fecha de nacimiento
		do
		{
			printf("Introduzca la fecha de nacimiento del estudiante %i usando el formato dd/mm/yyyy, incluyendo los '/': ", i+1);
			fflush(stdin);
			gets(birthDate);
			
			if (strlen(birthDate) < 1)
				printf("\n\tError: introduzca la fecha de nacimiento\n\n");
			else
				if (strlen(birthDate) > 10)
					printf("\n\tError: el límite de caracteres es de 10\n\n");
				else
					if (birthDate[2] != '/' || birthDate[5] != '/' || strlen(birthDate) != 10)
						printf("\n\tError: la fecha de nacimiento es invalida\n\n");
		}
		while (strlen(birthDate) < 1 || strlen(birthDate) > 10 || birthDate[2] != '/' || birthDate[5] != '/' || strlen(birthDate) != 10);
		
		// Escuela
		do
		{
			printf("Introduzca el nombre de la escuela del estudiante: ", i+1);
			fflush(stdin);
			gets(school);
			
			if (strlen(school) < 1)
				printf("\n\tError: introduzca el nombre de la escuela\n\n");
			else
				if (strlen(school) > 32)
					printf("\n\tError: el límite de caracteres es de 32\n\n");
		}
		while (strlen(school) < 1 || strlen(school) > 32);
		
		// Grado
		do
		{
			printf("Introduzca el grado del estudiante: ", i+1);
			fflush(stdin);
			gets(grade);
			
			if (strlen(grade) < 1)
				printf("\n\tError: introduzca el grado\n\n");
			else
				if (strlen(grade) > 32)
					printf("\n\tError: el límite de caracteres es de 32\n\n");
		}
		while (strlen(grade) < 1 || strlen(grade) > 32);
		
		// Carrera
		do
		{
			printf("Introduzca la carrera del estudiante: ", i+1);
			fflush(stdin);
			gets(career);
			
			if (strlen(career) < 1)
				printf("\n\tError: introduzca la carrera\n\n");
			else
				if (strlen(career) > 32)
					printf("\n\tError: el límite de caracteres es de 32\n\n");
		}
		while (strlen(career) < 1 || strlen(career) > 32);
		
		// Genero
		do
		{
			printf("Introduzca el género del estudiante: ", i+1);
			fflush(stdin);
			gets(gender);
			
			if (strlen(gender) < 1)
				printf("\n\tError: introduzca el género\n\n");
			else
				if (strlen(gender) > 32)
					printf("\n\tError: el límite de caracteres es de 32\n\n");
		}
		while (strlen(gender) < 1 || strlen(gender) > 32);
		
		crearEstudiante(&studentList[n], studentId, firstName, firstLastName, secondLastName, birthDate, school, grade, career, gender);
		
		n++;
		opcion = 2;
		
		if (n < POSIBLES)
		{
			// Opcion de agregar nuevo estudiante
			do
			{
				printf("Desea registrar otro estudiante? 1-Si 2-No\nOpcion: ");
				scanf("%i", &temp);
				
				valido = true;
				if (temp != 1 && temp != 2)
				{
					printf("\n\tError: las opciones validas son 1-Si y 2-No\n\n");
					valido = false;
				}
			}
			while (!valido);
			opcion = temp;
		}
		
		system("cls");
	}
	while (opcion == 1);
	
	printf("---------------------REPORTE---------------------\n\n");
	for (i = 0; i < n; i++)
	{
		printf("Estudiante %i\n", i+1);
		printf("\tMatricula: %i\n", studentList[i].studentId);
		printf("\tPrimer nombre: %s\n", studentList[i].firstName);
		printf("\tPrimer apellido: %s\n", studentList[i].firstLastName);
		if (strlen(studentList[i].secondLastName) > 0)
			printf("\tSegundo apellido: %s\n", studentList[i].secondLastName);
		printf("\tFecha de nacimiento: %s\n", studentList[i].birthDate);
		printf("\tEscuela: %s\n", studentList[i].school);
		printf("\tGrado: %s\n", studentList[i].grade);
		printf("\tCarrera: %s\n", studentList[i].career);
		printf("\tGénero: %s\n", studentList[i].gender);
		printf("\n\n");
	}
	
	system("pause");
	return 0;
}

void crearEstudiante(struct student *estudiante, int studentId, char firstName[], char firstLastName[], char secondLastName[], char birthDate[], char school[], char grade[], char career[], char gender[])
{
	estudiante->studentId = studentId;
	strcpy(estudiante->firstName, firstName);
	strcpy(estudiante->firstLastName, firstLastName);
	strcpy(estudiante->secondLastName, secondLastName);
	strcpy(estudiante->birthDate, birthDate);
	strcpy(estudiante->school, school);
	strcpy(estudiante->grade, grade);
	strcpy(estudiante->career, career);
	strcpy(estudiante->gender, gender);
}
