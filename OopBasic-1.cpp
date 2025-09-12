//class variables are public, so they can be accessed directly.This is simpler and faster for small programs but less secure since anyone can change values directly.Best for practice or small projects where strict encapsulation is not needed.
#include <bits/stdc++.h>
using namespace std;

class student{
public:
    string name;
    int age;
    char grade;
};

int main() {
student s;
s.name = "mohit";
s.age = 21;
s.grade = 'A';

cout << s.name<< " " <<s.age<< " "<< s.grade;
return 0;
}
