
#include <iostream>
#include <string>   

using namespace std;

int main ()
{
	int x;
	int y;
	
	cout << "Enter an age: " << endl;
	//getline( cin, x, '\n' );   unsure why this wont work?
	cin >> x;
	
	cout << "Enter another age: " << endl;
	//getline( cin, y, '\n' );     unsure why this wont work?
	cin >> y;
	
	if ( x > y )
	{
		cout << x << " is older than " << y << endl;
	}
	if ( x < y )
	{ 
		cout << x << " is younger than " << y << endl;	
	}	
	if ( x && y >= 100 )
	{
	    cout << " Wow what are the chances! " << endl;
	}    

}
