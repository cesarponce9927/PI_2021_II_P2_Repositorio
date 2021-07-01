// PI_2021_II_P1_EJERCICIO7LAB.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	char letra;
	cout << "Introduzca una letra: "; cin >> letra;

	if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
		cout<< " La letra es una vocal";
	else
	{
		cout << "La letra no es una vocal";
	}
	return 0;
}