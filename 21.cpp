// Programa que obtiene el mayor de tres numeros
#include <windows.h>
#include <iostream>
using namespace std;
// Angel Josue Rocha Adame
// 24041225
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x, y =1;
	cout<<"Lectura de 5 umeros enteros usando do-while";
	do{
	cout<<"Dame un numero que no sea 0";
		cin>>x;
		if(x==0);
			continue;
			cout<<"Por aqui solo pasa cuando el numero es diferente a 0";
		y++;
	}
	while(y<6);
	system("PAUSE");
	
	
	system("CLS");
	cout<<"Lectura de 5 numeros usando un for estandar\n";
	for(y=1;y<6;y++)
	{
		cout<<"Dame un numero que no sea 0(intento #"<<y<<")\n";
		cin>>x;
		if(x==0)
			continue;
		cout<<"Por aqui solo pasa cuando el numero es diferente a 0";
		y++;
		
	}
	return 0;
}