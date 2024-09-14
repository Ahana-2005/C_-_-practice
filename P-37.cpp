//Write a c++ program to calculate the discount amount by taking the price of the product as an input from the user if the discount is greater than 10% but less than 50%,18% GST is to be added to the total bill and if it is more than 50% but less than 100%,2% GST will be applied.
#include <iostream>

using namespace std;
class discount{
private:float amt,dis;
public:void get(){
    cout<<"Enter amount:";
    cin>>amt;
    cout<<"Enter discount:";
    cin>>dis;
}
void calculation(){
    if(dis>=10&&dis<=50){
        float bill=(amt*(dis/100))+(18/100);
        cout<<"The final bill is:"<<bill;
    }
    else if(dis>50&&dis<=100) {
        float bill = (amt * (dis / 100)) + (2 / 100);
        cout << "The final bill is:" << bill;
    }
    else
        cout<<"ERROR!";
}
};
int main(){
    discount d;
    d.get();
    d.calculation();
    return 0;
}