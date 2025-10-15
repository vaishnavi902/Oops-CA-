//Hierarchical Inheritance 
//********** Metod 1  (by using Chaining and Parameterized constructor in Human class) *****
#include <bits/stdc++.h>
using namespace std;

class Human {
protected:
    string name, city;

public:
    Human(string name, string city) {
        this->name = name;
        this->city = city;
    }

    void info() {
        cout << "Name: " << name << ", City: " << city << endl;
    }
};

class Engineer : public Human {
    string salary, specialization;
public:
    Engineer(string name, string city, string salary, string specialization)
        : Human(name, city) {
        this->salary = salary;
        this->specialization = specialization;
    }

    void info1() {
        cout << "Salary: " << salary << ", Specialization: " << specialization << endl;
    }
};

class Content_Creator : public Human {
    int followers;
public:
    Content_Creator(string name, string city, int followers)
        : Human(name, city) {
        this->followers = followers;
    }

    void info2() {
        cout << "Followers: " << followers << endl;
    }
};

class Sportsman : public Human {
    string sportname;
public:
    Sportsman(string name, string city, string sportname)
        : Human(name, city) {
        this->sportname = sportname;
    }

    void info3() {
        cout << "Sport: " << sportname << endl;
    }
};

int main() {
    Engineer e1("Rohit", "Pune", "80,000", "Software Engineering");
    Content_Creator c1("Vaishnavi", "Mumbai", 50000);
    Sportsman s1("Virat", "Delhi", "Cricket");

    cout << "\n--- Engineer ---\n";
    e1.info();
    e1.info1();

    cout << "\n--- Content Creator ---\n";
    c1.info();
    c1.info2();

    cout << "\n--- Sportsman ---\n";
    s1.info();
    s1.info3();

    return 0;
}

/*Output
--- Engineer ---
Name: Rohit, City: Pune
Salary: 80,000, Specialization: Software Engineering

--- Content Creator ---
Name: Vaishnavi, City: Mumbai
Followers: 50000

--- Sportsman ---
Name: Virat, City: Delhi
Sport: Cricket
*/

//*********Method 2 (Default or Predefined constructor call in Human class) ********
#include <bits/stdc++.h>
using namespace std;

class Human {
protected:
    string name, city;

public:
    // Base class constructor sets default values
    Human() {
        name = "Rohit";
        city = "Pune";
    }

    void info() {
        cout << "Name: " << name << " | City: " << city << endl;
    }
};

class Engineer : public Human {
protected:
    string salary, specialization;

public:
    Engineer(string salary, string specialization) {
        this->salary = salary;
        this->specialization = specialization;
    }

    void info1() {
        cout << "Salary: " << salary << " | Specialization: " << specialization << endl;
    }
};

class Content_Creator : public Human {
protected:
    int followers;

public:
    Content_Creator(int followers) {
        this->followers = followers;
    }

    void info2() {
        cout << "Followers: " << followers << endl;
    }
};

class Sportsman : public Human {
protected:
    string sportname;

public:
    Sportsman(string sportname) {
        this->sportname = sportname;
    }

    void info3() {
        cout << "Sport Name: " << sportname << endl;
    }
};

int main() {
    Engineer e1("80,000", "Computer Science");
    e1.info();   // inherited from Human
    e1.info1();  // Engineer-specific

    cout << endl;

    Content_Creator c1(50000);
    c1.info();
    c1.info2();

    cout << endl;

    Sportsman s1("Cricket");
    s1.info();
    s1.info3();

    return 0;
}


/*Output
Name: Rohit | City: Pune
Salary: 80,000 | Specialization: Computer Science

Name: Rohit | City: Pune
Followers: 50000

Name: Rohit | City: Pune
Sport Name: Cricket
*/

