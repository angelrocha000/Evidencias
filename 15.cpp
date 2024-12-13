#include<iostream>
#include<windows.h>
using namespace std;
// Angel Josue Rocha Adame
// 24041225
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	float precion,preciod,pctd,descuento;
	cout<<"Dime el precio normal: ";
	cin>>precion;
	cout<<"Dime el porcentaje de descuento: ";
	cin>>pctd;
	descuento=precion*pctd/100;
	preciod=precion-descuento;
	cout<<"El precio con descuento es: "<<preciod;	
	cout<<"\nEl precio con descuento es: "<<precion*(100-pctd)/100;	
	return 0;
}