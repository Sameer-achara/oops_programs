//WAP of friend class
#include<iostream>
using namespace std;
class A{
    private:
    int var1;
    int var2;
    public:
    A(){
        var1=2;
        var2=5;
    }
    friend class B;
};
class B{
    public:
    void print(A A1){
       cout<<A1.var1<<endl;
       cout<<A1.var2;
    }
};
int main(){
    A B2;
    B B3;
    B3.print(B2);
    return 0;
}