//Write a program in c++ to check whether the temperature of water can reach boiling point.
#include <iostream>

using namespace std;
class temperature{
private:float temp;
public:void check(){
    cout<<"Enter the temperature in celcius:";
    cin>>temp;
    if(temp>=100)
        cout<<"The water has reached boiling point.";
    else
        cout<<"The water has yet to reach boiling point.";
}
};
int main(){
    temperature t;
    t.check();
    return 0;
}