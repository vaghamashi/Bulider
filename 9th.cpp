#include <iostream>
using namespace std;

class Student {
public:
	
	Student(){
		cout << "Deeafult ";
		
	}
	Student(int a){
		cout << a;
		
	}
	int student_1(int a, int b){
		cout << "A : " << a <<"B : " << b; 
	}
};
main (){
	Student obj (10,50);
	
}