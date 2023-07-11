#include<iostream>
using namespace std;
class vehicle{
    private:
    int platenumber;

    public:
    void getnumber(int a){
        platenumber=a;
        cout<<"the platenumber is :"<<platenumber;


    }
};
int main(){
    vehicle car;
    car.getnumber(7575);
}