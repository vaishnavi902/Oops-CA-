//constructor and destructor in any cases here i gave single inheritance example 
#include <bits/stdc++.h>
using namespace std;

class Companies{
    public:
    //constructor
    Companies(){
        cout << "Welcome to company in Constructor way"<<endl;
    }
    
    //destructor
    
    ~Companies(){
        cout << "Welcome to company in Destructor way "<<endl;
    }
};

class Employee: public Companies{
    public:
    //Constructor
    Employee(){
        cout << "Welcome Employee in a company in Constructor way"<<endl;
    }
    
    //Destructor
    ~Employee(){
        cout << "Welcome Employee in a company in Destructor way"<<endl;
    }
};

int main() {
    Employee A;
}

/*output
Welcome to company in Constructor way
Welcome Employee in a company in Constructor way
Welcome Employee in a company in Destructor way
Welcome to company in Destructor way
*/
