/*
Ejercicio 7: La calificaci�n final de un estudiante es el promedio de tres notas:
    - La nota de pr�ticas que cuenta un 30% del total
    - La nota te�rica que cuenta un 60%
    - La nota de participaci�n que cuenta el 10% restante
Escriba un programa que lea las res notas del alumno y escriba su nota final.
*/

#include<iostream>
using namespace std;

int main(){
	
	float notaPracticas, notaTeorica, notaParticipacion, promedio;
	
	cout<<"Dame la nota pracitca: ";
	cin>>notaPracticas;
	cout<<"Dame la nota de teoria: ";
	cin>>notaTeorica;
	cout<<"Dame la nota de participacion: ";
	cin>>notaParticipacion;
	
	notaPracticas = notaPracticas * 3;
	notaTeorica = notaTeorica * 6;
	notaParticipacion = notaParticipacion * 1;
	
	promedio = (notaPracticas + notaTeorica + notaParticipacion) / 10;
	
	printf("\nLa nota final del estudiante es: %.2f",promedio); 
	
	return 0;
}
