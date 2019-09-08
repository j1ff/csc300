#include <iostream>
using namespace std;

template<typename T>
T find_max(T a, T b, T c)
{
    T max_val;
    max_val = a;

    if (b > c)
    {
        max_val = b;
    }
    if (c > max_val)
    {
        max_val = c;
    }
    return max_val;
};

int main()
{
    int a = 20, b = 30, c = 5, i_max;
    float x = 2.0, y = 3.3, z = 22.22222, f_max;

    i_max = find_max(a,b,c);
    cout << "INT max: " << i_max << endl;

    f_max = find_max(x,y,z);
    cout << "FLOAT max: " << f_max << endl;
}