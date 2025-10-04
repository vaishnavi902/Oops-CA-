//Static Member Function
#include <bits/stdc++.h>
using namespace std;

class Customer{
    public:
    int account_no,balance;
    string name;
    static int total_cust,total_bal;
    
    Customer (string name , int account_no, int balance){
        this-> name = name;
        this-> account_no = account_no;
        this-> balance = balance;
        total_cust++;
        total_bal+= balance;
    }
    static void staticfunc(){
        cout << "Total Number of Customer: " << total_cust<<endl;
        cout<< "Total Balance :"<< total_bal <<endl;
    }
    void deposit(int amount){
        if(amount > 0){
            balance += amount;
            total_bal += amount;
        }
    }  
    void withdraw(int amount){
        if(amount <= balance && amount>0){
            balance -= amount;
            total_bal -= amount;
        }
    }
    void display(){
        cout << name << " "<<account_no <<" "<<balance <<" "<< total_cust<< " "<< total_bal << endl;
    }
    void display_total(){
        cout <<total_cust<<endl;
    }
    void display_balance(){
        cout <<total_bal<<endl;
    }
};

int Customer :: total_cust = 0;
int Customer :: total_bal = 0;

int main() {
	Customer A1("Mohit",101,1000);
	Customer A2("rohit",102,3500);
	Customer :: staticfunc();
	
	A1.display();
	A2.display();
	
	A1.deposit(500);
    A1.display();

    A2.withdraw(1000);
    A2.display();

	A1.display_total();
	A1.display_balance();
	
	A2.display_total();
	A2.display_balance();
}

/*output
Total Number of Customer: 2
Total Balance :4500
Mohit 101 1000 2 4500
rohit 102 3500 2 4500
Mohit 101 1500 2 5000
rohit 102 2500 2 4000
2
4000
2
4000*/

