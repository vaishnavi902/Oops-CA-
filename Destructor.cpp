#include <bits/stdc++.h>
using namespace std;
class constructor{
    string name;
    //int *data;
    //constructor(int dat){
    //data = new int;
    //*data = dat;
    public:
    
    constructor(){
    name ="4";
    cout << "Constructor is "<<name <<endl;
    }
    
    //constructor
    constructor(string name){
        this->name = name;
        cout<<"Constructor is "<<name<<endl;
    }
    
    //Destructor
    ~constructor(){
        cout<<"Destructor is "<<name<<endl;
    }
};

int main() {
    constructor A1("1"), A2("2"), A3("3");
    constructor *A4 = new constructor;
    delete A4;
}
