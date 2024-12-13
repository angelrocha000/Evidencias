#include <windows.h>
#include <iostream>
using namespace std;
//Angel Josue Rocha Adame
//24041225
void gotoxy(int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	cout<<"Hola, esta es una prueba de la funcion gotxy."<<endl;
	gotoxy(1,1); //Mueve el cursor a la columna 1, renglon 1
	cout<<"Este letrero comienza en la posicion (1, 1).";
	gotoxy(30,2); //Mueve el cursor a la columna 30, renglon 2
	cout<<"Este letrero comienza en la posicion (30, 2).";
	gotoxy(1,20); //Mueve elcursor a la columna 1, renglon 20
	cout<<"Este letrero comienza en la posicion (1, 20).";
	system("pause");
	system("cls"); //Limpia la pantalla
	system("pause");
	cout<<"
	gotoxy(0,0);
	cout<<"*";
	cout<<"
	gotoxy(1,1);
	cout<<"*";
	cout<<"
	gotoxy(30,2);
	cout<<"*";
	cout<<"
	gotoxy(1,20);
	cout<<"*";
	
	return 0;
}