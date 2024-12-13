#include <iostream>
#include <windows.h>

using namespace std;

int main() {

	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
    
    // Nombre: [Juan Manuel Tarin Carrillo, Angel Josue Rocha Adame]
    // Número de control: [24041246,24041225]

  
    char palabra[101];
    char cifrada[101];


    cout << "Ingresa una palabra: ";
    cin.getline(palabra, 101);


	    for (int i = 0; i < strlen(palabra); i++) 
	{
        switch (palabra[i]) {
            case 's': cifrada[i] = 'u'; break;
            case 'u': cifrada[i] = 's'; break;
            case 'f': cifrada[i] = 'a'; break;
            case 'a': cifrada[i] = 'f'; break;
            case 'm': cifrada[i] = 'e'; break;
            case 'e': cifrada[i] = 'm'; break;
            case 'l': cifrada[i] = 'i'; break;
            case 'i': cifrada[i] = 'l'; break;
            case 'c': cifrada[i] = 'o'; break;
            case 'o': cifrada[i] = 'c'; break;
            case 'S': cifrada[i] = 'U'; break;
            case 'U': cifrada[i] = 'S'; break;
            case 'F': cifrada[i] = 'A'; break;
            case 'A': cifrada[i] = 'F'; break;
            case 'M': cifrada[i] = 'E'; break;
            case 'E': cifrada[i] = 'M'; break;
            case 'L': cifrada[i] = 'I'; break;
            case 'I': cifrada[i] = 'L'; break;
            case 'C': cifrada[i] = 'O'; break;
            case 'O': cifrada[i] = 'C'; break;
            default: cifrada[i] = palabra[i];
        }
    }


    cout << "Palabra cifrada: " << cifrada << endl;

    return 0;
}