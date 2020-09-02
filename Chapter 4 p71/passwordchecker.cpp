
#include <iostream>
#include <string>   // must be included to work with strings

using namespace std;

int main()
{
	string password;
	
	cout << "ENTER PASSWORD: ";
	getline ( cin ,password,'\n' );   // alternative to ->  cin >> password; (unsure why using)
	
	
	if ( password == "sausages" )
	{
		cout << "WELCOME!\n";
	}
	else
	{
		cout << "WRONG PASSWORD!!\n";
	}

}

