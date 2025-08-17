// hierichical inheritence
#include<iostream>
using namespace std;
class vehicle{
   public:
   void start(){
    cout<<"Vehicle start"<<endl;
    cout<<"speed-59km/h"<<endl;
    cout<<"color->Blue"<<endl;
   }
};
class bike : public vehicle{
    public:
    void b(){
        cout<<"bike is my fav."<<endl;
    }
};
class car : public vehicle{
    public:
    void c(){
        cout<<"car is ready for trip"<<endl;
     }
};
class bus : public vehicle{
    public:
    void bu(){
        cout<<"all passengers are ready"<<endl;
    } 
};
int main(){
    bike mybike;
    car mycar;
    bus  mybus;
    cout<<"----- car -----"<<endl;
    mycar.start();
    mycar.c();
    cout<<"----- bike -----"<<endl;
    mybike.start();
    mybike.b();
    cout<<"----- bus -----"<<endl;
    mybus.start();
    mybus.bu();
    return 0;
}