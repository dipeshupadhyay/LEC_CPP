#include<iostream>
using namespace std;

class student{ 
    public :
    double marks;
    student(){
        int m;
        marks=m;
    }
};
double calc_average(student s1, student s2){
    double average;
    average=(s1.marks+s2.marks)/2;
    return average;
}
 int main(){
    student m1,m2;
    m1.marks=50;
    m2.marks=60;
    cout<<"The average is" <<calc_average(m1,m2);
return 0;
}