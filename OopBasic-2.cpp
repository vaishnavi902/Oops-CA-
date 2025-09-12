//class variables are private, so they cannot be accessed directly.We use getter and setter functions to access or update them, ensuring encapsulation and data security.Best when working on large projects where data hiding is important
#include <bits/stdc++.h>
using namespace std;

class student{
private:
    string name;
    int age;
    char grade;
    
    //by using setter and getter fuctions
    public:
    void setname(string s){
        name = s;
    }
    void setage(int s){
        age = s;
    }
    void setgrade(char s){
        grade = s;
    }
    string getname(){
        return name;
    }
    int getage(){
        return age;
    }
    char getgrade(){
        return grade;
    }
    
};

int main() {
student s;
s.setname ("mohit");
s.setage(21);
s.setgrade('A');
s.getname();
s.getage();
s.getgrade();

cout << s.getname()<< " " <<s.getage() << " "<< s.getgrade();
return 0;
}
