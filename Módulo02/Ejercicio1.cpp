//1. Escribe la siguiente expresión como expresión en C++ a/b + 1

#include<iostream>

using namespace std;

int main(){
	float a, b, res;
	
	cout<<"Dame el valor de la vairable a: ";
	cin>>a;
	cout<<"Dame el valor de la variable b: ";
	cin>>b;
	
	res = a/b + 1;
	
	cout<<"\nEl resultado es: "<<res<<endl;
	
	return 0;
}
