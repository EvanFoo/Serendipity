#define _CRT_SECURE_NO_WARNINGS
#include "Report.h"

Report::Report(){
        string choice = "0";
	while (choice != "7"){
		cout << "1. Inventory List" << endl;
		cout << "2. Inventory Wholesale Value" << endl;
		cout << "3. Inventory Retail Value" << endl;
		cout << "4. List By Quantity" << endl;
		cout << "5. List By Cost" << endl;
		cout << "6. List By Age" << endl;
		cout << "7. End" << endl;
		cin >> choice;
		
                if(choice == "1")
                    inventoryList();
                else if(choice == "2")
			inventoryWholeSaleValue();
		else if(choice == "3")
			inventoryRetailValue();
		else if(choice == "4")
			listByQuantity();
		else if(choice == "5")
			listByCost();
		else if(choice == "6")
			listByAge();
                //Choice 7 exits the module
		else if(choice == "7")
                    cout << "Exiting to main menu" << endl;
                else 
                    cout << "Please enter a choice 1 - 7" << endl;

	}
}

void Report::inventoryList(){
	for (int i = 0; i < numBooks; i++){
		inventory[i].display();
	}
};

void Report::inventoryWholeSaleValue(){
        double totalWholesaleValue;
	string * titles = new string[numBooks];
	double * wholesalePrices = new double[numBooks];

	//this will sort the books by wholesale value
	sortByElement(6);

	for (int i = 0; i < numBooks; i++){
		titles[i] = inventory[i].getTitle();
		wholesalePrices[i] = inventory[i].getWholesale();
                
                totalWholesaleValue += (inventory[i].getWholesale() * inventory[i].getQuantity());
	};

	tChart(titles, wholesalePrices, numBooks);
        
        cout << endl << " Total inventory wholesale value: $" << totalWholesaleValue << endl;

	delete[] titles;
	delete[] wholesalePrices;
}

void Report::inventoryRetailValue(){
        double totalRetailValue;
	string * titles = new string[numBooks];
	double * retailPrices = new double[numBooks];

	//this will sort the books by retail value
	sortByElement(7);

	for (int i = 0; i < numBooks; i++){
		titles[i] = inventory[i].getTitle();
		retailPrices[i] = inventory[i].getRetail();
                
                totalRetailValue += (inventory[i].getRetail() * inventory[i].getQuantity());
	};

	tChart(titles, retailPrices, numBooks);
        
        cout << endl << " Total inventory wholesale value: $" << totalRetailValue << endl;

	delete[] titles;
	delete[] retailPrices;
}

void Report::listByQuantity(){
    
    int totalQuantity;
    
    //this will sort the books by quantity
    sortByElement(8);

    string * titles = new string[numBooks];
    int * quantities = new int[numBooks];

    for (int i = 0; i < numBooks; i++){
	titles[i] = inventory[i].getTitle();
	quantities[i] = inventory[i].getQuantity();
        
        totalQuantity += inventory[i].getQuantity();
    };

    tChart(titles, quantities, numBooks);
    
    cout << "Total quantity of books: " << totalQuantity;

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