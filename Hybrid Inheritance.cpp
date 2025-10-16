//hybrid Inheritance in cpp
#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    void print(){
        cout << "I am Student"<<endl;
    }
};

class Male{
    public:
    void printmale(){
        cout << "I am Male"<<endl;
    }
};

class Female{
    public:
    void printfemale(){
        cout << "I am Female"<<endl;
    }
};

class Boy: public Male, public Student{
    public:
    void printboy(){
        cout << "I am Boy"<<endl;
    }
};

class Girl: public Female, public Student{
    public:
    void printgirl(){
        cout << "I am Girl"<<endl;
    }
};
int main() {
    Girl A1;
    A1.printgirl();
    A1.print();
    A1.printfemale();
}
