//Write a program in c to find the factorial of n.
#include <iostream>

using namespace std;
class Factorial{
private:int n;
public:void check(){
    cout<<"Enter the number:";
    cin>>n;
    int a=1;
    while(n>0)
    {
        a*=n;
        n--;
    }
    cout<<"The factorial is:"<<a;
}
};
int main(){
    Factorial f;
    f.check();
    return 0;
}