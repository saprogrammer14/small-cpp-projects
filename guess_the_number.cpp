#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    cout << "                               GUESS THE NUMBER" << endl;
    cout << "                              BY: SHOUMIK ACHARYA" << endl;
    cout << endl << endl;
    cout << "\nthe number will be between 1 & 5." << endl;
    cout << "\nyou will get 3 attempts." << endl;

    char ch;
    int guess;

    srand(time(NULL));

    do
    {
        int number = rand() % 5 + 1;
        bool isCorrect = false;
        for (int i = 1; i <= 3; i++)
        {
            cout << "\nAttempt " << i << endl;
            do
            {
                cout << "\nenter the number: ";
                cin >> guess;
                if (guess < 1 || guess > 5)
                    cout << "\n\aNot in the range" << endl;

            } while (guess < 1 || guess > 5);

            if (number == guess)
            {
                cout << "\nthat's correct!you win!";
                isCorrect = true;
                break;
            }
            else
                cout << "\nWrong.";
        } // end for loop
        if (!isCorrect)
            cout << "\n\n\nSorry!you lose.\nthe number is: " << number;
        cout << "\nwant to play again?(y/n)";
        cin >> ch;
    } while (ch != 'n');
    cout << endl;
    cout << "                             THANKS FOR PLAYING!" << endl << endl;
    return 0;
}