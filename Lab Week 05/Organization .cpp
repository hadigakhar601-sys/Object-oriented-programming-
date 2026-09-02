#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    float salary;
public:
    void set_employee_data() {
        cout << "Enter employee name: ";
        getline(cin, name);
        cout << "Enter salary: ";
        cin >> salary;
        cin.ignore();
    }
    void display_employee() {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Developer : public Employee {
private:
    string programming_language;
public:
    void set_developer_data() {
        set_employee_data();
        cout << "Enter programming language: ";
        getline(cin, programming_language);
    }
    void display_developer() {
        display_employee();
        cout << "Programming Language: " << programming_language << endl;
    }
};

class Designer : public Employee {
private:
    string design_tool;
public:
    void set_designer_data() {
        set_employee_data();
        cout << "Enter design tool: ";
        getline(cin, design_tool);
    }
    void display_designer() {
        display_employee();
        cout << "Design Tool: " << design_tool << endl;
    }
};

int main() {
    Developer dev;
    Designer des;
    
    cout << "--- Enter Developer Details ---" << endl;
    dev.set_developer_data();
    
    cout << "\n--- Enter Designer Details ---" << endl;
    des.set_designer_data();
    
    cout << "\n--- Developer Information ---" << endl;
    dev.display_developer();
    
    cout << "\n--- Designer Information ---" << endl;
    des.display_designer();
    
    return 0;
}