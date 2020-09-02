
#include <iostream>
#include <string>

using namespace std;

// list of options from a menu if input not on the list reprint the list
// issue with this one getting strings in wont work for me need to try again at later date.
// note to user when working wih strings always always always use " " to encase your string otherwise error will result.


int main()
{
	string menu_choice;
	
	while ( 1 )

	{
		cout << "Please pick from the menu: \n" << "1.pork\n" << "2.beef\n" << "3.lamb\n" << endl;
		cin >> menu_choice;
			if ( menu_choice != "pork" )
			{
				cout << "sorry sir that is not on the menu today please choose again\n";
			}
		if ( menu_choice == "pork" )
		{
			break;
		}
		
	}
	cout << "Good choice sir! \n The " << menu_choice << " will be ready in 20 minutes";
}
