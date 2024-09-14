//Write a program in c++ to input a number and check whether it positive or negative.
#include <iostream>

using namespace std;
class num{
private:int n;
public:void check(){
    cout<<"Enter the number to be checked:";
    cin>>n;
    if (n>0)
        cout<<"The number is positive.";
    else
        cout<<"The number is negative.";
}
};
int main(){
    num N;
    N.check();
    return 0;
}