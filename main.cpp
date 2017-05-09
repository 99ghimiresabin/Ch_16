//
//  main.cpp
//  Ch_16
//
//  Created by Sabin Ghimire on 5/8/17.
//  Copyright © 2017 Sabin Ghimire. All rights reserved.
//

#include <iostream>
#include <map>
#include <list>
#include <fstream>
#include <iomanip>
#include "Order.hpp"
#include "Customer.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    
    std::map<string, Customer*>  theCustomers; /// Map creation
    pair<map<string,Customer*>::iterator, bool>result; // iterator navigator
    map<string, Customer*>::iterator myIterator;
    
    
    
     string customerFile = "CustomerFile.txt"; // File Open   Costumerfile
     ifstream isCustomerFile;
     isCustomerFile.open(customerFile.c_str());
     
     string line;
     string tempCustomerId;
     string tempCustomerName;
     string tempEmail;
     int tempYear;
     int tempMonth;
     int tempDay;
     string tempOrderNumber;
     cout << "Costumer file:" << endl;
    cout << "_________________________________________________________________________"<< endl;
     do {
   
     isCustomerFile >> tempCustomerId >> tempCustomerName >> tempEmail
     >> tempYear >> tempMonth >> tempDay;
         
         cout << tempCustomerId<<" " << tempCustomerName <<" " << tempEmail <<" " << tempYear <<" " << tempMonth<<" "  << tempDay << endl;
         
         
         /// insertion into map
           Customer *aCustomer = new Customer;
         aCustomer->setCustomerName(tempCustomerName);
         aCustomer->setCustomerNumber(tempCustomerId);
         aCustomer->setEmail(tempEmail);
         aCustomer->setDateJoined(tempYear, tempMonth, tempDay);
         
         result = theCustomers.insert(pair<string,Customer*>(tempCustomerId,aCustomer));

     }
     while (getline(isCustomerFile, line));
     isCustomerFile.close();
    
    cout << "_________________________________________________________________________"<< endl;
    
    
    cout << "Printing map" << endl;
    cout << "..." <<endl;
    if (result.second== false)
    {
        cout <<"key already exists" << endl;
    }
    for (myIterator = theCustomers.begin(); myIterator!=theCustomers.end(); ++myIterator)
    {
        cout << myIterator->second->getCustomerName()<< endl;
        cout << myIterator->second->getCustomerNumber()<< endl;
        cout << myIterator->second->getEmail() << endl;
        cout << myIterator->second->getDateJoined() << endl;
    }//for
  
    cout << endl;
    cout << endl;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    list<Order*> theOrders;                    /// List
    list<Order*>::iterator theOrderIter;

    
    string orderFile = "OrderFile.txt";       /// File open Orderfile
    ifstream isOrderFile;
    isOrderFile.open(orderFile.c_str());
    
    string tempOrderN;
    int tempY;
    int tempM;
    int tempD;
    string tempCustOrdID;
    string line1;
     cout << "Order file:" << endl;
    cout << "_________________________________________________________________________"<< endl;
    
    do{
        
        isOrderFile >>tempOrderN>>tempY>>tempM>>tempD>>tempCustOrdID;
        
        cout << tempOrderN << " " << tempY << " " << tempM << " " << tempD << " " <<tempCustOrdID << endl;
    
        
        
        
        
       Order *aorder = new Order();
        aorder->setOrderNumber(tempOrderN);
        theOrders.push_back(aorder);
        
        aorder = new Order;
        aorder->setorderDateJoined(tempY, tempM, tempD);
        theOrders.push_back(aorder);
        
        aorder = new Order;
        aorder->setcustomerID(tempCustOrdID);
        theOrders.push_back(aorder);
        
        
    }while (getline(isOrderFile,line1));
    cout << "_________________________________________________________________________"<< endl;
    
    long int listsize = theOrders.size();
    theOrderIter = theOrders.begin();
    
    cout << "Printing list" << endl;
    cout << "..."<<endl;
    for (int i=0; i<listsize; i++) {
        cout <<(*theOrderIter)->getOrderNumber()<<" "<<(*theOrderIter)->getorderDateJoined()<<" "<<(*theOrderIter)->getCustomerID() << endl;
        
        cout << "Searching the map:" << endl;
        myIterator = theCustomers.find((*theOrderIter)->getCustomerID());
        if (myIterator != theCustomers.end())
        {
            cout << "customer id exists" << endl;
            cout << "Costumer detail" << endl;
            cout << (*theOrderIter)->getOrderNumber();
            cout << theCustomers[(*theOrderIter)->getCustomerID()]->getCustomerName();
            cout << theCustomers[(*theOrderIter)->getCustomerID()]->getEmail();
            cout << endl;
            cout << endl;
            
            
    }
        else
            cout << "customer id does not exist" << endl;
        
        
        theOrderIter++;
        
    }
    
    theOrders.clear();
    
    for (myIterator = theCustomers.begin(); myIterator!=theCustomers.end(); ++myIterator)
    {
        
        delete myIterator->second;
    }//
    
    
   
    return 0;
}
