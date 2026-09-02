#include<iostream>
using namespace std;
struct student{
	string firstName;
	string lastName;
	int rollNumber;
	int marks;
	
void displayStudentInfo() {
	cout<<"first name:"<<firstName<<endl;
	cout<<"last name:"<<lastName<<endl;
	cout<<"roll number:"<<rollNumber<<endl;
	cout<<"marks"<<marks<<endl;
 }

};
int main(){
	student s1;
	s1.firstName= "Abdul ";
	s1.lastName="Hadi";
	s1.rollNumber =11;
	s1.marks=88;
	s1.displayStudentInfo();
}
