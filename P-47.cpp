//Write a program in c++ to print the following
/* * * * * *
    * * * *
     * * *
      * *
       *
      * *
     * * *
    * * * *
   * * * * * */
#include <iostream>

using namespace std;
class pattern{
private:int rows=5;
public:void print(){
        for(int i=0;i<2*rows-1;i++)
        {
            int a;
            if(i<rows)
            {
                a=2*i+1;
            }
            else
            {
                a=2*(2*rows-i)-3;
            }
            for(int j=0;j<a;j++){
                cout<<" ";
            }
            for(int k=0;k<2*rows-a;k++){
                cout<<"* ";
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