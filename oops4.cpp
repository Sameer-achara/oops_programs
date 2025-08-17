// WAP to show the student details using parameterized constructor.
#include<iostream>
using namespace std;
class student{
    int roll,age;
    public:
    student(int x , int y){
        roll=x;
        age=y;
    }
    void details(){
        cout<<"roll:"<<roll<<endl<<"age:"<<age;
    }
};
int main(){
    student s1(45,18);
    s1.details();
    return 0;
}