#pragma once
#include <iostream>
#include "Product.h"
using namespace std;

class ProductsVector
{
private:
	Product** productList= nullptr; 
	int vectorSize=20; 
	int productsPurchased=0; 

public:

	 
	int getVectorSize(); 
	void createProductList(); 
	int getProductsPurchased();
	void printProductList(); 
	void addDonuts(int amount); 
	void addMediumCake(int amount); 
	void addCokiePack(int amount); 
	void addCupcake(int amount); 
	void addSliceTresLeches(int amount); 
	void addCupCoffe(int amount); 
};

