#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    long a, b = 0, r;
    string bin = "";
    vector<long> v;
    cout << "Enter a decimal number: ";
    cin >> a;

    while (a != 0)
    {
        r = a % 2;
        a /= 2;
        v.push_back(r);
    }

    while (!v.empty())
    {
        char c = (v.back() == 0) ? '0' : '1';
        bin += c;
        v.pop_back();
    }

    cout << "\nBinary equivalent is: " << bin << endl;
    return 0;
}