//Write a program in c++ to check whether a number is prime or composite.
#include <iostream>

using namespace std;
class Prime{
private:int n;
public:void check(){
    cout<<"Enter the number:";
    cin>>n;
    int m=n/2,a=0;
    for (int i = 2; i <=m; i++) {
        if(n%i==0){
            cout<<"It is not a prime number.";
            a++;
            break;
            }
        }
    if (a==0)
        cout<<"It is a prime number";
}
};
int main(){
    Prime p;
    p.check();
    return 0;
}