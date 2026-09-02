# include <iostream>
using namespace std;

class Employee {
	private:
		int id;
		string name;
		float salery;
		
	public:
		
		Employee(){
			id= 12345;
			name = "Not Assigned";
			salery = 500000.0;
		}
		
	    void displayDetails() {
	    	cout << "Employee ID: " << id << endl;
	    	cout << "Employee Name: " << name << endl;
	    	cout << "Employee Salary: " << salery << endl;
		}
};

int main() {
	Employee emp1;
	cout << "Default Employee Details:" << endl;
	cout << "--------------------------" << endl;
	emp1.displayDetails();
	
	return 0;
}
