// friend function 
#include<iostream>
using namespace std;
class A{
    private:
    int var1;
    int var2;
    public:
    A(){
        var1=2;
        var2=3;
    }
        friend void B(A);
};
void  B(A A1){
     cout<<A1.var1<<endl;
     cout<<A1.var2;
}
int main(){
    A A1;
    B (A1);
    return 0;
}