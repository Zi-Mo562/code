#include <iostream>
// write your code here......
#include <vector>
#include <algorithm>
#include <iomanip>
#include <string>

using namespace std;

class Employee {

    private:
        string name;
        double salary;
    // write your code here......
    public:
        Employee(string name, double salary) : name(name), salary(salary) {}

        string getName() const {
            return name;
        }

        double getSalary() const {
            return salary;
        }

        double getTax() const {
            double taxable = salary - 3500;
            if (taxable <= 0) {
                return 0.0;
            } else if (taxable <= 1500) {
                return taxable * 0.03;
            } else if (taxable <= 4500) {
                return taxable * 0.10 - 105;
            } else if (taxable <= 9000) {
                return taxable * 0.20 - 555;
            } else if (taxable <= 35000) {
                return taxable * 0.25 - 1005;
            } else if (taxable <= 55000) {
                return taxable * 0.30 - 2755;
            } else if (taxable <= 80000) {
                return taxable * 0.35 - 5505;
            } else {
                return taxable * 0.45 - 13505;
            }
        }
    

};

int main() {

    // write your code here......
    vector<Employee> employees;
    employees.push_back(Employee("张三", 6500));
    employees.push_back(Employee("李四", 8000));
    employees.push_back(Employee("王五", 100000));

    sort(employees.begin(), employees.end(), [](const Employee& a, const Employee& b) {
        return a.getSalary() > b.getSalary();
    });

    for (size_t i = 0; i < employees.size(); ++i) {
        cout << employees[i].getName() << "应缴纳的个人所得税是：" 
             << fixed << setprecision(1) << employees[i].getTax() << endl;
    }
    

    return 0;
}
