//Write a program in c++ to print the multiplication table of n.
#include <iostream>

using namespace std;
class multiply{
private:int n;
public:void mul(){
    cout<<"Enter the range:";
    cin>>n;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=10;j++){
            cout<<i<<"*"<<j<<"="<<i*j<<endl;
        }
        cout<<"--------------------\n";
    }
}
};
int main(){
    multiply m;
    m.mul();
    return 0;
}