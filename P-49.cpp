//Write a program in c++ to print Hello World for n number of times without using any loop.If -1 is encountered,stop the program
#include <iostream>

using namespace std;
class hello{
private:int n;
public:void print(){
    cin>>n;
    l1:
    if(n>0){
        cout<<"Hello World! ";
        n--;
        goto l1;
    }
    else
        cout<<"Stop!";
}
};
int main(){
    hello h;
    h.print();
    return 0;
}