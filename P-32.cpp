//Write a program in c++ to take the values of 2 sides.If both the sides are same,calculate the area of square else calculate the area of rectangle.
#include <iostream>

using namespace std;
class Side{
private:int a,b;
public:void Area(){
    cout<<"Enter the sides:";
    cin>>a>>b;
    int area=a*b;
    if(a==b)
        cout<<"The area of the square is:"<<area;
    else
        cout<<"The area of the rectangle is:"<<area;
}
};
int main(){
    Side s;
    s.Area();
    return 0;
}