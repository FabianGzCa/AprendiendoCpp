//Realice un programa que lea un numero entero y determine si este se trata de un valor par o impar

#include<iostream>
using namespace std;

int main(){
	int numero;
	
	cout<<"Dame un numero entero: ";
	cin>> numero;
	
	if (numero%2 == 0){
		cout<<"El numero es par";
	}else{
		cout<<"El numero es impar";
	}
	
	return 0;
}
