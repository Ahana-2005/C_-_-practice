//Write a program in c++ to perform addition,subtraction,multiplication and division of two variable by taking user input.
#include <iostream>
using namespace std;
class Arithmetic {
private:
    int a, b;
    int add, sub, mul, div;
public:
    void Operations(){
        cout << "Enter two integers: ";
        cin >> a >> b;
        add = a + b;
        sub = a - b;
        mul = a * b;
        if (b != 0) {
            div = a / b;
        } else {
            div = 0;
        }
    }
    void displayResults() const {
        cout << "Addition = " << add << endl;
        cout << "Subtraction = " << sub << endl;
        cout << "Multiplication = " << mul << endl;
        cout << "Division = " << div << endl;
    }
};
int main() {
    Arithmetic x;
    x.Operations();
    x.displayResults();
    return 0;
}
