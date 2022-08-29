#include<iostream>
#include <string>

using namespace std;

class parent{

    public:

    int D_number,M_number;
    string name_mom,name_dad;

};

class student : public parent{


    private:

    int std,r_num;
    string name,marks;


    public : 

    void set(){

        cout << "Enter your Mom name : ";
        cin >> name_mom;

        cout << "Enter your Dad name : ";
        cin >> name_dad;

        cout << "Enter your Mom Phone Number : ";
        cin >> M_number;

        cout << "Enter your Dad Phone Number : ";
        cin >> D_number;

        // student info
        cout << "Enter Student Std : ";
        cin >> std;

        cout << "Enter Student Name : ";
        cin >> name;

        cout << "Enter Student Roll Number : ";
        cin >> r_num;

        cout << "Enter Student Marks : ";
        cin >> marks;

    }

    void get (){

        cout <<endl<<endl<< "studen detail : \n\n";

        cout << "Enter your Mom name :  " << name_mom<<endl;

        cout << "Enter your Dad name :  " << name_dad<<endl;

        cout << "Enter your Mom Phone Number :  " << M_number<<endl;

        cout << "Enter your Dad Phone Number :  " << D_number<<endl;

        // student info
        cout << "Enter Student Std :  " << std<<endl;

        cout << "Enter Student Name :  " << name<<endl;

        cout << "Enter Student Roll Number :  " << r_num<<endl;

        cout << "Enter Student Marks :  " << marks<<endl;


    }

};

int main(int argc, char const *argv[])
{   
    student info;

    info.set();

    
    info.get();
    
    return 0;
}
