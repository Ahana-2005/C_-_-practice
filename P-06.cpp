//Write a program to get the discriminant value of a quadratic equation.
#include <iostream>
using namespace std;
class Discriminant {
private:
    int a, b,c,D;
public:
    void dis() {
        cout << "Enter the value of A, B and C:";
        cin >> a >> b>>c;
        D=(b*b)-(4*a*c);
    }
    void displayValues() const {
        cout << "The discriminant: " << D << endl;
    }
};
int main() {
    Discriminant s;
    s.dis();
    s.displayValues();
    return 0;
}
