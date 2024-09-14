//Write a program in c++ to take any keyboard input from the user to determine its data type.
#include <iostream>
#include <cctype>

using namespace std;
class Key {
private:
    char a;
public:
    void Board() {
        cout << "Enter a single character: ";
        cin >> a;
        if (isdigit(static_cast<unsigned char>(a))) {
            cout << "The character entered is a Digit" << endl;
        } else if (isalpha(static_cast<unsigned char>(a))) {
            cout << "The character entered is an Alphabet" << endl;
        } else if (ispunct(static_cast<unsigned char>(a))) {
            cout << "The character entered is a Punctuation" << endl;
        } else if (isspace(static_cast<unsigned char>(a))) {
            cout << "The character entered is a Space" << endl;
        } else {
            cout << "Error! The input is not a recognized character type." << endl;
        }
    }
};
int main() {
    Key k;
    k.Board();
    return 0;
}
