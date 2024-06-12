#include <iostream>
#include <cstdlib>
using namespace std;

void guessgame(int num, int unum)
{
    while (unum != num)
    {
        if (num < unum)
        {
            cout << "Your guess is too high, try again\n";
        }
        if (num > unum)
        {
            cout << "Your guess is too low, try again\n";
        }
        cin >> unum;
    }

    cout << "Congratulations! You guessed it right\n";
}

int main()
{
    int num = rand() % 100;
    int unum;
    int z = 1;

    cout << "Welcome to guessing number game\n";

    while (z)
    {
        cout << "Enter your guess for number between 1 to 100\n";
        cin >> unum;

        guessgame(num, unum);

        cout << "Do you wish to continue? Enter 1 for yes and 0 for no\n";
        cin >> z;

        if (z != 0)
        {
            num = rand() % 100; 
        }
    }

    return 0;
}