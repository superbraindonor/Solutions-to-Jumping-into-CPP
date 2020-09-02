#include <iostream>
#include <string>

using namespace std;

// calculator below
// pick an operator and it will use it with 2 arguments and print

int main()
{
	int x;
	int y;
	string z;

	cout << "Enter a single operator +,-,*,/ : \n";
	cin >> z;

	cout << "Enter a number: \n";
	cin >> x;

	cout << "Enter another number: \n";
	cin >> y;
	
	if ( z == "*")
	{
		cout << x << " * " << y << " = " << x * y << endl;
	}
	if ( z == "/")
	{
		cout << x << " / " << y << " = " << x / y << endl;
	}
	if ( z == "+")
	{
		cout << x << " + " << y << " = " << x + y << endl;
	}
	if ( z == "-")
	{
		cout << x << " - " << y << " = " << x - y << endl;
	}
	return 1;
	
}

