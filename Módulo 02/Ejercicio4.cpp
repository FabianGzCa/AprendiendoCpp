//Ejercicio 4: Escribe la siguiente expresi�n como expresi�n en C++ a+ (b/(c-d))

#include<iostream>

using namespace std;

int main(){
	
	float a, b, c, d, res;
	
	cout<<"Dame el valor de a: ";
	cin>>a;
	cout<<"Dame el valor de b: ";
	cin>>b;
	cout<<"Dame el valor de c: ";
	cin>>c;
	cout<<"Dame el valor de d: ";
	cin>>d;
	
	res = a+(b/(c-d));
	
	cout<<"\nEl resultado es: "<<res<<endl;
	
	return 0;
}
