//Write a program in c++ to check whether a year is leap year or not.
#include <iostream>

using namespace std;
class year{
private:int a;
public:void check(){
        cout<<"Enter Year:";
        cin>>a;
        if ((a%4==0)&&((a%400==0)||(a%100!=0)))
            cout<<"It is a leap year";
        else
            cout<<"It is not a leap year";
    }
};
int main(){
    year n;
    n.check();
    return 0;
}