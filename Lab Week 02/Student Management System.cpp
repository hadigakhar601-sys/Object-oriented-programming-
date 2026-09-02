# include <iostream>
using namespace std;
class Student{
	private:
		string name;
		int rollNo;
		float marks;
	public:	
	void getDta(){
		cout << "Enter Name: \n" ;
		getline (cin , name);
		cout << "Enter Roll No: \n" ;
		cin >> rollNo;
		cout << "Enter Marks: \n" ;
		cin >> marks ;
	}
	
	void displayData(){
		cout << "Name: " << name << endl;
		cout << "Roll No: " << rollNo << endl;
		cout << "Marks: " << marks << endl;
	}
};

int main(){
	Student s1;
	s1.getDta();
	s1.displayData();
	return 0;
}
