#include <iostream>
using namespace std;

class complex
{
    float real, img;

public:
    complex() : real(0.0f), img(0.0f) {}
    complex(float r, float i) : real(r), img(i) {}
    friend ostream& operator<<(ostream& s, complex& c);
    friend istream& operator>>(istream& s, complex& c);
    complex operator+(complex c2) { return complex(real + c2.real, img + c2.img); }
    complex operator-(complex c2) { return complex(real - c2.real, img - c2.img); }
    complex operator*(complex c2) { return complex(real * c2.real - img * c2.img, real * c2.img + img * c2.real); }
};

ostream& operator<<(ostream& s, complex& c)
{
    if (c.img < 0)
        s << c.real << "-" << -c.img << "i";
    else if (c.img == 0)
        s << c.real;
    else if (c.real == 0)
        s << c.img << "i";
    else
        s << c.real << "+" << c.img << "i";
    return s;
}

istream& operator>>(istream& s, complex& c)
{
    cout << endl
         << "enter the real and imaginary part, respectively: ";
    s >> c.real >> c.img;
    return s;
}

int main()
{
    complex a(2,3), b;
    cout << a << endl;
    cin >> b;
    cout << endl << b;

    complex c = a + b;
    complex d = a * b;
    cout << endl << c;
    cout << endl << d;
    return 0;
}