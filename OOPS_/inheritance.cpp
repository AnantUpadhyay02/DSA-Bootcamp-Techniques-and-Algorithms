#include<iostream>
using namespace std;

class human { // Parent class
    public:
    int age;
    int height;
    int weight;
};

class male: public human { // Child Class
    public:
    string colour;

    void sleep(){
        cout<< "Dude's sleeping"<<endl;
    }
};


int main(){
    male ramesh;
    cout<<ramesh.age<<endl;
    ramesh.sleep();


return 0;
}