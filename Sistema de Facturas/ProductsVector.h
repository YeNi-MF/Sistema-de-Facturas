#pragma once
#include <iostream>
#include "Product.h"
using namespace std;

class ProductsVector
{
private:
	Product** productList; 
	int vectorSize; 
	int productsPurchased; 

public:

	void setVectorSize(int vectorSize); 
	int getVectorSize(); 
	void createProductList(); 
	int getProductsPurchased(); 

};

