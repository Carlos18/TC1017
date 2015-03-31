#include <iostream>
#include <cmath>
using namespace std;

float suma(float l[])
{
	float sum = 0;
	for (int i=0; i<10; i++)
	{
	sum = l[i] + sum;
	}
	return sum;
}

float prom(float l[])
{
	float prom = l[0], r;
	for (int i=1; i<10; i++)
	{
		prom = l[i] + prom;
	}
	r = prom / 10;
	return r;
}

float standard (float promedio_resultado,float lista[])
{
  	float Lista_promedio [10],promedio,resultado;
  	for (int i=0; i<10; i++)
  	{
   		 Lista_promedio[i]= promedio_resultado - lista [i];
  	}
	promedio = pow (Lista_promedio [0],2);
  	for (int i=1; i<10; i++)
  	{
   		 promedio = pow (Lista_promedio [i],2) + promedio;
	}
  	resultado = promedio /10;
 	return resultado;
}


int main()
{
	int i;
	float l[10], pro;
	cout << "Ingresa 10 numeros: ";
	for (i=0; i<10; i++)
	{
		cin >> l [i];
	}
	pro = prom(l);
	cout << "La suma es: " << suma(l) << endl;
	cout << "El promedio es: " << pro << endl;
	cout << "La desviación standar es: " << standard(pro, l) << endl;
	return 0;
}
