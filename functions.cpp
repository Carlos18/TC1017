#include <iostream>
using namespace std;

int suma(int x, int y)
{
	int r=x+y;
  	return r;
}

int resta(int x, int y)
{
  	int r=x-y;
  	return r;
}

int multi(int x, int y)
{
    	int r=x*y;
    	return r;
}

int division(int x, int y)
{
  	int r=x/y;
  	return r;
}

int residuo(int x, int y)
{
  	int r= x%y;
  	return r;
}
 
int main()
{
  	int x, y, sum, rest, mult, div, res;
  	cout<< "Give me the first number: ";
  	cin>>x;
  	cout<< "Give me the second number: ";
  	cin>>y;
 
  	sum= suma(x,x);
  	rest= resta(x,y);
  	mult= multi(x,y);
  	div= division(x,y);
  	res= residuo(x,y);
 
  	cout<< "The sum of is: " << sum << endl;
  	cout<< "The difference of is: " << rest << endl;
  	cout<< "The product of is : " << mult << endl;
  	cout<< "The division of is: "<< div << endl;
  	cout<< "The remainder of is: "<< res << endl;
  return 0;
 
}
