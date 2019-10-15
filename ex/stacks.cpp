#include <iostream>
using namespace std;
#define MAXSIZE 100

class stack{
public:
    stack();
    void push(int num);
    void pop();
    int top();
    bool isEmpty();

private:
    int stackData[MAXSIZE];
    int topPtr;
};

stack::stack()
{
    topPtr = 0;
    for(int i = 0; i < MAXSIZE; i++){
        stackData[i] = -1;
    }
}

void stack::push(int num)
{
    stackData[topPtr] = num;
    topPtr++;
}

void stack::pop()
{
    if(!isEmpty())
        topPtr--;
    else
        cout << "List is empty! Remove failed." << endl;
}

bool stack::isEmpty()
{
    if(topPtr == 0)
        return true;
    else
        return false;
}

int stack::top()
{
    if(!isEmpty()){
        int trueTop = topPtr-1;
        return stackData[trueTop];
    } else {
        cout<<"List is empty!"<<endl;
    }
}

int main()
{
    stack s1;
    stack* s2 = new stack(); 
    
    for(int i = 0; i < 10; i++)
        s1.push(i);

    while(!s1.isEmpty())
    {
        int val = s1.top();
        cout<<val<<endl;
        s1.pop();
    }
}