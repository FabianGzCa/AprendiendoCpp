// Mostrar los meses del a�o, pidiendole al usuario un numero entre 1 y 12 y mostrar a que mes corresponde

#include<iostream>
using namespace std;

int main(){
	int mes;
	
	cout<<"Dame un numero entre 1 y 12: ";
	cin>>mes;
	
	switch(mes){
		case 1:
			cout<<"Enero"<<endl;
			break;
		case 2:
			cout<<"Febrero"<<endl;
			break;
		case 3:
			cout<<"Marzo"<<endl;
			break;
		case 4:
			cout<<"Abril"<<endl;
			break;
		case 5:
			cout<<"Mayo"<<endl;
			break;
		case 6:
			cout<<"Junio"<<endl;
			break;
		case 7:
			cout<<"Julio"<<endl;
			break;
		case 8:
			cout<<"Agosto"<<endl;
			break;
		case 9:
			cout<<"Septiembre"<<endl;
			break;
		case 10:
			cout<<"Octubre"<<endl;
			break;
		case 11:
			cout<<"Noviemre"<<endl;
			break;
		case 12:
			cout<<"Diciembre"<<endl;
			break;
		default:
			cout<<"Numero invalido"<<endl;
			break;
	}
	
	return 0;
}
