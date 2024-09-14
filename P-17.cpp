//Write a program in c++ to find the distance between 2 points.
#include <iostream>
#include <math.h>
using namespace std;
class Distance{
private:float x1,x2,y1,y2;
public:void getvalue(){
        cout<<"Enter the values of X1,X2,Y1 and Y2:";
        cin>>x1>>x2>>y1>>y2;
    }
    void dis(){
    float e=x2-x1,f=y2-y1;
    float D= sqrt((e*e)+(f*f));
    cout<<"The distance between 2 points is:"<<D;
}
};
int main(){
    Distance d;
    d.getvalue();
    d.dis();
    return 0;
}