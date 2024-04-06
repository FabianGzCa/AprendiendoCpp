//Ejercicio 10: Escriba un programa que calcule las soluciones de una ecuación de segundo grado de la forma ax"2 + bx + c = 0 teniendo en cuenta la formula general
#include<iostream>
#include<math.h>
using namespace std;

int main(){
	float a, b, c, res1, res2;
	
	cout<<"Dame el valor de a: ";
	cin>>a;
	cout<<"Dame el valor de b: ";
	cin>>b;
	cout<<"Dame el valor de c: ";
	cin>>c;
	
	res1 = ((-1 * b) + (sqrt(pow(b,2)- (4*a*c))) ) / 2*a;
	res2 = ((-1 * b) - (sqrt(pow(b,2)- (4*a*c))) ) / 2*a;
	
	printf("\nEl valor 1 de x es : %0.2f", res1 );
	printf("\nEl valor 2 de x es : %0.2f", res2 );
	
	return 0;
}
