#include<iostream>
using namespace std;
class constructor{
    string name;
    int account_no;
    int balance;
    public:
    constructor(string n ,int ac,int b){
        name = n;
        account_no = ac;
        balance = b;
    }
    
    //Copy constructor
    constructor(const constructor &a){
        name = a.name;
        account_no = a.account_no;
        balance = a.balance;
    };
    
    void display(){
        cout << name <<" " << account_no <<" " <<balance <<endl;
    }
};

int main() {
    constructor C1("Rohit",121,9000);
    C1.display();
    constructor C2(C1);
    C2.display();
}
