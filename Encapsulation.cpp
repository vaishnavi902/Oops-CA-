//Encapsulation :-Wrapping up of data and information in a single unit
#include<iostream>
using namespace std;

class Customer{
    string name;
    int account_no,balance,age;
    
    public:
    Customer (string a, int b, int c,int d){
        name = a;
        account_no = b;
        balance = c;
        age = d;
    }
    
    void deposit(int amount){
        if(balance>=0){
            balance+=amount;
        }
    }
    
    void withdraw(int amount){
        if(amount<= balance && amount>=0){
            balance-=amount;
        }
    }
    
    void upperage(){
        if (age>0 && age <=100){
        cout<<age<<endl;
        }
    }
    
    void display(){
        cout << name << " "<<account_no<< " "<< balance << " " << age <<endl;
    }
};

int main(){
    Customer A1("Rohit",101,1000,34);
    Customer A2("Mohit",102,2500,21);
    A1.age = 40;
    A1.display();
}

/*output
Rohit 101 1000 -5        //if age return in public it also accepts the negative also so to handle this problem put the declare variable in private only then...
ans ----> Variable must be in private mode*/
