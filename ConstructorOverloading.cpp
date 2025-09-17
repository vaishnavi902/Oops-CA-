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
        name = "Mohit";
        Acc_no = 12;
        balance = 2500;
    }

    // Parameterized constructor (3 parameters)
    Customer(string n, int acc, int bal) {
        name = n;
        Acc_no = acc;
        balance = bal;
    }

    // Parameterized constructor (2 parameters)
    Customer(int acc, int bal) {
        Acc_no = acc;
        balance = bal;
    }

    void display(){
        cout << name <<" " <<Acc_no << " " << balance << endl;
    }
};

int main() {
    // Default constructor
    Customer C1;
    Customer C2("Rohit" ,14 ,1000);
    Customer C3(16 , 3000);
    C1.display();
    C2.display();
    C3.display();
    return 0;
}

