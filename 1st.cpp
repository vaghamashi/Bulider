#include <iostream>
#include <cstring>

using namespace std;

class emp
{

public:
    int id, exp,salary;
    char name[100], role[100], address[100], email[100], contact[100];

    void set ();
    void get ();

};

    

    void emp::set(){

        

        

        cout <<endl<<endl<< "Enter record of Employee no : "<<endl<<endl;
        cout << "Enter Employee  ID : ";cin >> id;

        cout << "Enter Employee Name : ";cin >> name;

        cout << "Enter Employee Role : ";cin >> role;

        cout << "Enter Employee Salary : ";cin >> salary;

        cout << "Enter Employee Expience : ";cin >> exp;

        cout << "Enter Employee Address : ";cin>>
        address;

        cout << "Enter Employee Email : ";cin>>email;

        cout << "Enter Employee Contact : ";cin>>contact;
        

    }

    void emp::get(){


            
        cout <<endl<<endl<< "Record of Employee no : "<<endl<<endl;
        

        cout << "Employee  ID : " << id<<endl<<"Employee Name : " << name<<endl<<"Employee Role : " << role<<endl<<"Employee Salary : " << salary<<endl<<"Employee Expience : " << exp<<endl<<"Employee Address : " << address<<endl<<"Employee Email : " << email<<endl<<"Employee Contact : " << contact<<endl;


    }

int main(int argc, char const *argv[])
{
    emp info[4];
    int i;
    
    for (i=0;i<=4;i++){

        info[i].set();

    }

        for (i=0;i<=4;i++){

        info[i].get();

    }


    return 0;
}