//Multipath Inheritance
#include <bits/stdc++.h>
using namespace std;

class Human{
    public:
    string name;
    
    void info1(){
        cout << "My Name is "<<name <<endl;
    }
};

class Engineer : public virtual Human {
    protected:
    string specialization;
    
    public:
    void info(){
        cout << "Engineer Having specialization in "<<specialization<<endl;
    }
};

class Youtuber : public virtual Human {
    protected:
    int subscriber;
    
    public:
    void showsubscriber(){
    cout<< "Youtuber having "<<subscriber<<" subscriber"<<endl;
    }
};

class Coder : public Engineer ,public Youtuber{
    protected:
    string language;

public:
    Coder(string name, string language,string specialization, int subscriber){
        this-> specialization= specialization ;
        this-> language = language;
        this-> subscriber = subscriber;
        this-> name = name ;
    }
    
    void work(){
        cout <<"Coding language is :"<<language <<endl;
        info1();
        info();
        showsubscriber();
    }
};
int main() {
    Coder A1("Rohit", "C++" , "CSE" , 45000);
    A1.work();
    return 0;
}
