#include<iostream>
using namespace std;

class parent{
    protected:
    int id_protected;
};

class child: public parent{

    public:
    void setId(int id)
    {
        id_protected=id;
    }

    void displayId()
    {
         cout<<"id_protected is"<<id_protected<<endl;

    }

};

int main(){
    child obj1;
    obj1.setId(6);
    obj1.displayId();
    return 0;
}