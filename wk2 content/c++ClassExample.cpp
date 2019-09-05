#include <iostream>
using namespace std;

class myClass{
public:
	//these are function prototypes
	myClass();
	void printMessage();
	void setX(int a);
	void setY(int b);
	void callFunc();
private:
	//private variables that can only be accessed by the functions above
	int x;
	int y;
	void privateFunc();

};

void myClass::callFunc()
{
	privateFunc();
}

//constructor function that runs whenever a new object is made
myClass::myClass(){
	x = 10;
	y = 20;
}


//below are the actual function definitions
//notice the 2 printMessage functions are different
//one is a member of the class, the other is not

void myClass::printMessage()
{
	cout << "HELLO!!" << endl;
}

void printMessage()
{
	cout << "THIS IS A DIFFERENT MESSAGE" << endl;
}

void myClass::setX(int a)
{
	x = a;
}

void myClass::setY(int b)
{
	y = b;
}

//note that this function will only be able to be called from a member function
void myClass::privateFunc()
{
	cout << "Priave function!" << endl;
}

int main()
{
	//declare statically
	myClass c1;
	//declare dynamically
	myClass* c2 = new myClass();

	//the following lines will  not work
	//c1.x = 20;
	//c1.y = 30;
	//c1.privateFunc();

	c1.setX(39);
	c1.setY(40);
	c1.callFunc();

	c2->setX(55);
	c2->setY(199);

	//note these are 2 distinct instantiations of myClass
	//each with their own set of functions and variables
	c1.printMessage();
	c2->printMessage();
	
	delete(c2);
}


