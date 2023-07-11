#include<iostream>
using namespace std;
class A{
    public:
    int data;
   void getdata(){
        cout<<"Enter the value of data:"<<endl;
        cin>>data;
    }
    void showdata(){
        cout<<"The value of data is:"<<data;
    }
};
class B{
    public:
    A a;
    int b;
    void getdata(){
        a.getdata();
        cout<<"Enter the value of b:"<<endl;
        cin>>b;
        
    }
    void showdata(){
        a.showdata();
        cout<<"\nthe value of b:"<<b<<endl;
    }
};
int main(){
    B b;
    b.getdata();
    b.showdata();
    return 0;
}