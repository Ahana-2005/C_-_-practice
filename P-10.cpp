//Write a program to print the following pyramid without pattern.
//        *
//      *   *
//    *   *   *
#include <iostream>
using namespace std;
class pyramid{
private:
    void printpyramid(){
        cout<<"    *  "<<endl<<"  *   *"<<endl<<"*   *   *"<<endl;
    }
public:
    void display(){
        printpyramid();
    }
};
int main(){
    pyramid p;
    p.display();
}