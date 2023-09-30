#include<iostream>
using namespace std;

// #include "class_file.cpp" 

// We neeed to include the class file in order to use that class in our program
// We can also define a class in some other file as well

class hero {
    //Properties
    private: // Access modifier: Private --> Acessable only in the private modifier
    string name = "Rocky";
    void print(){
        cout<< name;
    }


    public: // Access modifier: Public --> Accesable anywhere in the program
    int health;
    char level;
};


int main(){
    hero h1;
    cout<<"size :"<<sizeof(h1)<<endl; 
    cout<<"level :"<<h1.level<<endl;

return 0;
}