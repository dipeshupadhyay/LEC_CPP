#include<iostream>
using namespace std;

class A{
    int x;
    public:

    void getnum(int x)
    {
        
       this->x=x;//this pointer
    }

   void shownum()
    {
        cout<<x;
    }
};

int main(){
    A obj1;
    obj1.getnum(10);
    obj1.shownum();
    return 0;
}