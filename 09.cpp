/* La asociacion de agricultores fija un precio al kilo
de uva la cual se clasifica en tipos A y B y ademas en tamaños 1y 2*/
#include <windows.h>
#include <iostream>
using namespace std;
// Angel Josue Rocha Adame
// 24041225

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	char tipo;
	int tamanio;
	float inicial, kilos, total;
	cout<<"Dime el tipo de uva: ";
	cin>>tipo;
	tipo=toupper(tipo);
	cout<<"Dime el tamanio de la uva: ";
	cin>>lado2;
	cout<<"Ingrese el lado 3 del traingulo: ";
	cin>>lado3;
	if((tipo=='A' or tipo=='B')and(tamanio==1 or tamanio==2))
	{
		cout<<"Dime cuantos kilos de uva se venden: ";
		cin>>kilos;
		cout<<"Dime el tipo de uva: ";
		cin>>inicial;
		switch(tipo)
	{
		case 'A':
			switch(tamanio)
			{
				case 1:
					inicial+=.2;
					break;
			}
			break;
			case 'B':
			switch(tamanio)
			{
				case 1:
					inicial-=.3;
					break;
				case 2:
					inicial=inicial-=.5;
					break;
			}
			total=kilos*inicial;
			cout<<"La venta total es de: "<<total;
		}
		else
		cout<<"Datos no validos ";
	return 0;
}