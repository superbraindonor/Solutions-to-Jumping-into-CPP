#include <iostream>

using namespace std;

int main()
{
	float x;
	float y;
	
	cout << "Enter a number: " ;
	cin >> x;
	cout << "Enter second number: " ;
	cin >> y;
	
	float sum = x / y;   // ensure float is used and not int to give exact value
	
	cout << "Total = " << sum;

}
