#include <stdio.h>


struct Employee {
    char employeeName[50];
    float hourlySalary;
    float hoursWorked;
};

int main() {
     struct Employee employee;
    printf("Enter the employee's name: ");
    scanf("%s", employee.employeeName);

    printf("Enter the hourly salary: ");
    scanf("%f", &employee.hourlySalary);

    printf("Enter the hours worked: ");
    scanf("%f", &employee.hoursWorked);
    
   float totalSalary = employee.hourlySalary * employee.hoursWorked;

    printf("Employee's name: %s\n", employee.employeeName);
    printf("Total salary: %.2f\n", totalSalary);

    return 0;
}

