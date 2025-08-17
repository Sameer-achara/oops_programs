//single inheritence
#include<iostream>
using namespace std;
class A{
   public:
   int a;
   int b;
   public:
   void add(){
    a=5;
    b=6;
   }
};
class B : public A{
   public:
   int c;
   void sum(){
    c=a+b;
   }
   void display(){
    cout<<c;
   }
};
int main(){
    B B1;
    B1.add();
    B1.sum();
    B1.display();
    return 0;
}