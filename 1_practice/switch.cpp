#include <iostream>
using namespace std;

int main(){
    char grade;
    cout<<"enter the grade of students";
    cin>>grade;
    cout<<"the result is";

    switch(grade)
    {
        case 'A':
            cout<<"excellent ";
            break;

         case 'B':
            cout<<"better";
            break;

            case 'C':
                cout<<"good";
                break;

                case 'D':
                cout<<"pass";
                break;

                case 'E':
                cout<<"fail";
                break;

                default:
                cout<<"invalid marks";
                

                return 0;


             

    }

}