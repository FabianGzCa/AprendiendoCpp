//Ejercicio 6: Escriba un programa que lea la nota final de cuatro alumnos y calcule la nota final media de los cuatro alumnos

#include<iostream>
using namespace std;

int main(){
	float cal1, cal2, cal3, cal4, media;
	
	cout<<"Dame la nota final del primer alumno: ";
	cin>>cal1;
	cout<<"Dame la nota final del segundo alumno: ";
	cin>>cal2;
	cout<<"Dame la nota final del tercer alumno: ";
	cin>>cal3;
	cout<<"Dame la nota final del cuarto alumno: ";
	cin>>cal4;
	
	media = (cal1 + cal2 + cal3 + cal4)/4;

	printf("\nLa calificacion media de los 4 alumnos es: %.2f",media);
	
	
	return 0;
}
