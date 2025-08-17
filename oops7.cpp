// record multiple student details using class
#include<iostream>
using namespace std;
class student{
    int rollno;
    string name;
    float marks;
    public:
    void details(){
        cout<<"Roll No."<<endl;
        cout<<"Name:"<<endl;
        cout<<"Enter Marks:"<<endl;
        cin>>rollno;
        cin>>name;
        cin>>marks;
        }
        void display(){
           cout<<rollno<<endl;
           cout<<name<<endl;
           cout<<marks;    
        }
};
int main(){
    int n;
    cout<<"Enter the no of students:";
    cin>>n;
    student S[n];
    for(int i=0;i<n;i++){
        cout<<"enter the student"<<i<<endl;
        S[i].details();
    }
     for(int i=0;i<n;i++){
        cout<<"student"<<i<<endl;
        S[i].display();
    }
    return 0;
}