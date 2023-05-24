#include<iostream>
using namespace std;

class Room{
    public:
    int length;
    int breadth;
    int height;

    double calculateArea(){
        cout<<"enter length and breadth:";
        cin>>length;
        cin>>breadth;

        return length*breadth;
    }

    double calculateVolume(){
        cout<<"enter length,breadth and height:";
        cin>>length;
        cin>>breadth;
        cin>>height;

        return length*breadth*height;

        
    }

};

int main(){
    Room a,v;
    cout<<"the area of the room is:"<<a.calculateArea();
    cout<<"the volume of the room is:"<<v.calculateVolume();
}