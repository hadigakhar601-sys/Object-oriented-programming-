#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    void set_person_data() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore();
    }
    void display_person() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Employee : public Person {
protected:
    int employee_id;
public:
    void set_employee_data() {
        set_person_data();
        cout << "Enter employee ID: ";
        cin >> employee_id;
        cin.ignore();
    }
    void display_employee() {
        display_person();
        cout << "Employee ID: " << employee_id << endl;
    }
};

class Manager : public Employee {
private:
    string department;
public:
    void set_manager_data() {
        set_employee_data();
        cout << "Enter department: ";
        getline(cin, department);
    }
    void display_manager() {
        display_employee();
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager m1;
    m1.set_manager_data();
    cout << "\n--- Manager Information ---" << endl;
    m1.display_manager();
    return 0;
}