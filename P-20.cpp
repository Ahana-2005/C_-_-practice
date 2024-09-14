//Write a program in c++ to find out the Simple and Compound Interest.
#include <iostream>
#include <math.h>

using namespace std;
class Interest{
private:float p,r,t;
public:void get(){
    cout<<"Enter the Principal amount:";
    cin>>p;
    cout<<"Enter the Rate of interest:";
    cin>>r;
    cout<<"Enter the Time of maturation:";
    cin>>t;
    r/=100;
}
void SI(){
    float si=p*r*t;
    cout<<"The Simple Interest is:"<<si;
}
void CI(){
    float a=1+r;
    float A=p* pow(a,t);
    float ci=A-p;
    cout<<"\nThe Compound Interest is:"<<ci;
}
};
int main(){
    Interest i;
    i.get();
    i.SI();
    i.CI();
    return 0;
}