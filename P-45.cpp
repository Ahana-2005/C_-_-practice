//Write a program print fibonacci series in a pattern.
#include <iostream>

using namespace std;
class pattern{
private:int row,temp1=1,temp2=1,backup;
public:void get(){
    cout<<"Enter the limit:";
    cin>>row;
}
void pyramid(){
    for(int i=0;i<=row;i++) {
        for (int j = 0; j < temp1; j++) {
            printf("* ");
        }
        cout<<endl;
        backup=temp2;
        temp2=temp1+temp2;
        temp1=backup;
    }
}
};
int main(){
    pattern p;
    p.get();
    p.pyramid();
    return 0;
}