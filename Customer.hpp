
#ifndef CUSTOMER_HPP_
#define CUSTOMER_HPP_
#include <string>
#include "Date.hpp"
using namespace std;

class Customer {
	private:
	string CustomerNumber;
	string CustomerName;
	string Email;
	Date DateJoined;



public:
	string getCustomerNumber(void);
	string getCustomerName(void);
	string getEmail(void);
	string getDateJoined(void);

	void setDateJoined(int,int,int);
	void setCustomerNumber(string);
	void setCustomerName(string);
	void setEmail(string);
	Customer();
	virtual ~Customer();
};

#endif /* CUSTOMER_HPP_ */
