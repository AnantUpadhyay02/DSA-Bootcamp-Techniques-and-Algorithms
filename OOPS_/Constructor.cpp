#include<iostream>
using namespace std;

class employee {

    private:

    string name;

    public:
    
    string role;
    int salary;
    string getname(string s){
        if(s == "Ramesh"){
            name = s;
            
        }
        if(s == "Suresh"){
            name = s;
        }
        return s;
    }
    void getrole(char a){
        cout<<a<<endl;
    }
    int getsalary(int salary){
        this->salary = salary;
        return salary;

    }
    //Constructor is invoked during the creation of an object

    employee(){ 
        cout<<"employee Details:"<<endl;
    }
    

    void print(){
        cout<<"Employee Salary: "<<salary<<endl;
        cout<<"Employee name: "<<name<<endl;
    }

    // Parameterised constructor 
    employee(string role){
        this ->role = role;
    }
    employee(int salary,string name){
        this -> salary = salary;
        // this -> role = role;
        this -> name = name;
    }
    
    
    // Copy Constructor
    employee(employee &temp){
        cout<<"Copy constructor called"<<endl;
        this ->name = temp.name;
        this -> salary = temp.salary; 
    }

    //Destructor 
    ~employee(){
        cout<<"Destructor called"<<endl;
    }

    //Static member
    static int officetime;
};

// initialising Static member
int employee::officetime = 1000;

int main(){
    cout<<employee::officetime;
    
    
    // employee e1(500000, "Ramesh");
    // e1.print();
    // // Copy constructor - one type
    // employee e2(e1);
    // e2.print();

    


    

    
    // Static Allocation
    
    // cout<<"Employee Name: "<<e2.getname("Suresh")<<endl;
    // cout<<"Salary: "<<e2.getsalary(150000)<<endl;

    // employee e1;
    // cout<<"Employee Name: "<<e1.getname("Ramesh")<<endl;
    // cout<<"Salary: "<<e1.getsalary(200000)<<endl;
    
    // //Dynamically 
    // employee *e3 = new employee();
    // e3-> print();
    
    // employee temp(500000, 'S');
    // temp.print();




    
return 0;
}