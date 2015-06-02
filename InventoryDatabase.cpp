/* 
 * File:   InventoryDatabase.cpp
 * Author: evan
 * 
 * Created on May 27, 2015, 9:11 PM
 */

#include "InventoryDatabase.h"
#include <ctime>
#include <iostream>

InventoryDatabase::InventoryDatabase() {
	
		
}

InventoryDatabase::InventoryDatabase(const InventoryDatabase& orig) {
}

int InventoryDatabase::find(int ISBN){
	int first = 0, last = numBooks - 1, middle, position = -1;
	bool found = false; 
	int startScan, minIndex;
	InventoryBook minValue;
	//selection sort
		for (startScan = 0; startScan < (numBooks-1); startScan++){
			minIndex = startScan;
			minValue = books[startScan].getISBN();
			for(int index = startScan + 1; index < numBooks; index++){
				if (books[index].getISBN() < minValue){
					minValue = books[index].getISBN();
					minIndex = index;
				}
			}
			books[minIndex] = books[startScan];
			books[startScan] = minValue;
		}
	//binary search
	while (!found && first <= last)
	{
		middle = (first + last) / 2; 
		if (books[middle].getISBN() == ISBN) 
		{
			found = true;
			position = middle;
		}
		else if (books[middle].getISBN() > ISBN) 
			last = middle - 1;
		else
			first = middle + 1; 
	}
	return position;
	
} 


void InventoryDatabase::lookUp(){
	cout << "Enter the ISBN of the book you want to lookup";
	cout << books

}
void InventoryDatabase::addBook(){    
    numBooks++;
    int ISBN;
	string title, author, publisher;
	int date, quantity;
	double wholesale, retail;
	cout << "Enter ISBN:";
	cin >> ISBN;
	cout << "Enter title:";
	getline(cin, title);
	cout << "Enter author:";
	getline(cin, author);
	cout << "Enter Publisher:";
	getline(cin,title);
	cout << "Enter quantity:";
	cin >> quantity;
	cout << "Enter wholesale cost:";
	cin >> wholesale;
	cout << "Enter wholesale cost:";
	cin >> wholesale;
	cout << "Enter retail price";
	cin >> retail;
    books[numBooks-1].setISBN(ISBN);
    books[numBooks-1].setTitle(title);
    books[numBooks-1].setAuthor(author);
    books[numBooks-1].setPublisher(publisher);
    books[numBooks-1].setQuantity(quantity);
    books[numBooks-1].setWholesale(wholesale);
    books[numBooks-1].setRetail(retail);
    books[numBooks-1].setDateAdded(time(0)); 
    
};

void InventoryDatabase::deleteBook(){
	int ISBN = -1;
	int index = 0;
	cout << "Enter the ISBN of the book you would like to delete";
	cin >> ISBN;
	index = find(ISBN);
	numBooks--;
	books[index].setISBN(0);
    books[index].setTitle("");
    books[index].setAuthor("");
    books[index].setPublisher("");
    books[index].setQuantity(0);
    books[index].setWholesale(0);
    books[index].setRetail(0);
    books[index].setDateAdded(0); 
	
    
};

void InventoryDatabase::changeBook(int inputISBN){
    int ISBN = -1;
	int index = 0;
	int ISBN;
	string title, author, publisher;
	int date, quantity;
	double wholesale, retail;
	cout << "Enter the ISBN of the book you would like to change";
	cin >> ISBN;
	index = find(ISBN);

	cout << "Enter new ISBN:";
	cin >> ISBN;
	cout << "Enter new title:";
	getline(cin, title);
	cout << "Enter new author:";
	getline(cin, author);
	cout << "Enter new Publisher:";
	getline(cin,title);
	cout << "Enter new quantity:";
	cin >> quantity;
	cout << "Enter new wholesale cost:";
	cin >> wholesale;
	cout << "Enter new retail price";
	cin >> retail;
    books[index].setISBN(ISBN);
    books[index].setTitle(title);
    books[index].setAuthor(author);
    books[index].setPublisher(publisher);
    books[index].setQuantity(quantity);
    books[index].setWholesale(wholesale);
    books[index].setRetail(retail);
    books[index].setDateAdded(time(0)); 
};

InventoryDatabase::~InventoryDatabase() {
}

