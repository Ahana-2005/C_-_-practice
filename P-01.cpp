//Write a program in c++ to print the memory addresses of 5 variables.
#include <iostream>

using namespace std;
class num{
private:int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;
    int e = 50;
public:
    void display(){
        cout<<&a<<endl<< &b <<endl<<&c << endl<< &d << endl<< &e << endl;
    }
};
int main() {
    num n;
    n.display();
    return 0;
}
