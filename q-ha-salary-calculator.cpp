// Ramesh’s basic salary is input through the keyboard. His
// dearness allowance is 40% of basic salary, and house rent
// allowance is 20% of basic salary. Write a program to calculate
// his gross salary.

#include<iostream>
using namespace std;
 
int main(){

    float basic_salary, dallowance, house_rent, gross_salary;
    cout<<"Enter Basic Salary: ";
    cin>>basic_salary;

    dallowance = 0.4 * basic_salary;
    house_rent = 0.2 * basic_salary;

    gross_salary = basic_salary + dallowance + house_rent;

    cout<<"\n Basic Salary: "<<basic_salary;
    cout<<"\n Dearness Allowance: "<<dallowance;
    cout<<"\n House Rent: "<<house_rent;
    cout<<"\n\n Gross Salary: "<<gross_salary;

    return 0;
}