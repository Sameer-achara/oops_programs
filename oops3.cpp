// WAP to store the data of employee 
#include<iostream>
using namespace std;
class employee{
   private:
   int id,pan;
   public:
   void input(){
    cout<<"enter the employee details";
    cin>>id>>pan;
   }
   void output(){
    cout<<"id:"<<id<<endl<<"pan:"<<pan;
   }
};
int main(){
    employee e1;
    e1.input();
    e1.output();
    return 0;
}