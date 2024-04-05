//Ejercicio 8: Escriba un programa que lea de la entrada estandar los dos catetos de un triángulo rectánculo y escriba en la salida estándar su hipotenusa

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	float catetoOpuesto, catetoAdyacente, hipotenusa;
	
	cout<<"Dame el valor del cateto opuesto: ";
	cin>>catetoOpuesto;
	cout<<"Dame el valor del cateto adyacente: ";
	cin>>catetoAdyacente;
	
	hipotenusa = sqrt(pow(catetoOpuesto, 2) + pow(catetoAdyacente, 2));
	
	printf("El valor de la hipotenusa es: %.2f",hipotenusa);
	
	return 0;
}
