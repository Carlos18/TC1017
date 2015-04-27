#include <iostream>
using namespace std;

float findThrees(int num[])
{
	float suma=0;
	for(int x=1; x<11; x++)
	{
		if((num[x]%3)==0)
		{
			suma = suma + num[x];
		}
	}
	return suma;
}
int main()
{
	int n;
	cout << "Escribe cuantos numeros quiere comparar: ";
	cin >> n;
	int y, num[n];
	for(int i=1; i<n+1; i++)
	{
		cout << "Escribe el " << i << "° numero: " << endl;
		cin >> y;
		num[i] = y;
	}
	cout << "La suma de los numeros divisibles entre tres es: " << findThrees(num) << endl;
	return 0;
}
