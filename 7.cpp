//
// Created by Daniel on 10/31/2016.
//

#include "7.h"
#include <conio.h>

void display(CustomerData in);
int main(){
    string first,last,address,city;
    string state, zip, phone;
    int custNum;
    bool mailList;
    CustomerData Data;

    cout << "Enter First Name : ";
    cin >> first;

    cout << "Enter last name : ";
    cin >> last;

    cout << "Enter Address : ";
    cin >> address;
    cin.ignore();

    cout << "Enter City : ";
    cin >> city;

    cout << "Enter State : ";
    cin >> state;

    cout << "Enter Phone : ";
    cin >> phone;

    cout << "Enter Customer Number : ";
    cin >> custNum;

    cout << "Do you wish to subscribe mailing list ? (y/n)";
    bool key = getch();
    if(key=='y'){
        return true;
    }
    else if(key=='n')
        return false;

    Data.setFirstName(first);
    Data.setLastName(last);
    Data.setAddress(address);
    Data.setCity(city);
    Data.setState(state);
    Data.setPhone(phone);
    Data.setCustomerNum(custNum);
    Data.setMailingList(key);

    display(Data);

}

void display(CustomerData in){

    cout << "Name : " << in.getFirstName() << " " << in.getLastName() << endl;
    cout << "Address : " << in.getAddress() << endl;
    cout << "City : " << in.getCity() << endl;
    cout << "State : " << in.getState() << endl;
    cout << "Phone number : " << in.getPhone() << endl;
    cout << "Customer Number : " << in.getCustomerNumber() << endl;
    cout << "Mailing list (y/n): " << in.getMailingList() << endl;

}
