// Programa que reconoce el tipo de triangulo
#include <windows.h>
#include <iostream>
#include <math.h>
using namespace std;
// Angel Josue Rocha Adame
// 24041225
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int lado1, lado2, lado3;
	char triangulo;
	cout<<"Ingrese el lado 1 del traingulo: ";
	cin>>lado1;
	cout<<"Ingrese el lado 2 del traingulo: ";
	cin>>lado2;
	cout<<"Ingrese el lado 3 del traingulo: ";
	cin>>lado3;
	if(lado1==lado2 && lado1==lado3)
	{
		cout<<"El triangulo es equilatero";
	}
	else
	{
		if(lado1!=lado2 && lado1!=lado3 && lado2!=lado3)
		{
			cout<<"El triangulo es escaleno";
		}
		else
		{
			cout<<"El traingulo es isoceles";
		}
	}
	
	return 0;
}