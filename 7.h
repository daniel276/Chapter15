//
// Created by Daniel on 10/31/2016.
//

#ifndef CHAPTER15_7_H
#define CHAPTER15_7_H
#include <iostream>
#include <string>
using namespace std;
class PersonData{
private:
    string firstName;
    string lastName;
    string address;
    string city;
    string state;
    string zip;
    string phone;
public:
    void setFirstName(string first){
        firstName=first;
    }

    void setLastName(string last){
        lastName= last;
    }
    void setAddress(string address){
        this->address=address;
    }
    void setCity(string city){
        this->city=city;
    }
    void setState(string state){
        this->state=state;
    }
    void setZip(string zip){
        this->zip=zip;
    }
    void setPhone(string phone){
        this->phone=phone;
    }
    string getFirstName(){
        return firstName;
    }
    string getLastName(){
        return lastName;
    }
    string getAddress(){
        return address;
    }
    string getCity(){
        return city;
    }
    string getState(){
        return state;
    }
    string getZip(){
        return zip;
    }
    string getPhone(){
        return phone;
    }


};

class CustomerData:public PersonData{
private:
    int customerNumber;
    bool mailingList;
public:
    void setCustomerNum(int customerNumber){
        this->customerNumber=customerNumber;
    }
    void setMailingList(bool mailingList){

        this->mailingList=mailingList;
    }

    int getCustomerNumber(){
        return customerNumber;
    }
    bool getMailingList(){
        return mailingList;
    }



};


#endif //CHAPTER15_7_H
