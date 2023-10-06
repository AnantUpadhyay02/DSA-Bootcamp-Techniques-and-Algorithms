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
    void model(int a){
        cout<<a<<endl;
    }

};
class Driver{
    public:
    int age;
    int exp;
    
    public:
    int age(int a){
        cout<<a<<endl;
        return a;
    }
    void exp(string s){
        cout<<s<<endl;
    }

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

//Hierarical inheritance

class maruti:  public vehicles{

};

class hundayi: public vehicles{

};

int main(){

    Driverdetails kala;
    kala.topspeed();

    nisaan_ultra car1;
    car1.topspeed();
return 0;
}