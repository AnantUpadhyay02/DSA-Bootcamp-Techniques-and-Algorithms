#include<iostream>
using namespace std;

class A{

    public:
    void sayhello(){
        cout<<"Hello Anant"<<endl;
    }
    void sayhello(string s){ // Function overloading 
        cout<<"hey you"<<endl; 
    }

};
class B{
    public:
    int a;
    int b;
    void add(){
        cout<<a-b<<endl;
    }

    void operator- (B &obj ){ // Operator overloading
        int value1 = this->a;
        int value2 = obj.a;
        cout<<"output "<<value2+value1<<endl;
    }
    void operator() (){
        cout<<"Money Money Money!!"<<endl<<this->a<<endl;
    }
};
// Method Over-riding
class animal{
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};
class dog: public animal{
    public:
    void speak(){
        cout<<"Barking"<<endl;
    }
};


int main(){

    dog barney;
    barney.speak();




    // A obj;
    // obj.sayhello(); 
    // B obj1, obj2;
    // obj1.a = 5;
    // obj2.a= 2;
    // obj1 - obj2;
    // obj1();
    
return 0;
}