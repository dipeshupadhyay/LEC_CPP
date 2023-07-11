#include <iostream>
using namespace std;

class student {
    int num;
    string name;

public:
    
    student() {
        num = 9;
        name = "Dipesh";
    }

    student(int n, string str) {
        num = n;
        name = str;
    }

    void display() {
        cout << "Number is : " << num << endl;
        cout << "Name is: " << name << endl;
    }
};

int main() {
    
    student s1;                  
    student s2(10, "Radhesh");       

    cout << "student 1:\n";
    s1.display();
    cout << endl;

    cout << "student 2:\n";
    s2.display();
    cout << endl;

    return 0;
}
