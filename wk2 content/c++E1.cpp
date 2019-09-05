#include <iostream>		//library with all of our io stuff

using namespace std;	//use the std namespace, keeps us from typing extra code

struct st{
	int x;
	int y;
};

int main()
{
	int a, b;

	//to read from teh keyboard we use C++s method cin
	//notice the arrows, pointing at a.  take whatever
	//was typed on the keyboard and put it into a
	cin >> a;

	//to print a message we use cout
	cout << "Please enter a number: ";
	cin >> b;

	//we can use multiple << to chain together things to send to cout
	//endl prints a new line to the screen
	cout << "b's values: " << b << "a's value: " << a << endl;

	//if we want to use dynamic memory we will use the "new" function instead of malloc
	int* c = new int;
	*c = 20;
	cout << *c << endl;

	st* test = new st;
	test->x = 20;
	test->y = 30;
}
