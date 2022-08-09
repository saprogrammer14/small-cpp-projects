#include <iostream>
#include <string>
using namespace std;

int main()
{
    string ones[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    string tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    string in_word;
    int number;

    do
    {
        cout << "\nenter the number,(0<=number<=99): ";
        cin >> number;
        if (number < 0 || number > 99)
            cout << "\nnot in range";
    } while (number < 0 || number > 99);

    if (number >= 0 && number <= 19)
        in_word = ones[number];
    else if (number > 19 && number <= 99)
    {
        int t = number / 10;
        int o = number % 10;

        if (o == 0)
            in_word = tens[t];
        else
            in_word = tens[t] + " " + ones[o];
    }

    cout << "\nin word: " << in_word << endl;

    return 0;
}