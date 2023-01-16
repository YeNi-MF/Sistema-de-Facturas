#include "Product.h"

Product::Product(string name, float price, string code)
{
	this->name = name; 
	this->price = price; 
	this->code = code; 
}

Product::Product()
{
}

void Product::setCode(string code)
{
	this->code = code;
}


void Product::setPrice(float price)
{
	this->price = price;
}

void Product::setName(string name)
{
	this->name = name;
}

string Product::getCode()
{
	return this->code;
}

float Product::getPrice()
{
	return this->price;
}

string Product::getName()
{
	return this->name;
}

string Product::toString()
{
	stringstream s; 
	s << getName() << endl;
	s << getPrice() << endl;
	s << getCode() << endl;
	return s.str();
}


