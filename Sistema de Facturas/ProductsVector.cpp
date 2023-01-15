#include "ProductsVector.h"

void ProductsVector::setVectorSize(int vectorSize)
{
	this->vectorSize = vectorSize; 
}

int ProductsVector::getVectorSize()
{
	return this->vectorSize; ;
}

void ProductsVector::createProductList()
{
	productList = new Product * [vectorSize]; 
	productsPurchased = 0; 
}

int ProductsVector::getProductsPurchased()
{
	return this->productsPurchased; 
}
