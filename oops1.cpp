//  write a program to print sum of two no.

#include<iostream>
using namespace std;
class add{
    int a,b,c;
    public:
   int input(){
        cout<<"input the num.";
        cin>>a>>b;
    }
    int addition(){
        c=a+b;
    }
    int output(){
        cout<<c;
    }};
    int main(){
        add a1;
        a1.input();
        a1.addition();
        a1.output();
        return 0;
    }
