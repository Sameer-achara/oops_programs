// write a program to store the data of student details
#include<iostream>
using namespace std;
class student{
    private:
    int rollno,age;
    public:
    void input(){
        cout<<"enter the student details";
        cin>>rollno>>age;
    }
    void output(){
        cout<<"Roll no."<<rollno<<endl<<"age:"<<age;
    }
};
int main(){
    student s1;
    s1.input();
    s1.output();
    return 0;
}