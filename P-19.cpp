//Write a program in c++ to take the name,program,e-mail ID,birth year of the student and calculate the age and display all the details.
#include <iostream>
#include <string>
using namespace std;
class stu{
private:char name[50],prog[30],email[50];
    int year;
public:void get(){
        cout<<"Enter the Name:";
        string name;
        getline(cin, name, '\n');
        cout<<"Enter the Program:";
        cin>>prog;
        cout<<"Enter the E-mail:";
        cin>>email;
        cout<<"Enter the Birth Year:";
        cin>>year;
    }
    void display(){
        cout<<"Name:"<<name<<endl<<"Program:"<<prog<<endl<<"E-Mail:"<<email<<endl<<"Birth Year:"<<year;
    }
};
int main(){
    stu s;
    s.get();
    s.display();
    return 0;
}