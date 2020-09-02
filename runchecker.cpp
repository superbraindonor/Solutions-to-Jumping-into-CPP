#include <iostream>
using namespace std;
int main ()
{
    cout <<"This program will give you a runing sum \n\n";
    cout <<"of all numbers entered.\n";
    int i=0,j;

while (j !=0)
    {cout<<"\nPlease enter a number: ";
    cin >> j;
    cout<<"The total is now: "<<i+j<<"\n\n";
    i=i+j;
    }
   return 0;
}
