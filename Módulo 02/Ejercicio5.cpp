//Ejercicio 5: Escriba un fragmento de programa que intercambie los valores de dos variables

#include<iostream>
using namespace std;

int main(){
	int a, b, aux;
	
	cout<<"Dame el valor de a: ";
	cin>>a;
	cout<<"Dame el valor de b: ";
	cin>>b;
	
	aux = a;
	a = b;
	b = aux;
	
	cout<<"Los valores se han intercambiado"<<endl;
	cout<<"a: "<<a<<endl;
	cout<<"b: "<<b<<endl;
	
	return 0;
}
