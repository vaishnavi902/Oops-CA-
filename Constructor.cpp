//In Oop's there are two types of constructor parameterized and default parameters(non-parameterized).
#include <bits/stdc++.h>
using namespace std;
class customer{
    public:
    string name;
    int Acc_no;
    int balance;
    
    customer(){             //defult constructor
        cout<< " This customer is already Registered!!"<<endl;
    }
    
    customer(string a,int b,int c){     //Parameterized constructor
        name = a;
        Acc_no = b;
        balance = c;
        cout <<name <<" "<<Acc_no << " " << balance<<endl;
    }
};

int main() {
    customer ai("pranit",101,23);
    return 0;
}
