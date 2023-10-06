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
    int weight(int a){
        if(a>90){
            cout<<"Overweight ";
            return a;
        }else{
            cout<<"Skinny ";
            return a;
        }
    }
};


int main(){
    male ramesh; 
    cout<<ramesh.age<<endl; // male inherited age from human
    cout<<ramesh.height<<endl;
    cout<<ramesh.colour<<endl;
    ramesh.sleep();
    cout<<ramesh.weight(50)<<endl;


return 0;
}