#include <iostream>
using namespace std;
class SimpleInt {
private:
    int value;
public:
    void getValue(){
        cout<<"Enter the value:";
        cin>>value;
    }
    int leftShift(int shift) const {
        return value << shift;
    }
    int rightShift(int shift) const {
        return value >> shift;
    }
};
int main() {
    SimpleInt num;
    num.getValue();
    int leftShifted = num.leftShift(1);
    cout << "Left Shift: " << leftShifted << endl;
    int rightShifted = num.rightShift(1);
    cout << "Right Shift: " << rightShifted << endl;
    return 0;
}
