//Write a c++ program to display the day of week by taking the week number from the user.
#include <iostream>

using namespace std;
class Week{
private:int ch;
public:void Day(){
    cout<<"Enter your choice:";
    cin>>ch;
    switch (ch) {
        case 1:cout<<"It is Monday";
            break;
        case 2:cout<<"It is Tuesday";
            break;
        case 3:cout<<"It is Wednesday";
            break;
        case 4:cout<<"It is Thursday";
            break;
        case 5:cout<<"It is Friday";
            break;
        case 6:cout<<"It is Saturday";
            break;
        case 7:cout<<"It is Sunday";
            break;
        default:cout<<"ERROR!";
    }
}
};
int main(){
    Week w;
    w.Day();
    return 0;
}