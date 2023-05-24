#include <iostream>
using namespace std; 
    
int main(){
    int subjects[5], i;  
    int marks, total=0;     
    cout << "Enter marks of subjects\n";   
     for(i = 0; i < 5; i++){
       
       cin >> subjects[i];  
       total += subjects[i]; 
       
    }
    cout << "total marks is"<< total;  
    
}