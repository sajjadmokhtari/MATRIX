#include <iostream>
using namespace std;

struct EMP {
    string name;
    int salary;
    int id;
};

EMP Employee;

int main() {
    Employee.name = "Sajjad Mokhtari";
    Employee.id = 20;
    Employee.salary = 45;

    cout << "Name: " << Employee.name << " | ID: " << Employee.id << " | Salary: " << Employee.salary << endl;

    return 0;
}
