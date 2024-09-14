//Write a program in c by taking four numbers and find the largest number using and operator.
#include <iostream>

using namespace std;
class num{
private:int a,b,c,d;
public:void check(){
        cout<<"Enter A,B,C and D:";
        cin>>a>>b>>c>>d;
        if ((a>b)&&(a>c)&&(a>d))
            cout<<"A is largest.";
        else if((b>a)&&(b>c)&&(b>d))
            cout<<"B is largest.";
        else if((c>a)&&(c>b)&&(c>d))
            cout<<"C is largest.";
        else
            cout<<"D is largest.";
    }
};
int main(){
    num n;
    n.check();
    return 0;
}