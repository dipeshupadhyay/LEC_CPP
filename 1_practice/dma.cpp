#include<iostream>
using namespace std;

int *roll=new int;
char *name=new char[15];

void scanRollandName()
{
    cout<<endl<<"enter the roll number:";
    cin>>*roll;
    

    cout<<endl<<"enter name:";
    cin>>name;
}


void freememory(){
    delete roll;
    delete [] name;
}

void printRollandName(){
    cout<<"roll no is:"<<*roll<<endl;
    cout<<"name is:"<<name<<endl;
}


int main(){
    scanRollandName();
     cout<<endl<<"Memory allocated dynamically for name and roll";
    cout<<endl<<"Value of Name and Roll before deallocation";
    printRollandName();
    freememory();
    cout<<"\n\nAfter Deallocation: ";
    printRollandName();
    return 0;
}




