#include<iostream>
using namespace std;
void display()
{
   static int i=1;
    i+=5;
    cout<<i<<endl;
}

int main()
{
    display();
    display();

}
