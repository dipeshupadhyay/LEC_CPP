#include<iostream>
using namespace std;

class wall{
    public:
    int length;
    int height;
    
    wall(int len, int hgt){
        length=len;
        height=hgt;

    }
    wall(wall &obj){
        length=obj.length;
        height=obj.height;

    }
    public:
    int AREA(int len,int hgt){
        return len*hgt;
    }

};

int main(){
    wall wall1(5,6);
    cout<<"area is"<<wall1.AREA(5,6);
}
