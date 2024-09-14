//Write a program in c++ to check whether a person is eligible to vote or not.
#include <iostream>

using namespace std;
class year{
private:int a;
public:void check(){
        cout<<"Enter Birth Year:";
        cin>>a;
        int b=2024-a;
        if (b>=18)
            cout<<"The person is eligible to vote";
        else
            cout<<"The person is not eligible to vote";
    }
};
int main(){
    year n;
    n.check();
    return 0;
}