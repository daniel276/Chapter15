//
// Created by Daniel on 10/31/2016.
//

#ifndef CHAPTER15_2_H
#define CHAPTER15_2_H
#include <string>
using namespace std;

class Employee{
private:
    string employeeName;
    int employeeNumber;
    string hireDate;

public:
    Employee(){
        employeeName = "";
        employeeNumber=0;
        hireDate="";
    }
    void setEmpName(string name){
        employeeName=name;
    }
    void setEmployeeNumber(int empNumber){
        employeeNumber=empNumber;
    }
    void setHireDate(string hireDate){
        this->hireDate=hireDate;
    }
    string getName(){
        return employeeName;
    }
    int getEmpNumber(){
        return employeeNumber;
    }
    string getHireDate(){
        return hireDate;
    }

};

class ProductionWorker:public Employee{

private:
    int shift;
    double payRate;
public:
    ProductionWorker(){
        shift=1;
        payRate=0;
    }

    void setShift(int shift){
        this->shift=shift;
    }

    void setPayRate(double payRate){
        this->payRate=payRate;
    }

    int getShift(){
        return shift;
    }

    double getPayRate(){
        return payRate;
    }

};

class ShiftSupervisor:public Employee{
private:
    double annualSalary;
    double annualBonus;
public:
    void setAnnualSalary(double salary){
        annualSalary=salary;
    }
    void setAnnualBonus(double annualBonus){
        this->annualBonus=annualBonus;
    }

    double getAnnualSalary(){
        return annualSalary;
    }
    double getAnnualBonus(){
        return annualBonus;
    }


};




#endif //CHAPTER15_1_H
