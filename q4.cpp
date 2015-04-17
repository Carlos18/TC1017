#include <iostream>
#include <string.h>
using namespace std;
char palindrome(char x)
{
	char pal[80];
	int w,y,z,p,d;
	w = strlen(pal);
	w = w-1;
	for (y=0, z=w; y<=w/2; y++, z--)
	{
		if(pal[y] == pal[z])
		{
			p = 1;
		}
	}
	if (p == 1)
	{
		cout << "True" << endl;
	}else
	{
		cout << "False" << endl;
	}
}
int main()
{	
	int x;
	cout << "Escribe una palabra: ";
	cin >> x;
	cout << palindrome(x) << endl;
	return 0;
}
