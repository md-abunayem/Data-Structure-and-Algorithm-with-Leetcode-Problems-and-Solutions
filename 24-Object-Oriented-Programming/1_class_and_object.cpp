#include<iostream>
#include<string>
using namespace std;

class Teacher{
private: 
    int salary; // Private member variable

public:
    string name;
    string dept;
    string subject;

    // setter
    void setSalary(int s){
        salary = s;
    }

    //getter
    int getSalary(){
        return salary;
    }
};

int main(){
    Teacher t1;               
    t1.name = "John Doe";
    t1.dept = "Computer Science";
    t1.subject = "Data Structures";

    cout << "Teacher Name: " << t1.name << endl;
    cout << "Department: " << t1.dept << endl;

    // t1.setSalary(50000); // Setting salary using setter
    cout << "Salary: $" << t1.getSalary() << endl; // Getting salary

    return 0;
}