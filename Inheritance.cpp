//public : public --->public  , public : protected ---> protected  , public : private --->private
#include <bits/stdc++.h>
using namespace std;

class Companies{
    public:
    string name;
    int year;
};

class Employee: public Companies{
    public:
    string doj;
    int id;

    void display(){
         cout <<"Name of company:" <<name <<endl<<"year of established:"<<year<<endl <<"Date of joinning Employee:"<<doj<<endl<<"id of employee:"<<id<<endl;
    }
};

int main() {
	Employee A;
	A.name = "wipro";
	A.year = 2000;
	A.doj = "12-04-2007";
	A.id = 1;
	A.display();
  return 0;
};

/*output
Name of company:wipro
year of established:2000
Date of joinning Employee:12-04-2007
id of employee:1  */
