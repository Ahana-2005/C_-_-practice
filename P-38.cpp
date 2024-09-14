//Write a program in c++ to check whether character is vowel or not in switch case.
#include <iostream>

using namespace std;
class Vowel{
private:char ch;
public:void check(){
    cout<<"Enter The character:";
    cin>>ch;
    switch (ch) {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            cout<<"It is a Vowel.";
            break;
        default:
            cout<<"It is a Consonant";
    }
}
};
int main(){
    Vowel v;
    v.check();
    return 0;
}