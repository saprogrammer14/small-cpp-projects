// a safer array
// by: Shoumik Acharya

#include <iostream>
#include <cstdlib>
using namespace std;

class safearray
{
    int SZ;
    int *arr;

public:
    safearray(int n) : SZ(n) { arr = new int[SZ]; }
    ~safearray() { delete[] arr; }
    int &operator[](int n)
    {
        if (n >= 0 && n < SZ)
            return *(arr + n);
        else
        {
            cout << "\nout of bounds!";
            exit(1);
        }
    }
    int length() const { return SZ; }
};

int main()
{
    safearray sa1(10);
    for (int i = 0; i < 10; i++)
        sa1[i] = rand();

    for (int i = 0; i < 12; i++)
        cout << sa1[i] << endl;
    return 0;
}