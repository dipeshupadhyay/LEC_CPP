#include<iostream>
using namespace std;

class Room{
    public:
    int length;
    int breadth;
    int height;

    double calculateArea(){
        return length*breadth;
        
    }
    double calculateVolume(){
        return length*breadth*height;
    }
};

    int main(){
        Room obj401;
        obj401.length=10;
        obj401.breadth=20;
        obj401.height=30;

        //calculate and display the area and volume of room
        cout<<"the area of the room is:"<<obj401.calculateArea();
        cout<<"the volume of the room is:"<<obj401.calculateVolume();
    }