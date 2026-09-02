#include<iostream>
using namespace std;
struct student{
	string firstName;
	string lastName;
	int rollNumber;
	int marks;
	void displayStudentInfo(){
	cout<<" Full Name:"<< firstName<< " "<< lastName <<endl;
	cout<<"Marks"<< marks <<" "<< endl;}
};
int main()
{ student s;
student *ptr;
ptr=&s;
ptr->firstName="Abdul";
ptr->lastName="Hadi";
ptr->rollNumber=11;
ptr->marks=88;
ptr->displayStudentInfo();



}
