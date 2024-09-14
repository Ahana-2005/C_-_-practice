//Write a program in c++ to check whether a number odd or even.
#include <iostream>

using namespace std;
class num{
private:int a,b;
public:void check(){
        cout<<"Enter A:";
        cin>>a;
        b=a%2;
        if (b==0)
            cout<<"A is even";
        else
            cout<<"A is odd";
    }
};
int main(){
    num n;
    n.check();
    return 0;
}