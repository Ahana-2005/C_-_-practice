//Write a program to find out the area of a circle.The circle's radius is user input.
#include <iostream>

using namespace std;
class Area{
private:
    float r,a;
public:
    void area(){
        cout<<"Enter the radius:";
        cin>>r;
        a=3.14*(r*r);
        cout<<"Area is:"<<a;
    }
};
int main(){
    Area x;
    x.area();
    return 0;
}