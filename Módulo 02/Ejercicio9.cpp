/*
Ejercicio 9: Realice un programa que calcule el valor que toma la siguiente función para valores dados de x e y:
    - f(x,y) = raiz(x)/((y al cuadrado) - 1)
*/

#include<iostream>
#include<math.h>
using namespace std;

float function(float x, float y){
	float res = 0;
	
	res = sqrt(x)/(pow(y,2) -1);
	
	return res;
}

int main(){
	float x, y, res;
	
	cout<<"Dame el valor de x: ";
	cin>>x;
	cout<<"Dame el valor de y: ";
	cin>>y;
	
	res = function(x, y);
	
	printf("\nEl resultado es: %0.2f",res);
	
	return 0;
}
