#include<iostream>
#include<windows.h>
using namespace std;
// Angel Josue Rocha Adame
// 24041225
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	char otro='S';
	int cuantos, suma,x;
	float promedio;
	cuantos=0;
	suma=0;
	for (;otro=='S';)
	{
		cout<<"Dame un número: ";
		cin>>x;
		cuantos++;
		suma=suma+x;
		cout<<"Quieres capturar otro? (S/N)";
		cin>>otro;
		otro=toupper(otro);
	}
	promedio=suma/cuantos;
	cout<<"Fueron "<<cuantos<<" numeros\n";
	cout<<"La sumatoria es="<<suma<<"\n";
	cout<<"El promedio es="<<promedio<<"\n";
	return 0;
}