#include <stdio.h>

int main(){
    float basic_salary, d_allowance, hr_allowance;
    float gross_salary;
    float percent = 100;

    printf("Enter your Basic Salary ,dearness allowance and house rent Allowance :");
    scanf("%f %f %f",&basic_salary,&d_allowance,&hr_allowance);

    d_allowance = d_allowance / percent;
    hr_allowance = hr_allowance / percent;

    gross_salary = basic_salary+(d_allowance*basic_salary)+(hr_allowance*basic_salary);

    printf("%f",gross_salary);
    return 0;

}