//
// Created by Daniel on 10/31/2016.
//

#include "1.h"
#include <iostream>
void display(ProductionWorker in);
int main(){

    ProductionWorker info; // make object named info
    info.setEmpName("Daniel Juanda");
    info.setEmployeeNumber(3453423);
    info.setHireDate("20/06/1998");
    info.setShift(1);
    info.setPayRate(45000);

    display(info);

}

void display(ProductionWorker in){

    cout << "Name : " << in.getName()<< endl;
    cout << "Employee Number : " << in.getEmpNumber() << endl;
    cout << "Set Hire Date : " << in.getHireDate() << endl;
    cout << "Shift : " << in.getShift()<< endl;
    cout << "Pay Rate : " << in.getPayRate()<< endl;


}

