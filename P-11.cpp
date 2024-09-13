//Write a program in c++ to make your own currency converter.
#include <iostream>
using namespace std;
class currency{
private:float rupees;
public:
    void getnum(){
        cout<<"Enter the amount in Rupees:";
        cin>>rupees;
    }
    void dollar(){
        cout<<"The amount in Dollar is:"<<rupees*0.012<<endl;
    }
    void yan(){
        cout<<"The amount in Yan is:"<<rupees*1.77<<endl;
    }
    void euro(){
        cout<<"The amount in Euro is:"<<rupees*0.011<<endl;
    }
    void rrubel(){
        cout<<"The amount in Russian Rubel is:"<<rupees*1.80<<endl;
    }
};
int main(){
    currency c;
    c.getnum();
    c.dollar();
    c.euro();
    c.yan();
    c.rrubel();
    return 0;
}