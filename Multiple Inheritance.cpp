//Example of multiple inheritance 
#include <bits/stdc++.h>
using namespace std;

class Engineer{
    protected:
    string specialization;
    
    public:
    void info(){
        cout << "Engineer Having specialization in "<<specialization<<endl;
    }
};

class Youtuber {
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
    string name;

public:
    Coder(string name, string language,string specialization, int subscriber){
        this-> specialization= specialization ;
        this-> language = language;
        this-> subscriber = subscriber;
        this-> name = name ;
    }
    
    void work(){
        cout << "Coder name is: "<<name <<" and Coding language is :"<<language <<endl;
        info();
        showsubscriber();
    }
};
int main() {
    Coder A1("Rohit", "C++" , "CSE" , 45000);
    A1.work();
    return 0;
}

/*Output
Coder name is: Rohit and Coding language is :C++
Engineer Having specialization in CSE
Youtuber having 45000 subscriber
*/
