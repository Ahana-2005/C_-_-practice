//Write a program in c++ to check whether the character entered by the user is a vowel or not.
#include <iostream>

using namespace std;
class character{
private:char ch;
public:void check(){
    cout<<"Enter the character:";
    cin>>ch;
    int lc=(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
    int uc=(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
    if(lc||uc)
        cout<<"The character entered is a vowel.";
    else
        cout<<"The character entered is a consonant.";
}
};
int main(){
    character c;
    c.check();
    return 0;
}