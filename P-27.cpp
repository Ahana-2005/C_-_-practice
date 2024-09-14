//Write a program in c++ to input 5 subject from class 12 and calculate the average of the grades.
#include <iostream>

using namespace std;
class average{
private:float m,s,sst,b,e;
public:void getmarks(){
    cout<<"Enter Maths Marks:";
    cin>>m;
    cout<<"Enter Science Marks:";
    cin>>s;
    cout<<"Enter Social Studies Marks:";
    cin>>sst;
    cout<<"Enter Bengali Marks:";
    cin>>b;
    cout<<"Enter English Marks:";
    cin>>e;
}
void avg(){
    float a=(m+s+sst+b+e)/5;
    cout<<"The Average of the marks entered is:"<<a;
}
};
int main(){
    average m;
    m.getmarks();
    m.avg();
    return 0;
}