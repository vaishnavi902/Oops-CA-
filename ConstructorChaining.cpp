// in single inheritance did the constructor chaining here
#include <bits/stdc++.h>
using namespace std;

class Humans{
    protected:
    string name;
    int age, weight;
    
    public:
    Humans(string name , int age,int weight){
        this-> name= name;
        this-> age = age;
        this-> weight = weight;
    }
        
    void display(){
        cout << name << " "<<age << " "<<weight << " "<<endl;
    }
};

class student: public Humans{
public:
    int roll_no;
    int fees;

    student(string name, int age,int weight , int roll_no, int fees): Humans(name,age,weight){
    this-> roll_no = roll_no;
    this -> fees = fees;
    }
    
    void display(){
        cout <<"Name:"<<name<<", " <<"Age:"<<age<<", "<<"Weight:"<<weight<<", "<<"Roll_no:" <<roll_no<< ", "<<"Fees: " << fees<<" "<<endl;
    }
};

int main() {
    student A("vaish",20,40,2,118000);
    A.display();
}
/*output
Name:vaish, Age:20, Weight:40, Roll_no:2, Fees: 118000 
*/
