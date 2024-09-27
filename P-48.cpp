//Write a program in c++ to print the following
/* * * * * *
   *       *
   *       *
   *       *
   * * * * * */
#include <iostream>

using namespace std;
class pattern{
private:int row=5;
public:void print() {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < row; j++) {
                if (i == 0 || i == row - 1 || j == 0 || j == row - 1)
                    cout<<"* ";
                else
                    cout<<"  ";
            }
            cout<<endl;
        }
    }
};
int main(){
    pattern p;
    p.print();
    return 0;
}