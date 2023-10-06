#include<iostream>
using namespace std;
class vehicles {
    public:
    int model;
    int seatCap;

    public:
    void topspeed(){
        cout<<"Depends on the driver"<<endl;
    }
};
class Driver{
    public:
    int age;
    int exp;
};

//Single inheritance
class nisaan: public vehicles {

};

// Multi-level Inheritance
class nisaan_ultra: public nisaan{

};

//Multiple Inheritance
class Driverdetails: public vehicles, public Driver{
    
};

int main(){
    nisaan_ultra car1;
    car1.topspeed();
return 0;
}