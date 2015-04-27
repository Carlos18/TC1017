#include <iostream>
using namespace std;

long double dotProduct(int a1[], int a2[])
{
	float dot, suma=0;
	for(int i=1; i<6; i++)
	{
		dot = a1[i] * a2[i];
		suma = suma + dot;
	}
	return suma;
}

int main()
{
	int x;
	cout << "Cuantos numeros quiere calcular: ";
	cin >> x;

	int n, a1[x], a2[x];
	for(int i=1; i<x+1; i++)
	{
		cout << "Escribe el " << i << "° numero de la primera lista" << endl;
		cin >> n;
		a1[i] = n;
	}
	for(int i=1; i<x+1; i++)
        {
                cout << "Escribe el " << i << "° numero de la segunda lista" << endl;
                cin >> n;
                a2[i] = n;
        }
	cout << "El producto punto es: " << dotProduct(a1, a2) << endl;
	return 0;
}
