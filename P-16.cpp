//Write a program in c++ to check whether a line is straight line or not.
#include <iostream>
using namespace std;
class line{
private:float y,m,x,c;
public:void getvalue(){
    cout<<"Enter the values of Y,X,M and C:";
    cin>>y>>m>>x>>c;
}
void straight(){
    float a=(m*x)+c;
    int sl=(y==a)?(y==a):(y==a);
    if (sl==1)
        cout<<"It is a straight line.";
    else
        cout<<"It is not a straight line.";
}
};
int main(){
    line l;
    l.getvalue();
    l.straight();
    return 0;
}