#include <iostream>
using namespace std;

class TripleInt {
public:
    void PrintAll();
    int MinItem();
    TripleInt(int val1 = 0, int val2 = 0, int val3 = 0);
    int item1;
    int item2;
    int item3;


};

TripleInt::TripleInt(int i1, int i2, int i3)
{
    item1 = i1;
    item2 = i2;
    item3 = i3;
}

void TripleInt::PrintAll()
{
    cout << "(" << item1 << "," << item2 << "," << item3 << ")" << endl;
}

int TripleInt::MinItem()
{
    int minVal;
    minVal = item1;
    if (item2 < minVal)
    {
        minVal = item2;
    }
    if (item3 < minVal)
    {
        minVal = item3;
    }
    return minVal;
}

int main()
{
    TripleInt ti(30,40,50);
    ti.PrintAll();
}