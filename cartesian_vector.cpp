#include <iostream>
using namespace std;

class Vector
{
    float x, y, z;

public:
    Vector() : x(0.0f), y(0.0f), z(0.0f) {}
    Vector(int x, int y, int z) : x(x), y(y), z(z) {}
    friend istream& operator>>(istream& s, Vector& v);
    friend ostream& operator<<(ostream& s, Vector& v);
    Vector operator+(Vector v2) { return Vector(x + v2.x, y + v2.y, z + v2.z); }
};

istream& operator>>(istream& s, Vector& v)
{
    cout << "\nenter x, y, z components, respectively: ";
    s >> v.x >> v.y >> v.z;
    return s;
}

ostream& operator<<(ostream& s, Vector& v)
{
    s << "(" << v.x << "," << v.y << "," << v.z << ")";
    return s;
}

int main()
{
    Vector v1(7, 9, 1), v2(9, 7, 8);
    Vector v3 = v1 + v2;
    cout << v3 << endl;
    return 0;
}