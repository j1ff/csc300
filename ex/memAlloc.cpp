#include <iostream>
#include <string>
using namespace std;

struct struct1
{
    int x;
    int* ptr;
    string s1;
    bool b1;
};

int main()
{
    struct1* s1ptr = new struct1;
    s1ptr->x = 20;
    s1ptr->ptr = new int;
    *(s1ptr->ptr) = 30;
    cout << "x val: " << s1ptr->x << "ptr val: " << *(s1ptr->ptr) << endl;

    delete(s1ptr->ptr);
    delete(s1ptr);

}