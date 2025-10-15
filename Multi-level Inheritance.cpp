//this is example of multi-level inheritance 
#include <bits/stdc++.h>
using namespace std;

class Person{
    protected:
    string name;
    int age;
    
    public:
    void info(){
        cout << "Name is :"<<name <<", "<<"Age is: "<<age<<endl;
  }
};

class Employee : public Person{
    protected:
    int salary;
    
    public:
    void monthly_salary(){
        cout<< "Monthly Salary is: "<<salary<<endl;
    }
};

class Manager : public Employee{
    protected:
    string department;
    
    public:
    Manager(string name, int age, int salary, string department){
        this-> name = name ;
        this-> age = age;
        this-> salary = salary;
        this-> department = department;
    }
    
    void work(){
        cout << "Manager Works in "<< department <<" department."<<endl;
    }
};
int main() {
    Manager A1("Rohit", 27,1200000,"Finance");
    A1.work();
    A1.monthly_salary();
    A1.info();
    return 0;
}

/*output
Manager Works in Finance department.
Monthly Salary is: 1200000
Name is :Rohit, Age is: 27
*/
