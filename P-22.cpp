//Write a program in c++ to input 2 number and find the larger among the two.
#include <iostream>

using namespace std;
class num{
private:int a,b;
public:void check(){
    cout<<"Enter A and B:";
    cin>>a>>b;
        if (a>b)
            cout<<"A is larger.";
        else if(b>a)
            cout<<"B is larger.";
        else
            cout<<"A and B are equal.";
}
};
int main(){
    num n;
    n.check();
    return 0;
}