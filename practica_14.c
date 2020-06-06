#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

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

int main()
{
	struct student studentList[POSIBLES];
	int opcion, n = 0, i;

	// variables temporales
	bool valido;
	int temp;
	char temporal[' '];
	
	// Control de registro de estudiantes
	do
	{
		printf("---------------------LECTURA---------------------\n\n");
		
		// Matricula
		do
		{
			printf("Introduzca la matricula del estudiante: ", n+1);
			scanf("%i", &temp);
			
			valido = true;
			
			if (temp < 1)
			{
				valido = false;
				printf("\n\tError: la matricula debe ser mayor a 0\n\n");
			}
			else
				for (i = 0; i < n; i++)
					if (temp == studentList[i].studentId)
					{
						valido = false;
						printf("\n\tError: la matricula introducida ya le pertenece a otro estudiante\n\n");
					}
		}
		while (!valido);
		studentList[n].studentId = temp;
		
		// Primer nombre
		do
		{
			printf("Introduzca el primer nombre(s) del estudiante: ", i+1);
			fflush(stdin);
			gets(temporal);
			
			if (strlen(temporal) < 1)
				printf("\n\tError: introduzca un nombre\n\n");
			else
				if (strlen(temporal) > 32)
					printf("\n\tError: el limite de caracteres es de 32\n\n");
		}
		while (strlen(temporal) < 1 || strlen(temporal) > 32);
		strcpy(studentList[n].firstName, temporal);
		
		// Primer apellido
		do
		{
			printf("Introduzca el primer apellido del estudiante: ", i+1);
			fflush(stdin);
			gets(temporal);
			
			if (strlen(temporal) < 1)
				printf("\n\tError: introduzca el primer apellido\n\n");
			else
				if (strlen(temporal) > 100)
					printf("\n\tError: el limite de caracteres es de 32\n\n");
		}
		while (strlen(temporal) < 1 || strlen(temporal) > 32);
		strcpy(studentList[n].firstLastName, temporal);
		
		// Segundo apellido
		do
		{
			printf("Introduzca el segundo apellido del estudiante %i (opcional): ", i+1);
			fflush(stdin);
			gets(temporal);
			
			if (strlen(temporal) > 32)
				printf("\n\tError: el limite de caracteres es de 32\n\n");
		}
		while (strlen(temporal) > 32);
		strcpy(studentList[n].secondLastName, temporal);
		
		// Fecha de nacimiento
		do
		{
			printf("Introduzca la fecha de nacimiento del estudiante %i usando el formato dd/mm/yyyy, incluyendo los '/': ", i+1);
			fflush(stdin);
			gets(temporal);
			
			if (strlen(temporal) < 1)
				printf("\n\tError: introduzca la fecha de nacimiento\n\n");
			else
				if (strlen(temporal) > 10)
					printf("\n\tError: el limite de caracteres es de 10\n\n");
				else
					if (temporal[2] != '/' || temporal[5] != '/' || strlen(temporal) != 10)
						printf("\n\tError: la fecha de nacimiento es invalida\n\n");
		}
		while (strlen(temporal) < 1 || strlen(temporal) > 10 || temporal[2] != '/' || temporal[5] != '/' || strlen(temporal) != 10);
		strcpy(studentList[n].birthDate, temporal);
		
		// Escuela
		do
		{
			printf("Introduzca el nombre de la escuela del estudiante: ", i+1);
			fflush(stdin);
			gets(temporal);
			
			if (strlen(temporal) < 1)
				printf("\n\tError: introduzca el nombre de la escuela\n\n");
			else
				if (strlen(temporal) > 32)
					printf("\n\tError: el limite de caracteres es de 32\n\n");
		}
		while (strlen(temporal) < 1 || strlen(temporal) > 32);
		strcpy(studentList[n].school, temporal);
		
		// Grado
		do
		{
			printf("Introduzca el grado del estudiante: ", i+1);
			fflush(stdin);
			gets(temporal);
			
			if (strlen(temporal) < 1)
				printf("\n\tError: introduzca el grado\n\n");
			else
				if (strlen(temporal) > 32)
					printf("\n\tError: el limite de caracteres es de 32\n\n");
		}
		while (strlen(temporal) < 1 || strlen(temporal) > 32);
		strcpy(studentList[n].grade, temporal);
		
		// Carrera
		do
		{
			printf("Introduzca la carrera del estudiante: ", i+1);
			fflush(stdin);
			gets(temporal);
			
			if (strlen(temporal) < 1)
				printf("\n\tError: introduzca la carrera\n\n");
			else
				if (strlen(temporal) > 32)
					printf("\n\tError: el limite de caracteres es de 32\n\n");
		}
		while (strlen(temporal) < 1 || strlen(temporal) > 32);
		strcpy(studentList[n].career, temporal);
		
		// Genero
		do
		{
			printf("Introduzca el genero del estudiante: ", i+1);
			fflush(stdin);
			gets(temporal);
			
			if (strlen(temporal) < 1)
				printf("\n\tError: introduzca el genero\n\n");
			else
				if (strlen(temporal) > 32)
					printf("\n\tError: el limite de caracteres es de 32\n\n");
		}
		while (strlen(temporal) < 1 || strlen(temporal) > 32);
		strcpy(studentList[n].gender, temporal);
		
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
		printf("\tGenero: %s\n", studentList[i].gender);
		printf("\n\n");
	}
	
	FILE *fp;
	fp = fopen("estudiantes_practica.json", "w+");
	fprintf(fp, "{\n\t\"Estudiantes\": [\n");
	for(i = 0; i < n; i++)
	{
		fprintf(fp, "\t\t{\"Matricula\": %i, \"PrimerNombre\": \"%s\", \"PrimerApellido\": \"%s\",", studentList[i].studentId, studentList[i].firstName, studentList[i].firstLastName);
		if (strlen(studentList[i].secondLastName) > 0)
			fprintf(fp, " \"SegundoApellido\": \"%s\",", studentList[i].secondLastName);
		fprintf(fp, " \"FechaDeNacimiento\": \"%s\", \"Escuela\": \"%s\", \"Grado\": \"%s\", \"Carrera\": \"%s\", \"Genero\": \"%s\"}", studentList[i].birthDate, studentList[i].school, studentList[i].grade, studentList[i].career, studentList[i].gender);
		if (i+1 != POSIBLES)
			fprintf(fp, ",\n");
		else
			fprintf(fp, "\n");
	}
	fprintf(fp,"\t]\n}\n");
	fclose(fp);
	
	system("pause");
	return 0;
}
