

#include "Customer.hpp"
#include "Order.hpp"
#include <iomanip>
#include <locale>
#include <sstream>
#include <string>

using namespace std;

Order::Order()
{
    //TODO Auto-generated constructor stub
}

Order::~Order()
{
    // TODO Auto-generated destructor stub
}

string Order::getOrderNumber(void)
{
    return OrderNumber;
}

string Order::getorderDateJoined(void){
    string result1;
    string result2;
    string result3;
    string Result;
    
    ostringstream convert1;
    ostringstream convert2;
    ostringstream convert3;
    
    
    
    convert1  << OrderDateJoined.getYear();
    convert2 << OrderDateJoined.getMonth();
    convert3 << OrderDateJoined.getMonth();
    
    
    
    
    result1 = convert1.str();
    result2 = convert2.str();
    result3 = convert3.str();
    
    Result = result1 + "/" + result2 + "/" + result3 ;
    
    return Result;
    
    
    
}




void Order::setOrderNumber(string aString) {
    OrderNumber = aString;
}
void Order::setorderDateJoined(int year,int month,int day){
    OrderDateJoined.setYear(year);
    OrderDateJoined.setMonth(month);
    OrderDateJoined.setDay(day);
}
void Order::setcustomerID(string acustomerID)
{
    customerId = acustomerID;
}
string Order::getCustomerID(void)
{
    return customerId;
}








