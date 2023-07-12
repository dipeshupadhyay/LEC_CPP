#include <iostream>
using namespace std;


class calculator{
    public:
    int a=2 ,b=2;
    int add(int a,int b)
    {
        return a+b;
    }
};
int main(){
    calculator calc1;
    int ans = calc1.add(1,2);
    cout<<ans;
    
    
}