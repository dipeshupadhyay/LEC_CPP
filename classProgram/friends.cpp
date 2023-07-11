#include<iostream>
using namespace std;

class friends{
    public:
    int phone;
    string name;
    string address;

    void getdata(){

        cout<<"enter phone no:";
        cin>>phone;
        cout<<"enter name:";
        cin>>name;
        cout<<"enter address:";
        cin>>address;
    
    }
    
   
};

int main(){

    friends f1,f2;
    cout<<"enter the features of first friends:"<<endl;
    f1.getdata();
    cout<<"enter the features of second friend:"<<endl;
    f2.getdata();
    return 0;




}