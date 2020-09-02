
#include <iostream>
#include <string>

using namespace std;

//tally of poll results , extras added not an easy exercise.

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	
	cout << " What is your mode of transport? \n" << "1.CAR\n" << "2.CYCLE\n" << "3.WALK\n" << "terminate using 0\n\n";
	
	//counter	
	while ( 1 )   // can be 1 or true
	{
		int choice;
		cout << "Choice: ";
		cin >> choice;
			
		if ( choice == 1 )
			a++;
		else if ( choice == 2 )
			b++;
		else if ( choice == 3 )
			c++;
		else if ( choice == 0)
			break;
		else
			continue;
	}
	cout << "CAR recieved   :" << a << " votes\n";
	cout << "CYCLE recieved :" << b << " votes\n";
	cout << "WALK recieved  :" << c << " votes\n";
	cout << "1\t" << "2\t" << "3\t" << "\n";         // t stands for tab
	
	//find the maximum voted option
	int max = 0;
	
	if ( a > b && a > c )
		max = a;
	else if ( b > c && b > a )
		max = b;
	else if ( c > a && c > a )
		max = c;
		
/*  If the max voted option is bigger than 10, find by how much
    we have to divide to scale the graph, also making 10 bar
    units the max a bar can reach before scaling the others too  */
    int div = 2;
    if (max > 10)
    {
		do
		{
			max = max/div;
			if ( max < 10   )
				break;
			div++;
		} while (true);    // use of semicolon here with the do-while loop
	}else
		div = 1;
    
    
    
    //Sets the final number for the bars (
    a = a/div;
    b = b/div;
    c = c/div;
    
    if ( a == 0 )
		a++;
    if( b == 0 )
        b++;
    if( c == 0 )
        c++;
    
    //Creates the bars
	while (1)
	{
		if ( a > 0)
		{
			cout << "[]" << "\t";
			a--;
		}else
			cout << "  " << "\t";
		
		if ( b > 0 )
		{
			cout << "[]" << "\t";
			b--;
		}else
			cout << "  " << "\t";
			
		if ( c > 0 )
		{
			cout << "[]" << "\t";
			c--;
		}else
			cout << "  " << "\t";
		cout << "\n";

		if(a==0 && b==0 && c==0)
				break;
	}
}
	
