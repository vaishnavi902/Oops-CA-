// 'this' is an implicit pointer inside non-static member functions that refers to the current object.It allows the function to access that object’s data members and methods.
#include <bits/stdc++.h>
using namespace std;

class customer {
    public: string name;
    int Acc_no;
    int balance;

    customer() { //defult constructor
        cout << " This customer is already Registered!!" << endl;
    }

    customer(string name, int Acc_no, int balance) { //Parameterized constructor
        this -> name = name; // left side is member, right side is parameter
        this -> Acc_no = Acc_no;
        this -> balance = balance;
        cout << name << " " << Acc_no << " " << balance << endl;
    }
};

int main() {
    customer ai("Pranit", 101, 23);
    return 0;
}
