//Write a program in c++ to print diamond shaped pattern
#include <iostream>

using namespace std;
class pattern{
private:int r;
public:void print(){
    cout<<"Enter the rows:";
    cin>>r;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=r-i;j++)
            cout<<"  ";
        for(int j=1;j<=2*i-1;j++)
            cout<<"* ";
        cout<<endl;
    }
    for(int i=r-1;i>=1;i--)
    {
        for(int j=1;j<=r-i;j++)
            cout<<"  ";
        for(int j=1;j<=2*i-1;j++)
            cout<<"* ";
        cout<<endl;
    }
}
};
int main(){
    pattern p;
    p.print();
    return 0;
}