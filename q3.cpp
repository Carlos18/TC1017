#include <iostream>
using namespace std;

long fibo(long n)
{
	int a,b,c,r;
	a = 0;
	b = 1;
	c = 1;
	if (n == 0)
	{
		r = 0;
	}else if (n == 1)
	{
		r = 1;
	}else while (n >= c)
		{
			a = b;
			b = r;
		    	r = a + b; 
			c++;
		}

	return r;
}
int main()
{
	int x;
	cout << "How long do you want the fibonacci?: ";
	cin >> x;
	cout << "The result is: " << fibo(x) << endl;
	return 0;
}
