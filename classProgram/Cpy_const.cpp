#include <iostream>
using namespace std;
 
class Anish{
public :
int len;
int bth;
 Anish(int a, int b){
        len=a;
        bth=b;

 }
 Anish(Anish &obj){
     len=obj.len;
    bth=obj.bth;
 }
};

int main(){
    Anish a1(1,2);
    Anish a2 = a1;
    cout<<a2.len<<" "<<a2.bth;

}
