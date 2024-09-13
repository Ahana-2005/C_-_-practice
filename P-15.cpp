//Write a program in c to calculate the area of triangle using Heron's formula.
#include <iostream>
#include <math.h>

using namespace std;
class triangle{
private:float s,a,b,c,area;
public:
    void getum(){
        cout<<"Enter the sides of the triangle:";
        cin>>a>>b>>c;
    }
    void Area(){
        s=(a+b+c)/2;
        area= sqrt(s*((s-a)*(s-b)*(s-c)));
        cout<<"The Area is:"<<area;
    }
};
int main(){
    triangle t;
    t.getum();
    t.Area();
    return 0;
}