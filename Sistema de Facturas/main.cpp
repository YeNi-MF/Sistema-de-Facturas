#include <iostream>
#include "Product.h"
#include "ProductsVector.h"
using namespace std; 
ProductsVector list;
void menu(int option);

int main()
{
	int option = 0;
	cout << "Bienvenido " << endl;
	cout << "La cantidad maxima de productos que puede comprar es de 20" << endl;
	list.createProductList();
	cout << "Esta es la lista de productos que tenemos disponible" << endl;
	cout << "[1] Donas: 900"<<endl;
	cout << "[2] Pastel mediano: 12000 " << endl;
	cout << "[3] Paquete de galletas: 900"<<endl;
	cout << "[4] Rebanada de Tres Leches : 12000 " << endl;
	cout << "[5] Cupcakes: "<<endl;
	cout << "[6] Taza de cafe: 12000 " << endl;
	cout << "[7] Proceder con la compra " << endl;

	do {
		cout << "Digite el numero del producto que desea comprar" << endl;
		cin >> option;
		menu(option);

	} while (option != 7);


	list.printProductList();

}

void menu(int option)
{
	int amount = 0;
	if (option == 1) {
		cout << "Digite la cantidad de Donas que desea comprar: ";
		cin >> amount;
		list.addDonuts(amount);
	}

	if (option == 2) {
		cout << "Digite la cantidad de Pasteles que desea comprar: ";
		cin >> amount;
		list.addMediumCake(amount);
	}

	if (option == 3) {
		cout << "Digite la cantidad de Paquete de Galletas que desea comprar: ";
		cin >> amount;
		list.addCokiePack(amount);
	}

	if (option == 4) {
		cout << "Digite la cantidad de Rebanada de Tres Leches que desea comprar: ";
		cin >> amount;
		list.addSliceTresLeches(amount);
	}

	if (option == 5) {
		cout << "Digite la cantidad de Cupcakes que desea comprar: ";
		cin >> amount;
		list.addCupcake(amount);
	}

	if (option == 6) {
		cout << "Digite la cantidad de tazas de Cafe que desea comprar: ";
		cin >> amount;
		list.addCupCoffe(amount);
	}

}