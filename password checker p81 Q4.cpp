
#include <iostream>
#include <string>

using namespace std;

/* password checker 3 attempts only */

int main()
{
	string password;
	
	for ( int x = 2; x > -1; x-- )   //rememeber x++; not to be entered
	{
		cout << "ENTER PASSWORD\n";
		cin >> password;
		if ( password == "sausages")
		{
			cout << "WELCOME\n ";
			break;
		}
		else 
		{
			cout << "\nWRONG PASSWORD \n" << x << " attempts remain\n\n";
		}
	}
	return 0;
}

