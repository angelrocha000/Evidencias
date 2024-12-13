// Programa que obtiene el mayor de tres numeros
#include <windows.h>
#include <iostream>
using namespace std;
// Angel Josue Rocha Adame
// 24041225
void gotoxy(int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int cal1, cal2, cal3, prom;
	string nombre;
	cout<<"Dime tu nombre: ";
	cin>>nombre;
	cout<<"Dame la calificacion 1: ";
	cin>>cal1;
	cout<<"Dame la calificacion 2: ";
	cin>>cal2;
	cout<<"Dame la calificacion 3: ";
	cin>>cal3;
	prom = (cal1 + cal2 + cal3)/3;
	cout<<nombre<<", tu promedio es: "<<prom<<", y tu calificacion final es: ";
	if(prom>=90)
	{
		cout<< "A";
	}
	else
	{
		if(prom>=80)
		{
			cout<<"B";
		}
		else
		{
			if (prom>=70)
			{
				cout<<"C";
			}
			else
			{
				if(prom>=60)
				{
					cout<<"D";
				}
				else
				{
					cout<<"NA";
				}
		}
	}
	return 0;
}