//WAP to calculate the total marks of student
#include<iostream>
using namespace std;
class student{
    string name;
    int marks1,marks2,marks3;
    public:
    void details(){
        cout<<"enter the name:";
        cin>>name;
        cout<<"enter the marks1:";
        cin>>marks1;
        cout<<"enter the marks2:";
        cin>>marks2; 
        cout<<"enter the marks3:";
        cin>>marks3;
    }
    void add(){
        int total=marks1+marks2+marks3;
        cout<<name<<" "<<total;
    }
};
int main(){
    student s1;
    s1.details();
    s1.add();
    return 0;
}