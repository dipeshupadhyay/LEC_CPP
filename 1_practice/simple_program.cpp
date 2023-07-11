#include<iostream>
using namespace std;

#include<iostream>
using namespace std;

class sathiharu {
    public: 
        string name;
        string address;
        int age;

        sathiharu(string name,string address,int age){
            cout<<"constructor call vayo tw?";
        }
    
    public:
        void ghumeprogram() {
            cout<<"Oi Espali ghumna jaam bujhis "<<name<<" umm "
            <<age<<"ko umer ma hike garna sakinchha masta. ka jane hola ta "
            <<address<<" jada thik hola?";
        }
};

int main() {
  sathiharu firstfriend("string name","string address",int age), secondfriend("string name","string address",int age);
  //  firstfriend.name="Radhesh";
    //firstfriend.age=21;
   // firstfriend.address="Baneshwor";
   // firstfriend.ghumeprogram();


  //secondfriend.name = "Sushil";
//secondfriend.age = 20;
// secondfriend.address = "pilotbaba";
// secondfriend.ghumeprogram();

 }