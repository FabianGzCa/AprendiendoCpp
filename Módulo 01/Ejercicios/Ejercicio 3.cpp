/*Ejercicio 3: Realice un programa que lea de la
entrada estandar los siguientes datos de una persona:
Edad: dato de tipo entero
Sexo: dato de tipo caracter
Altura en metros: dato de tipo real
Tras leer los datos, el programa de be mostrarlos en la salida estandar
*/

#include<iostream>

using namespace std;

main(){
	int edad;
	char sexo[10];
	float altura;
	
	cout<<"Ingresa tu edad: ";
	cin>>edad;
	
	cout<<"Ingresa tu sexo: ";
	cin>>sexo;
	
	cout<<"Ingresa tu altura (Metros): ";
	cin>>altura;
	
	cout<<"\nEdad: "<<edad<<"\nSexo: "<<sexo<<"\nAltura: "<<altura<<endl;
	
	return 0;
} 
