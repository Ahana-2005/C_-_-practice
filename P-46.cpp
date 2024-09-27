//Write a program in c++ to print the pattern
/*A
B B
C C C
D D D D
E E E E E*/
#include <iostream>

using namespace std;
class pattern{
public:void print(){
        for(int i=1;i<=5;i++){
            for(int j=0;j<i;j++){
                char c='A'-1+i;
                cout<<c;
            }
            cout<<endl;
        }
}
};
int main(){
    pattern p;
    p.print();
    return 0;
}