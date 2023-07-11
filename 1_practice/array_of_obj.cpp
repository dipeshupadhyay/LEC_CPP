#include<iostream>
using namespace std;

class student{
    string name;
    int age;

    public:
    void getvalue()
    {
        cin>>name;
        cin>>age;
    }

    void showname()
    {
        cout<<name<<endl;
        cout<<age<<endl;

    }
};

int main()
{
    student s[100];
    for(int i=0;i<5;i++)
    {
        s[i].getvalue();
    }
    for(int i=0;i<5;i++)
    {
        s[i].showname();
    }

    return 0;
}


 