/* Ejercicio 2: Escribe un programa que lea de la entrada estandar el precio de un producto
y muestre en la salida estandar el precio del producto al aplicarle el IVA. */

#include<iostream>

using namespace std; 

int main(){
	float precio, preciomasiva=0, iva=16;
	
	cout<<"Ingresa el precio del producto: ";
	cin>>precio;
	
	preciomasiva = precio+precio*iva/100;
	
	cout<<"El precio del producto mas IVA es de: "<<preciomasiva<<endl;
	
	return 0;
}
