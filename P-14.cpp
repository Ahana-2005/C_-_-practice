//Write a program in c to make your own digital storage converter by taking the size in KB and convert it MB,GB and TB.
#include <iostream>
using namespace std;
class Byte{
private:float KB;
public:
    void getnum(){
        cout<<"Enter the number of bytes in kilo bytes:";
        cin>>KB;
    }
    void Mega(){
        cout<<"The number of bytes in Mega bytes:"<<KB*0.001<<endl;
    }
    void Giga(){
        cout<<"The number of bytes in Giga bytes:"<<KB*0.000001<<endl;
    }
    void Tera(){
        cout<<"The number of bytes in Tera bytes:"<<KB*0.000000001<<endl;
    }
};
int main(){
    Byte b;
    b.getnum();
    b.Mega();
    b.Giga();
    b.Tera();
    return 0;
}