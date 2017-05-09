
#include "Date.hpp"
#include "Customer.hpp"
#include <iomanip>
#include <locale>
#include <sstream>
#include <string>
#include <iostream>
using namespace std;


Customer::Customer() {
	// TODO Auto-generated constructor stub

}

Customer::~Customer() {
	// TODO Auto-generated destructor stub
}

string Customer::getCustomerNumber(void){
	return CustomerNumber;
}
string Customer::getCustomerName(void){
	return CustomerName;
}
string Customer::getEmail(void){
	return Email;
}
string Customer::getDateJoined(void){
    string result1;
    string result2;
    string result3;
    string Result;
    
    ostringstream convert1;
    ostringstream convert2;
    ostringstream convert3;
    
    
    
    convert1  << DateJoined.getYear();
    convert2 << DateJoined.getMonth();
    convert3 << DateJoined.getMonth();
    
    
    
    
    result1 = convert1.str();
    result2 = convert2.str();
    result3 = convert3.str();
    
    Result = result1 + "/" + result2 + "/" + result3 ;
    
    return Result;
    
    

}


void Customer::setCustomerNumber(string aString){
	CustomerNumber = aString;
}
void Customer::setCustomerName(string aString){
	CustomerName = aString;
}
void Customer::setEmail(string aString){
	Email = aString;
}
void Customer::setDateJoined(int year,int month,int day){
 DateJoined.setYear(year);
 DateJoined.setMonth(month);
 DateJoined.setDay(day);
}
