/*
 * Order.hpp
 *
 *  Created on: Apr 19, 2017
 *      Author: maria
 */

#ifndef ORDER_HPP_
#define ORDER_HPP_
#include <vector>
#include <string>
using namespace std;
#include <fstream>
#include <iomanip>

class Order{
private:
	string OrderNumber;
	Date OrderDate;
    string OrderCustomerID;
    


public:

	string getOrderNumber(void);
	Date getOrderDate(void);
    string getOrderCustomerID(void);

	void setOrderNumber(string);
	void setOrderDate(int,int,int);
    void setOrderCustomerID(string);


	Order();
	virtual ~Order();
};

#endif /* ORDER_HPP_ */
