/*
Ejecute el programa del ejercicio anterior con entradas erroneas y observe los resultados.
Por ejemplo introduzca un dato de tipo caracter cuando se espera un dato de tipo entero
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
