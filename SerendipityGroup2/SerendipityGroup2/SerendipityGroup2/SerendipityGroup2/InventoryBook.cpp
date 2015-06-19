/*
* File:   InventoryBook.cpp
* Author: evan
*
* Created on May 28, 2015, 6:34 PM
*/
#define _CRT_SECURE_NO_WARNINGS
#include "InventoryBook.h"
#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

InventoryBook::InventoryBook(int ISBN, string title, string author, string publisher, int date, double wholesale, double retail, int inquantity) {
	setISBN(ISBN);
	setTitle(title);
	setAuthor(author);
	setPublisher(publisher);
	setDateAdded(date);
	setWholesale(wholesale);
	setRetail(retail);
	quantity = inquantity;
}

InventoryBook::InventoryBook() {
	setISBN(0);
	setDateAdded(0);
	setWholesale(0);
	setRetail(0);
	quantity = 0;
}

//this function will be useful for when all the data in the book needs to 
//be printed easily
void InventoryBook::display(){

	//convert ctime to human readable time
	time_t rawDateAdded = (time_t)dateAdded;
	string dateAddedReadable = ctime(&rawDateAdded);

	cout << endl;
	//want everything to be left justified
	cout << left;
	cout << "----------------------------------------" << endl;
	cout << "|" << setw(15) << title << "|" << endl;
	cout << "----------------------------------------" << endl;
	cout << "|" << setw(15) << author << "|" << endl;
	cout << "----------------------------------------" << endl;
	cout << "|" << setw(15) << publisher << "|" << endl;
	cout << "----------------------------------------" << endl;
	cout << "|" << setw(15) << ISBN << "|" << endl;
	cout << "----------------------------------------" << endl;
	cout << "|" << setw(15) << quantity << "|" << endl;
	cout << "----------------------------------------" << endl;
	cout << "|" << setprecision(2) << fixed << setw(15) << retail << "|" << endl;
	cout << "----------------------------------------" << endl;
	cout << "|" << setprecision(2) << fixed << setw(15) << wholesale << "|" << endl;
	cout << "----------------------------------------" << endl;
	cout << "|" << setw(15) << dateAddedReadable << "|" << endl;
	cout << "----------------------------------------" << endl;
	cout << endl;
}

InventoryBook::InventoryBook(const InventoryBook& orig) {
}

InventoryBook::~InventoryBook() {
}

