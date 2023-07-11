#include <iostream>
using namespace std;

class Base {
   public:
    void display() {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base {
   public:
     void print() {
         cout << "Derived Function" << endl;
     }
};

int main() {
    Base b1;
    Derived derived1;
    b1.display();
    derived1.print();
    derived1.display();
    return 0;
}