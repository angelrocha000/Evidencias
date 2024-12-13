#include<iostream>
#include<windows.h>
using namespace std;
// Angel Josue Rocha Adame
// 24041225
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int cuantos, suma,x;
	float promedio;
	cuantos=0;
	suma=0;
	for (x=1;x!=-1;)
	{
		cout<<"Dame un número, -1 para terminar: ";
		cin>>x;
		cuantos++;
		suma=suma+x;
	}
	suma++;
	cuantos=cuantos-1;
	promedio=suma/cuantos;
	cout<<"Fueron "<<cuantos<<" numeros\n";
	cout<<"La sumatoria es="<<suma<<"\n";
	cout<<"El promedio es="<<promedio<<"\n";
	return 0;
}