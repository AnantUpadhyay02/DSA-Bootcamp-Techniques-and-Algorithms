#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;


int main(){
    // Creating
    unordered_map<string, int> m;

    // inserting 
    pair<string,int> p = make_pair("anant",3);
    m.insert(p);

    pair<string, int> pair2("Upadhyay",2); // one way of initialising
    m.insert(pair2);// another way of initialising

    m["Mera"] = 1;//another way of initialising


return 0;
}