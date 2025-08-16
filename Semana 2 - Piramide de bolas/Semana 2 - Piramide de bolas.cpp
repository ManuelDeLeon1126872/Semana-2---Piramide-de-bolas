// Semana 2 - Piramide de bolas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//deben haber 30 capas y deben sobrar 545

#include <iostream>
#include <cmath>
using namespace std;

bool esEntero(double numero)
{
	if (floor(numero) == numero)
	{
		return true;
	}
	else
	{
		return false;
	}
}



int main()
{
	int bolas = 10000;
	int capas = 0;
	for (int i = 1; i < bolas; i++)
	{
		if (esEntero(sqrt(i)))
		{
			bolas -= i;
			capas++;
			if (bolas < 0)
			{
				break;
				
			}

			
		}
		else
		{
			continue;
		}
	}
	cout << "pueden hacerce " << capas << " capas.\n";
	cout << "sobraran " << bolas << " bolas.";

}


