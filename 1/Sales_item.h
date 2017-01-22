#ifndef SALESITEM_H
#define SALESITEM_H

#include <iostream>
#include <string>

class Sales_item{

public:
    Sales_item(const std::string &book):isbn(book),units_sold(0),revenue(0.0){}


private:
    std::string book;
    int units_sold;
    double revenue;


};

#endif

