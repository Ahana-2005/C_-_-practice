//Write a program in c++ to calculate the area of regular hexagon.
#include <iostream>

using namespace std;
class hexagon{
private: float a,b,area;
public:
    void getvalue(){
        cout<<"Enter the Side of hexagon:";
        cin>>a;
        b=(3*1.732)/2;
    }
    void Area(){
        area=b*(a*a);
        cout<<"The area of the hexagon is:"<<area;
    }
};
int main(){
    hexagon h;
    h.getvalue();
    h.Area();
}