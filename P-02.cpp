//Write a program in c++ to change the value of a variable by taking an input from the user.
#include <iostream>
using namespace std;
class num {
private:int a=10;
public:
    void display(){
        cout<<"Initial "<<a<<endl;
    }
    void getnum(){
        cin>>a;
        cout<<"New "<<a<<endl;
    }

};

int main() {
    num n;
    n.display();
    n.getnum();
    return 0;
}
