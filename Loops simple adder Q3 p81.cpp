
#include <iostream>
#include <string>

using namespace std;

int main()

//write a program that computes running sum of inputs from user, terminating
//when 0 input value is given
{
	double x;
	double y;
	double z;
	double answer;
	
	cout << "please enter a number. \n";
	cin >> x;
	cout << "please enter another number. \n";
	cin >> y;
	
	answer = x + y;
	cout << x << " + " << y << " = " << answer << "\n\n";
	
	while ( z != 0 )
	{
		
		answer += z;
		cout << "and another number (0 to terminate) : " ;
		cin >> z;
		cout << "the answer is " << answer + z << "\n\n";
	}
	return 0;
}
	

