#include <stdlib.h> //Es importante para poder usar el numero aleatorio
#include <time.h>  //Se necesita para el poder utilizar el tiempo NULL
#include <iostream>
using namespace std;

int main()
{
	int num, num2, cont=1; //El contador tiene que estar igualado a 1
	srand(time(NULL));
	num=rand()%101; //Se pone %101 para iniciar del 100
	cout << "I have a number chosen between 1 and 100." << endl;
	cout << "Please guess a number between 1 and 100:";
	cin >> num2;
	while (num !=num2) //Se usa el while primero para la condicion
	{
		if (num<num2)
			cout << "The secret number is lower." << endl;
		else if (num>num2)
			cout << "The secret number is higer." << endl;
		cout << "Try again:";
		cin >> num2;
		cont=cont+1;	
	}
	cout << "Congratulations the number is:" << num << endl;
	cout << "You made " << cont << " guesses to get the right number" << endl;
	return 0;
}
