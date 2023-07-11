#include<iostream>
using namespace std;

class mobile{
    int m=10;

    public:
   void display(){
    cout<<"\nvalue of m is"<<m;
    cout<<"\nvalue of what is"<<this ->m;
    cout<<"\nthe address of current object is"<<this;

    }

};

int main()
{
    mobile m1,m2;
    m1.display();
    m2.display();
    return 0;
}