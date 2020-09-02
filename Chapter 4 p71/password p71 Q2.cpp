
#include <iostream>
#include <string>   

// password using number, two valid numbers use only one if statement.

// expand to take multiple usernames with own password this has not been done yet

using namespace std;

int main ()
{
	string user_name;
	int x;
	int y;
	
	cout << "Please enter your username: ";
	cin >> user_name;
	
	cout << endl << "Welcome " << user_name << endl << "ENTER PASSWORD \n";
	cin  >> x >> y;
	
	
	if ( x == 7 || y == 5 )
	{
		cout << "ACCESS GRANTED \n";
	}
	else
	{
		cout << "Wrong try again";
	}
		
		
	
}
