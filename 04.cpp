#include <windows.h>
#include <iostream>
using namespace std;
//Angel Josue Rocha Adame
//24041225
/*Progrma de validacion del nip*/
void gotoxy(int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main(){
		SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int nip = 123;
	int intento = 0;
	gotoxy(10,8);
	cout<<"Teclea tu nip: ";
	cin>>intento;
	if(intento==nip)
	{
		gotoxy(10,11);
		cout<<"**Correcto**";
	}
	else
	{
		gotoxy(36,9);
		cout<<"**Incorrecto**";
	}
	return 0;
}