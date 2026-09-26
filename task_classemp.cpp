#include <iostream>
#include <string>

class Employee {
private:
    int id;
    std::string name;
    double salary;

public:
    Employee(int employeeId, const std::string& employeeName, double employeeSalary)
        : id(employeeId), name(employeeName), salary(employeeSalary) {}

    friend std::ostream& operator<<(std::ostream& out, const Employee& employee);
};

std::ostream& operator<<(std::ostream& out, const Employee& employee) {
    out << "ID: " << employee.id
        << ", Name: " << employee.name
        << ", Salary: $" << employee.salary;
    return out;
}

int main() {
    Employee employee(101, "Jordan Lee", 55000.00);

    std::cout << employee << '\n';
    return 0;
}
