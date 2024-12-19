/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main()
{

	int seed = time(0);
	srand(seed);
	int ranNum;
	int num;

	int guesses = 1;
//generates random number from 1-10

	ranNum = (rand()%(10 - 1 + 1)) + 1;

//promps user to enter a number to guess
	cout << "Guess the number from 1 - 10: "<<endl;
	cin >> num;
//displays if user guessed right or wrong

	while (num != ranNum)
	{
		if (num > ranNum)
		{
			cout<<"Too high, try again"<<endl;
			cin>>num;
		}
		else
		{
			cout <<"Too low, try again"<<endl;
			cin>>num;
		}
		guesses++;
	}

	if (num == ranNum)
	{
		cout <<"Congratulations! Your Guess is correct! The number was "<<ranNum<<". You guessed "<<guesses<<" times"<<endl;
	}



	return 0;
}