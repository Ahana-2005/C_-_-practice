//Write a program in to print the size of a data type in floating point.
#include <iostream>
using namespace std;
class Size{
private:int a;
public:
    void data(){
        cout<<"Enter the number:";
        cin>>a;
        cout<<"The size in Float:"<<(float )sizeof(a);
    }
};
int main(){
    Size s;
    s.data();
    return 0;
}