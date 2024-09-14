//Write a program in c to calculate the grade of the student according to specific marks:
/*95 to 100:AA
85 to 95:A+
70 to 85:A
60 to 70:B
45 to 60:C
<45:D*/
#include <iostream>

using namespace std;
class grade{
private:int marks;
public:void g(){
    cout<<"Enter the marks of the student:";
    cin>>marks;
        if ((marks > 100) || (marks < 0) )
            cout<<"WRONG ENTRY TRY AGAIN";
        else if ((marks <= 100) && (marks >= 95))
            cout<<"Grade is:AA";
        else if ((marks < 95) && (marks >= 85))
            cout<<"Grade is:A+";
        else if ((marks < 85) && (marks >= 70))
            cout<<"Grade is:A";
        else if ((marks < 70) && (marks >= 60))
            cout<<"Grade is:B";
        else if ((marks < 60) && (marks >= 45))
            cout<<"Grade is:C";
        else
            cout<<"Grade is:D";
}
};
int main(){
    grade n;
    n.g();
    return 0;
}