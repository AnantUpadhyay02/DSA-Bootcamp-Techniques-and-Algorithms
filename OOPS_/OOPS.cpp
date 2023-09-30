#include<iostream>
using namespace std;

// #include "class_file.cpp" 

// We neeed to include the class file in order to use that class in our program
// We can also define a class in some other file as well

class hero {
    //Properties
    private: // Access modifier: Private --> Acessable only in the private modifier
    int health;
    char level;
    string game;


    public: // Access modifier: Public --> Accesable anywhere in the program
    string name;

    // Getter and setter: 
    int gethealth(){
        return health;
    }
    void sethealth(int h) {
        health = h;
    }

    char getlevel(){
        return level;
    }
    void setlevel(char l){
        level = l;
    }
    void setgame(string a){
        if(a == "Boxing"){  // Condition in setter, to give access to specific keyword/person, kinda like a password.
            game = a;
        }
    }
    string getgame(){
        return game;
    }
};


int main(){
    hero h1;
    h1.name = "Rocky";
    h1.setlevel('A');
    h1.sethealth(100);
    h1.setgame("MMA");
    // cout<<"size :"<<sizeof(h1)<<endl; 
    cout<<"Name :"<<h1.name<<endl;
    cout<<"level :"<<h1.getlevel()<<endl;
    cout<< "Health :"<<h1.gethealth()<<endl;
    cout<<"Game :"<<h1.getgame()<<endl;

return 0;
}