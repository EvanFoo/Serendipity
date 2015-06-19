/*
* File:   InventoryDatabase.cpp
* Author: evan
*
* Created on May 27, 2015, 9:11 PM
*/
#define _CRT_SECURE_NO_WARNINGS

#include "InventoryDatabase.h"
#include <ctime>
#include <iostream>

InventoryDatabase::InventoryDatabase() {
	string choice = "0";
	while (choice != "5"){
		choice = "0";
		cout << "1.Lookup\n2.Add\n3.Delete\n4.Change\n5.End";
		cin >> choice;
		
		if(choice == "1")
			lookUp();
		else if(choice == "2")
			addBook();
		else if(choice == "3")
			deleteBook();
		else if(choice == "4")
			changeBook();
		else
                    cout << "Choice not found" << endl;
                

	}

}

InventoryDatabase::InventoryDatabase(const InventoryDatabase& orig) {
}

void InventoryDatabase::deleteBook(){
	int inputISBN;

	cout << "Enter the isbn number of the book you would like to delete: ";
	cin >> inputISBN;

	//perform a linear search to find the location of the book with the input ISBN number
	int position = -1;
	for (int i = 0; i < numBooks; i++){
		if (inventory[i].getISBN() == inputISBN){
			position = i;
		}
	}

	//make sure that the book was found before you remove the book
	if (position != -1){
		for (int i = position + 1; i < numBooks; i++){
			inventory[i - 1] = inventory[i];
		}

		//keep track of the correct number of books, this will also ensure that only the correct number of
		//books get written to the file
		numBooks--;

		cout << "Book successfully deleted" << endl;

	}

}

int InventoryDatabase::find(int theISBN){
	//Linear search implementation
	int i = 0;
	bool found = false;
	int location = 0;
	while ((i < numBooks) || !found){
		if (inventory[i].getISBN() == theISBN){
			found = true;
			location = i;
		}
	}
	if (!found){
		cout << "Book not found";
	}
	return location;
}


void InventoryDatabase::lookUp(){
	int theISBN;
	int location;
	bool found = true;
	cout << "Enter the ISBN of the book you want to lookup";
	cin >> theISBN;
	for (int i = 0; i < numBooks; i++){
		if (theISBN == inventory[i].getISBN()){
			inventory[i].display();
			found = true;
		}
	}
	if (!found){
		cout << "Book not found";
	}
}

void InventoryDatabase::addBook(){
	int theISBN;
	string title, author, publisher;
	int date, quantity;
	double wholesale, retail;
	cout << "Enter ISBN:";
	cin >> theISBN;
	cin.ignore();
	cout << "Enter title:";
	getline(cin, title);
	cout << "Enter author:";
	getline(cin, author);
	cout << "Enter Publisher:";
	getline(cin, publisher);
	cout << "Enter quantity:";
	cin >> quantity;
	cout << "Enter wholesale cost:";
	cin >> wholesale;
	cout << "Enter retail price";
	cin >> retail;

	numBooks++;

	inventory[numBooks - 1].setISBN(theISBN);
	inventory[numBooks - 1].setTitle(title);
	inventory[numBooks - 1].setAuthor(author);
	inventory[numBooks - 1].setPublisher(publisher);
	inventory[numBooks - 1].setQuantity(quantity);
	inventory[numBooks - 1].setWholesale(wholesale);
	inventory[numBooks - 1].setRetail(retail);
	inventory[numBooks - 1].setDateAdded(time(0));
	cout << "Added" << endl;
	inventory[numBooks - 1].display();

};

void InventoryDatabase::changeBook(){
	int theISBN = -1;
	bool found = false;
	int index = 0;
	string title, author, publisher;
	int date, quantity;
	double wholesale, retail;
	cout << "Enter the ISBN of the book you would like to change";
	cin >> theISBN;
	cin.ignore();
	for (int i = 0; i < numBooks; i++){
		if (theISBN == inventory[i].getISBN()){
			index = i;
			found = true;
		}
	}
	if (!found){
		cout << "Book not found";
	}
	else{

		inventory[index].display();
		cout << "Enter new title:";
		getline(cin, title);
		cout << "Enter new author:";
		getline(cin, author);
		cout << "Enter new Publisher:";
		getline(cin, publisher);
		cout << "Enter new quantity:";
		cin >> quantity;
		cout << "Enter new wholesale cost:";
		cin >> wholesale;
		cout << "Enter new retail price";
		cin >> retail;
		inventory[index].setTitle(title);
		inventory[index].setAuthor(author);
		inventory[index].setPublisher(publisher);
		inventory[index].setQuantity(quantity);
		inventory[index].setWholesale(wholesale);
		inventory[index].setRetail(retail);
		found = true;
	}
	
};
