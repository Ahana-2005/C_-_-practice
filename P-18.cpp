//Write a program in c++ to check whether a triangle is right-angled triangle or not.
#include <iostream>
#include <math.h>
using namespace std;
class Right{
private:float h,hy,b;
public:void getnum(){
    cout<<"Enter the values of H,HY and B:";
    cin>>h>>b>>hy;
}
void righttriangle(){
    float HY= sqrt((h*h)+(b*b));
    int rat=(hy==HY)?(hy==HY):(hy==HY);
    if (rat==1)
        cout<<"The triangle is a right angled triangle";
    else
        cout<<"The triangle is not a right angled triangle";
}
};
int main(){
    Right r;
    r.getnum();
    r.righttriangle();
    return 0;
}