/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{

	int num;
	int times = 1;
	int largest = 0 ;
	int smallest = 10000000 ;

//promps user to enter how many numbers they want to enter
	cout<<"How many numbers do you want to enter: "<<endl;
	cin>>times;
//user enters integer for that many number of times they chose
	for ( int count = 1 ; count <= times ; count ++)
	{
		cout <<"Enter number "<< count<<": "<<endl;
		cin>>num;




		if (num > largest)
		{
			largest = num;
		}
		if (num < smallest )
		{
			smallest = num;
		}


	}
//displays the largest and lowest number
	cout << "The largest number entered is :"<< largest<<endl;
	cout << "The smallest number entered is :"<<smallest<<endl;
	return 0;
}