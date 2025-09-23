//Static Data Member

//total_customer(tot)
//A1: name1, account_no1, balance, tot
//A2: name2,account_no2, balance2, tot
#include <bits/stdc++.h>
using namespace std;

class Customer{
    string name;
    int account_no;
    int balance;
    static int total_customer;
    
    public:
    //Constructor
    Customer(string name, int account_no, int balance){
        this->name = name;
        this->account_no = account_no;
        this->balance = balance;
        total_customer++;
    }
    
    void display(){
        cout <<name << " "<<account_no <<" "<< balance<<" "<<total_customer<<endl;
    }
    
    void display1(){
    cout << total_customer<<endl;
    }
};

int Customer :: total_customer = 0;

int main(){
    Customer A1("krish",121,400);
    A1.display();
    Customer A2("ish",120,2400);
    A2.display();
    Customer A3("nisha",125,5000);
    Customer A4("rishab",130,7800);
    A3.display();
    A4.display();
    A4.display1();
    return 0;
}
