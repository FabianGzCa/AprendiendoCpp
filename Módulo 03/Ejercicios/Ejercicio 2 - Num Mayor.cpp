//Escriba un programa que lea 3 numeros y determine cual de ellos es mayor

#include<iostream>
using namespace std;

int main(){
	int num1=0, num2=0, num3=0;
	
	cout<<"Dame 3 numeros: ";
	cin>>num1 >> num2 >> num3;
	
	if(num1>=num2 && num1>=num3){
		cout<<"El numero mayor es el " << num1;	
	} else if (num2>= num1 && num2 >= num3){
		cout<<"El numero mayor es el " << num2;
	} else{
		cout<<"El numero mayor es el " << num3;
	}
	
	
	return 0;
}
