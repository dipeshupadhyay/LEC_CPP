#include <iostream>
using namespace std;

int getdata(){
    int num1;
    cout<<"enter number before swapping"<<endl;
    cin>>num1;
    return num1;

}

void swap(int num1, int num2) {
    int temp;
     temp = num1;
    num1 = num2;
    num2 = temp;

    cout<<"the number after swapping"<<num1 <<num2;
}

int main() {
    int num3=getdata();
    int num4=getdata();
    swap(num3,num4);
    return 0;
    
}
