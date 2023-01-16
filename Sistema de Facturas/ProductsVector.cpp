#include "ProductsVector.h"


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

void ProductsVector::toString()
{
	
	for (int index = 0; index < productsPurchased; index++)
	{
		cout<< productList[index]->toString();
		cout << endl; 

	}
	 
}


void ProductsVector::addDonuts(int amount)
{
	string code = "ABC-1"; 
	float price = 900;
	for (int index = 0; index < amount; index++)
	{
		if (productsPurchased < vectorSize) {

			productList[productsPurchased] = new Product("Donut", price, code);
			productsPurchased++;

		}

	}
}

void ProductsVector::addMediumCake(int amount)
{
	string code = "ABC-2";
	float price = 12000; 
	for (int index = 0; index < amount; index++)
	{
		if (productsPurchased < vectorSize) {

			productList[productsPurchased] = new Product("MediumCake", price , code);
			productsPurchased++;

		}

	}
}

void ProductsVector::addCokiePack(int amount)
{
	string code = "ABC-3";
	float price = 2000;
	for (int index = 0; index < amount; index++)
	{
		if (productsPurchased < vectorSize) {

			productList[productsPurchased] = new Product("CokiePack", price, code);
			productsPurchased++;

		}

	}
}

void ProductsVector::addCupcake(int amount)
{
	string code = "ABC-4";
	float price = 800;
	for (int index = 0; index < amount; index++)
	{
		if (productsPurchased < vectorSize) {

			productList[productsPurchased] = new Product("Cupcake", price, code);
			productsPurchased++;

		}

	}
}

void ProductsVector::addSliceTresLeches(int amount)
{
	string code = "ABC-5";
	float price = 1600;
	for (int index = 0; index < amount; index++)
	{
		if (productsPurchased < vectorSize) {

			productList[productsPurchased] = new Product("TresLeches", price, code);
			productsPurchased++;

		}

	}
}

void ProductsVector::addCupCoffe(int amount)
{
	string code = "ABC-6";
	float price = 1400;
	for (int index = 0; index < amount; index++)
	{
		if (productsPurchased < vectorSize) {

			productList[productsPurchased] = new Product("CupCoffe", price, code);
			productsPurchased++;

		}

	}
}

