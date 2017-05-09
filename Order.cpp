/*
 * Order.cpp
 *
 *  Created on: Apr 19, 2017
 *      Author: maria
 */
#include "Date.hpp"
#include "Customer.hpp"
#include "Order.hpp"
#include <iostream>
using namespace std;

Order::Order() {
	// TODO Auto-generated constructor stub
}

Order::~Order() {
	// TODO Auto-generated destructor stub
}

string Order::getOrderNumber(void) {
	return OrderNumber;
}
Date Order::getOrderDate(void) {
	return OrderDate;
}

string Order::getOrderCustomerID(void) {
    return OrderCustomerID;
}

void Order::setOrderNumber(string aString) {
	OrderNumber = aString;
}
void Order::setOrderDate(int year, int month, int day) {
	OrderDate.setYear(year);
	OrderDate.setMonth(month);
	OrderDate.setDay(day);
}

void Order::setOrderCustomerID(string aOrderCustomerID) {
    OrderCustomerID = aOrderCustomerID;
}


