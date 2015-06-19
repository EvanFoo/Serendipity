#define _CRT_SECURE_NO_WARNINGS
#include "Report.h"

Report::Report(){
	int choice = 0;
	while (choice != 7){
		cout << "1. Inventory List" << endl;
		cout << "2. Inventory Wholesale Value" << endl;
		cout << "3. Inventory Retail Value" << endl;
		cout << "4. List By Quantity" << endl;
		cout << "5. List By Cost" << endl;
		cout << "6. List By Age" << endl;
		cout << "7. End" << endl;
		cin >> choice;
		switch (choice){
		case 1:
			inventoryList();
			break;
		case 2:
			inventoryWholeSaleValue();
			break;
		case 3:
			inventoryRetailValue();
			break;
		case 4:
			listByQuantity();
			break;
		case 5:
			listByCost();
			break;
		case 6:
			listByAge();
			break;
			//Choice 7 exits the module
		case 7:
			break;
		default:
			cout << "Please choose an option 1 - 6" << endl;

		}

	}
}

void Report::inventoryList(){
	for (int i = 0; i < numBooks; i++){
		inventory[i].display();
	}
};

void Report::inventoryWholeSaleValue(){
	string * titles = new string[numBooks];
	double * wholesalePrices = new double[numBooks];

	//this will sort the books by wholesale value
	sortByElement(6);

	for (int i = 0; i < numBooks; i++){
		titles[i] = inventory[i].getTitle();
		wholesalePrices[i] = inventory[i].getWholesale();
	};

	tChart(titles, wholesalePrices, numBooks);

	delete[] titles;
	delete[] wholesalePrices;
}

void Report::inventoryRetailValue(){
	string * titles = new string[numBooks];
	double * retailPrices = new double[numBooks];

	//this will sort the books by retail value
	sortByElement(7);

	for (int i = 0; i < numBooks; i++){
		titles[i] = inventory[i].getTitle();
		retailPrices[i] = inventory[i].getRetail();
	};

	tChart(titles, retailPrices, numBooks);

	delete[] titles;
	delete[] retailPrices;
}

void Report::listByQuantity(){
	sortByElement(8);

	string * titles = new string[numBooks];
	int * quantities = new int[numBooks];

	for (int i = 0; i < numBooks; i++){
		titles[i] = inventory[i].getTitle();
		quantities[i] = inventory[i].getQuantity();
	};

	tChart(titles, quantities, numBooks);

	delete[] titles;
	delete[] quantities;
}

void Report::listByCost(){
	sortByElement(6);

	string * titles = new string[numBooks];
	double * wholesaleCosts = new double[numBooks];

	for (int i = 0; i < numBooks; i++){
		titles[i] = inventory[i].getTitle();
		wholesaleCosts[i] = inventory[i].getWholesale();
	};

	tChart(titles, wholesaleCosts, numBooks);

	delete[] titles;
	delete[] wholesaleCosts;
}

void Report::listByAge(){
	sortByElement(5);

	string * titles = new string[numBooks];
	string * datesAdded = new string[numBooks];

	for (int i = 0; i < numBooks; i++){
		titles[i] = inventory[i].getTitle();

		//need to convert the integer time to a human readable time and date
		time_t rawDateAdded = (time_t)inventory[i].getDateAdded();
		string dateAddedReadable = ctime(&rawDateAdded);

		datesAdded[i] = dateAddedReadable;
	};

	tChart(titles, datesAdded, numBooks);

	delete[] titles;
	delete[] datesAdded;
}

Report::~Report(){};