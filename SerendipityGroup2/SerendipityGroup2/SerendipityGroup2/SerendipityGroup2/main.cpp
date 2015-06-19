/*
* File:   main.cpp
* Author: evan
*
* Created on May 26, 2015, 8:29 PM
*/
#define _CRT_SECURE_NO_WARNINGS
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <stdio.h>
#include "InventoryBook.h"
#include "Module.h"
#include "InventoryDatabase.h"
#include "Cashier.h"
#include "Report.h"

using namespace std;

int main(int argc, char** argv) {
	int choice;

	cout << "Welcome to Serendipity books" << endl << endl << endl;

	do{

		//generic module that will be cast to a specific module type that the user chooses
		Module * m;

		cout << "1. Report" << endl;
		cout << "2. Cashier" << endl;
		cout << "3. Inventory Database" << endl;
		cout << "4. Quit" << endl;

		cin >> choice;

		if (choice == 1){
			m = new Report;
			delete m;
		}
		else if (choice == 2){
			m = new Cashier();
			delete m;
		}
		else if (choice == 3){
			m = new InventoryDatabase();
			delete m;
		}
		else{
			cout << "Bye" << endl;
		}

	} while (choice != 4);


	return 0;
}

