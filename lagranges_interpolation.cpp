#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int no_of_entries;
    vector<double> x, y, l;
    double temp, X, value = 0.0;
    cout << "enter number of entries: ";
    cin >> no_of_entries;

    // getting the entries from the user
    for (int i = 0; i < no_of_entries; i++)
    {
        cout << "\nenter x" << i << ": ";
        cin >> temp;
        x.push_back(temp);
        cout << "\nenter y" << i << ": ";
        cin >> temp;
        y.push_back(temp);
        cout << endl;
    }
    cout << "enter x: ";
    cin >> X; // x for which the value of y has to be computed

    // computing l's
    for (int i = 0; i < no_of_entries; i++)
    {
        double numerator = 1.0, denominator = 1.0;
        for (int j = 0; j < no_of_entries; j++)
        {
            if (j == i)
                continue;
            numerator *= (X - x[j]);
            denominator *= (x[i] - x[j]);
        }
        l.push_back(numerator / denominator);
    }
    cout << endl << "computed results: " << endl;
    for (int i = 0; i < no_of_entries; i++)
    {
        cout << endl << "l" << i << " = " << l[i] << endl;
        value += l[i] * y[i];
    }

    cout << "\nthe value of y for x = " << X << " is: " << value << endl;

    return 0;
}