//Write a program in c++ to print palindrome pyramid.
#include <iostream>

using namespace std;
class pattern{
private:int a=0;
public:void pyramid(){
    for(int i=0;i<5;i++) {
        for(int j=i;j<5;j++){
            cout<<"  ";
        }
        for (int j = 0; j <=i; j++) {
            ++a;
            cout<<a<<" ";
        }
        a--;
        for (int j = 0; j < i; j++) {
            cout<<a<<" ";
            a--;
        }
        cout<<endl;
        a++;
    }
}
};
int main(){
    pattern p;
    p.pyramid();
    return 0;
}