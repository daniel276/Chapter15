//
// Created by Daniel on 10/31/2016.
//

#include "2.h"
#include <iostream>
void display(ProductionWorker in, ShiftSupervisor);
int main(){
    ShiftSupervisor data;
    ProductionWorker info;
    info.setEmpName("Daniel Juanda");
    info.setEmployeeNumber(3453423);
    info.setHireDate("20/06/1998");
    info.setShift(1);
    info.setPayRate(450);
    data.setAnnualSalary(5400);
    data.setAnnualBonus(800);
    display(info,data);

}

void display(ProductionWorker in, ShiftSupervisor on){

cout << "Name : " << in.getName()<< endl;
cout << "Employee Number : " << in.getEmpNumber() << endl;
cout << "Set Hire Date : " << in.getHireDate() << endl;
cout << "Shift : " << in.getShift()<< endl;
cout << "Pay Rate : " << in.getPayRate()<< endl;
cout << "Annual Pay Rate : " << on.getAnnualBonus() << endl;
cout << "Annual Production Bonus : " << on.getAnnualBonus() << endl;
}

