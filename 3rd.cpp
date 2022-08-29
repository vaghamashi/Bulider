#include <iostream>
#include <string>

using namespace std;

class hotal {

    private : 

    int id,staff_size,room_size,establish_year,rating;

    string name,type,address,website;

    public:

    void set (){

        cout << "Enter Hotal ID : ";
        cin >> id;

        cout << "Enter Hotal Name : ";
        cin >> name;

        cout << "Enter Hotal Type : ";
        cin >> type;

        cout << "Enter Hotal staff size : ";
        cin >> staff_size;

        cout << "ENter Hotal room Size : ";
        cin >> room_size;
        
        cout << "Enter Hotal Establish Year : ";
        cin >> establish_year;
         
        cout << "Enter Hotal Address : ";
        cin >> address;

        cout << "Enter Hotal Rating type : ";
        cin >> rating;

        cout << "Enter Hotal WebSite : ";
        cin >> website;
    
    }

    void get(){

        cout <<"Hotal Record " << endl<<endl;
       cout << "Enter Hotal ID : "<< id << endl ;

        cout << "Enter Hotal Name : "<< name << endl ;

        cout << "Enter Hotal Type : "<< type << endl ;

        cout << "Enter Hotal staff size : "<< staff_size << endl ;

        cout << "ENter Hotal room Size : "<< room_size << endl ;
        
        cout << "Enter Hotal Establish Year : "<< establish_year << endl ;
         
        cout << "Enter Hotal Address : "<< address << endl ;

        cout << "Enter Hotal Rating type : "<< rating << endl ;

        cout << "Enter Hotal WebSite : "<< website  << endl ;}



};


int main(int argc, char const *argv[])
{
    hotal info;

    info.set();
    info.get();
    return 0;
}
