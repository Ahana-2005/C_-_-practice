//Write a c program by taking four numbers and find the smallest number using and operator.
#include <iostream>

using namespace std;
class num{
private:int a,b,c,d;
public:void check(){
        cout<<"Enter A,B,C and D:";
        cin>>a>>b>>c>>d;
        if ((a<b)&&(a<c)&&(a<d))
            cout<<"A is smallest";
        else if((b<a)&&(b<c)&&(b<d))
            cout<<"B is smallest";
        else if((c<a)&&(c<b)&&(c<d))
            cout<<"C is smallest";
        else
            cout<<"D is smallest";
    }
};
int main(){
    num n;
    n.check();
    return 0;
}