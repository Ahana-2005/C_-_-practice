//Write a program in c++ to check if the character entered by the user is an upper case character or lower case character.
#include <iostream>

using namespace std;
class character{
private:char ch;
public:void check(){
        cout<<"Enter the character:";
        cin>>ch;
        if(ch>='A'&&ch<='Z')
            cout<<"The character entered is in uppercase";
        else
            cout<<"The character entered is in lowercase";
    }
};
int main(){
    character c;
    c.check();
    return 0;
}