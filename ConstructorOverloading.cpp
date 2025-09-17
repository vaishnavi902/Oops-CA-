//Constructor overloading is the concept of defining multiple constructors in the same class with different parameter lists. It allows creating objects in different ways (e.g., with no arguments, with some arguments, or with all arguments).
#include <iostream>
using namespace std;

class Customer {
public:
    string name;
    int Acc_no;
    int balance;

    // Default constructor
    Customer() {
        name = "Unknown";
        Acc_no = 0;
        balance = 0;
    }

    // Parameterized constructor (3 parameters)
    Customer(string n, int acc, int bal) {
        name = n;
        Acc_no = acc;
        balance = bal;
    }

    // Parameterized constructor (2 parameters)
    Customer(int acc, int bal) {
        name = "Unknown";  // default if not provided
        Acc_no = acc;
        balance = bal;
    }
};

int main() {
    // Default constructor
    Customer C1;
    cout << C1.name << " " << C1.Acc_no << " " << C1.balance << endl;

    // Parameterized constructor (3 params)
    Customer C2("Rohit", 12, 1000);
    cout << C2.name << " " << C2.Acc_no << " " << C2.balance << endl;

    // Parameterized constructor (2 params)
    Customer C3(15, 2000);
    cout << C3.name << " " << C3.Acc_no << " " << C3.balance << endl;

    return 0;
}

