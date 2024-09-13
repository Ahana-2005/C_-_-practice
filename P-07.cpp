//Write a program to convert the value of temperature from degree Celsius to degree Fahrenheit.
#include <iostream>
using namespace std;
class TemperatureConverter {
private:
    float c;
    float f;
public:
    void convertToFahrenheit() {
        cout << "Enter the temperature in Celsius: ";
        cin >> c;
        f = ((c * 9.0) / 5.0) + 32.0;
    }
    void displayFahrenheit() const {
        cout << "Temperature in Fahrenheit: " << f << endl;
    }
};
int main() {
    TemperatureConverter con;
    con.convertToFahrenheit();
    con.displayFahrenheit();
    return 0;
}
