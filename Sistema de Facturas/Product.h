#pragma once
#include <iostream>
using namespace std;

class Product
{
private:
	string code = ""; 
	float price = 0.0; 
	string name = ""; 

public:
	Product(string name, float price, string code); 
	Product();
	void setCode(string code);
	void setPrice(float price);
	void setName(string name);
	string getCode(); 
	float getPrice();
	string getName();

	





};

