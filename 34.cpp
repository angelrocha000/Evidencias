/*Calcule la potencia, para ello pide por teclado la base y el exponente.
Pueden ocurrir tres cosas:
El exponente sea positivo, sólo tienes que imprimir la potencia.
El exponente sea 0, el resultado es 1.
El exponente sea negativo, el resultado es 1/potencia con el exponente positivo.*/
//#include <stdio.h>
#include<math.h>
#include <iostream>
using namespace std;
// Angel Josue Rocha Adame
// 24041225
main()
{
	float exponente, numero, resultado;
	cout<<"Dame el valor del numero: ";
	cin>>numero;
	cout<<"Dame el valor del exponente: ";
	cin>>exponente;
	if(exponente==0)
		resultado=1;
	else
		if(exponente>0)
			resultado=pow(numero,exponente);
		else
			resultado=1/pow(numero,abs(exponente));
	printf("El resultado es: %5.5f\n",resultado);
	cout<<"El resultado es: "<<resultado;
}