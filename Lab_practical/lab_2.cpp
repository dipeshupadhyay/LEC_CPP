#include<iostream>

int swap(int& num1,int& num2);
int getnum();


int main()
{
    int num1=getnum();
    int num2=getnum();
    std::cout<<"the values before swapping"<<num1<<num2;
    swap(num1,num2);
   std:: cout<<"the values after swapping"<<num1<<num2;
    return 0;
}