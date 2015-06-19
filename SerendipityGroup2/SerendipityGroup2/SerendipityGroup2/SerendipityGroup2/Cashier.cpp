/*
* File:   Cashier.cpp
* Author: evan
*
* Created on May 27, 2015, 9:11 PM
*/
#define _CRT_SECURE_NO_WARNINGS

#include "Cashier.h"
#include <vector>
#include <string>

Cashier::Cashier(){
	cout << "Enter the ISBN numbers of the books being purchased \n (Enter a negative number to end)" << endl;

	int tempISBN = 10;
	total = 0;
	numberOfPurchasedBooks = 0;

	while (tempISBN > 0){
		cout << ":";
		cin >> tempISBN;
		cin.ignore();
		if (tempISBN > 0){
			cout << endl;
			buyBook(tempISBN);
		}
	}

	cout << "Receipt " << endl;
	cout << setw(30) << "Title" << setw(20) << "Price" << setw(20) << "ISBN" << endl;

	for (int i = 0; i < numberOfPurchasedBooks; i++){
		cout << setw(30) << purchasedBookTitles.at(i) << setw(20) << purchasedBookPrices.at(i) << setw(20) << purchasedBookISBNs.at(i) << endl;
	}

	cout << "Subtotal: " << total << endl;
	salesTax = .08 * total;
	total += salesTax;

	cout << "Total with tax: " << total << endl;
	cout << "Press any key to return to main menu" << endl;
	cin.get();
}

Cashier::Cashier(const Cashier& orig) {
}

void Cashier::buyBook(int inputISBN){

	for (int i = 0; i < numBooks; i++){
		if (inventory[i].getISBN() == inputISBN){
			if (inventory[i].getQuantity() > 0){
				inventory[i].setQuantity(inventory[i].getQuantity() - 1);
				total += inventory[i].getRetail();

				//these vectors will be used later to display the purchased books
				purchasedBookISBNs.push_back(inventory[i].getISBN());
				purchasedBookPrices.push_back(inventory[i].getRetail());
				purchasedBookTitles.push_back(inventory[i].getTitle());

				numberOfPurchasedBooks++;


			}
			else{
				cout << "Sorry, sold out" << endl;
			}
		}
	}
}

Cashier::~Cashier() {
}

