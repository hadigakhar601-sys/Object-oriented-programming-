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
    void display_person_info() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    int student_id;
public:
    void set_student_data() {
        set_person_data();
        cout << "Enter student ID: ";
        cin >> student_id;
        cin.ignore();
    }
    void display_student_info() {
        display_person_info();
        cout << "Student ID: " << student_id << endl;
    }
};

int main() {
    Student s1;
    s1.set_student_data();
    cout << "\n--- Student Information ---" << endl;
    s1.display_student_info();
    return 0;
}