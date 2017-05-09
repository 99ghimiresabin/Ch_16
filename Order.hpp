

#ifndef ORDER_HPP_
#define ORDER_HPP_


#include <vector>
#include <string>
#include <fstream>
#include <iomanip>
#include "Date.hpp"
using namespace std;


class Order{
private:
    
    string OrderNumber;
    Date OrderDateJoined;
    string customerId;
    
public:
  
    
    string getOrderNumber(void);
    string getorderDateJoined(void);
    string getCustomerID(void);
    
    void setOrderNumber(string);
    void setorderDateJoined(int,int,int);
    void setcustomerID(string);
    
    
    Order();
    virtual ~Order();
};

#endif /* ORDER_HPP_ */
