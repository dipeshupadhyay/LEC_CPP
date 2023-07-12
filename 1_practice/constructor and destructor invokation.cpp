#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "base class constructor" << endl;
    }
    ~A()
    {
        cout << "base class destructor" << endl;
    }
};
class B : public A
{
public:
    B()
    {
        cout << "derived class constructor" << endl;
    }
    ~B()
    {
        cout << "derived class destructor" << endl;
    }
};
int main()
{
    B d;
    return 0;
}