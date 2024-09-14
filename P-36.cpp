//Write a program in c++ to print the sum of numbers.
#include <iostream>

using namespace std;
class Sum{
private:int n;
public:void S(){
    cout<<"Enter the Number:";
    cin>>n;
    int s=n*(n+1)/2;
    cout<<"The sum is:"<<s;
}
};
int main(){
    Sum sum;
    sum.S();
    return 0;
}