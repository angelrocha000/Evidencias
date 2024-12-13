//Examen de programacion Angel Josue Roha Adame
//24041225
#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	char nombre;
	int partidosg, partidose, partidosp, totalpj, totalpo, puntosga, puntosem, puntospe, puntosdis;
	float porcentaje;
	cout<<"Ingresa el nombre del equipo: ";
	cin>>nombre;
	fflush(stdin);
	
	cout<<"Ingresa la cantidad de partidos ganados: ";
	cin>>partidosg;
	
	cout<<"Ingresa la cantidad de partidos perdidos: ";
	cin>>partidosp;
	
	cout<<"Ingresa la cantidad de partidos empatados: ";
	cin>>partidose;
	
	puntosga = partidosg * 3;
	puntosem = partidose * 1;
	puntospe = partidosp - partidosp;
	totalpj = partidosg + partidose + partidose;
	totalpo = puntosga + puntosem;
	puntosdis = totalpj * 3;
	porcentaje = puntosdis * totalpo/100;
	
	cout<<"\nEl El nombre del equipo es: "<<nombre;
	cout<<"\nEl total de partidos jugados es de: "<<totalpj;
	cout<<"\nEl total de puntos obtenidos es de: "<<totalpo;
	cout<<"\nEl porcentaje de puntos obtenidos rescpecto a los puntos disputados es de: "<<porcentaje<<"%%5.2f";
	
	return 0;
}