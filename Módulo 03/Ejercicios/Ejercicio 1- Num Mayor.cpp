//Escriba un programa que lea dos numeros y determine cual de ellos es el mayor.

#include<iostream>
using namespace std;

int main(){
	int num1, num2;
	
	cout<<"Digita 2 numeros: ";
	cin>>num1>>num2;
	
	
	if (num1 == num2){
		cout<<"Ambos numeros son iguales";
	} else if (num1 > num2){
		cout<<"El numero mayor es "<<num1;
	}else{
		cout<<"El numero mayor es "<<num2;
	}
	
	return 0;
}
