/*
 * Date.cpp
 *
 *  Created on: Apr 19, 2017
 *      Author: maria
 */

#include "Date.hpp"

Date::Date() {
	// TODO Auto-generated constructor stub

}

Date::~Date() {
	// TODO Auto-generated destructor stub
}

int Date::getYear(void){
	return Year;
}

int Date::getMonth(void){
	return Month;
}

int Date::getDay(void){
	return Day;
}


void Date::setYear(int anInt){
	Year = anInt;
}

void Date::setMonth(int anInt){
	Month = anInt;
}

void Date::setDay(int anInt){
	Day = anInt;
}
