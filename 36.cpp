/*La asociación de vinicultores fija un precio inicial al kilo
de uva, la cual se clasifica en tipos A y B, y además en 
tamaños 1 y 2. 
Al realizar la venta de uva, debe ser de un solo tipo y tamaño.
Debe considerar que: si es de tipo A, se cargan 20 centavos al 
precio inicial cuando es de tamaño 1 y 30 centavos si es tamaño 2. 
Si es tipo B, se rebajan 30 centavos cuando es de tamaño 1 y
50 centavos cuando es de tamaño 2. 
Realice un programa para determinar el precio de venta.*/
#include<windows.h>
#include <iostream>
using namespace std;
// Angel Josue Rocha Adame
// 24041225
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	char tipo;
	int tamano;
	float inicial,kilos,total;
	cout<<"Dime el tipo de uva: ";
	cin>>tipo;
	tipo=toupper(tipo);
	cout<<"Dime el tamaño de uva: ";
	cin>>tamano;
	
	if ((tipo=='A' or tipo=='B') and (tamano==1 or tamano==2))
	{
		cout<<"Dime cuántos kilos de uva se venden: ";
		cin>>kilos;
		cout<<"Dime el precio inicial por kilo: ";
		cin>>inicial;
		switch (tipo)
		{
			case 'A':
				switch(tamano)
				{
					case 1:
						inicial+=.2;//inicial=inicial+.2
						break;
					case 2:
						inicial=inicial+.3;
						break;
				}
				break;
			case 'B':
				switch(tamano)
				{
					case 1:
						inicial-=.3;//inicial=inicial-.3
						break;
					case 2:
						inicial=inicial-.5;
						break;
				}
				break;
		}
		total=kilos*inicial;
		cout<<"La venta total es de: "<<total;
	}
	else
		cout<<"Datos no válidos";
	return 0;
}