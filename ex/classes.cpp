#include <iostream>

using namespace std;

class coord
{
    public:
        int sum();
        void setter(int a, int b, int c);
    private:
        int x;
        int y;
        int z;
};

int coord::sum()
{
    return x + y + z;
}

void coord::setter(int a, int b, int c)
{
    x = a;
    y = b;
    z = c;
}

int main()
{



    coord c1;
    c1.setter(10, 20, 30);
    cout << "Sum " << c1.sum() << endl;

}