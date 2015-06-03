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
	 int choice = 0;
	 while(choice != 5){
		 cout << "1.Lookup\n2.Add\n3.Delete\n4.Change\n5.End";
		 cin >> choice;
		 switch (choice){
		 case 1:
			 lookUp();
			 break;
		 case 2:
			 addBook();
			 break;
		 case 3:
			 deleteBook();
			 break;
		 case 4:
			 changeBook();
			 break;
		}

	 }
		
}

InventoryDatabase::InventoryDatabase(const InventoryDatabase& orig) {
}

int InventoryDatabase::find(int theISBN){
	int first = 0, last = numBooks - 1, middle, position = -1;
	bool found = false; 
	int startScan, minIndex;
	InventoryBook minValue;
	//selection sort
		for (startScan = 0; startScan < (numBooks-1); startScan++){
			minIndex = startScan;
			minValue = books[startScan];
			for(int index = startScan + 1; index < numBooks; index++){
				if (books[index].getISBN() < minValue.getISBN()){
					minValue = books[index];
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
		if (books[middle].getISBN() == theISBN) 
		{
			found = true;
			position = middle;
		}
		else if (books[middle].getISBN() > theISBN) 
			last = middle - 1;
		else
			first = middle + 1; 
	}
	return position;
	
} 


void InventoryDatabase::lookUp(){
	int theISBN;
	int location;
	cout << "Enter the ISBN of the book you want to lookup";
	cin >> theISBN;
	location = find(theISBN);
	cout << books[location];

}

void InventoryDatabase::addBook(){    
    numBooks++;
    int theISBN;
	string title, author, publisher;
	int date, quantity;
	double wholesale, retail;
	cout << "Enter ISBN:";
	cin >> theISBN;
	cin.ignore();
	cout << "Enter title:";
	cin.ignore();
	getline(cin, title);
	cout << "Enter author:";
	getline(cin, author);
	cout << "Enter Publisher:";
	getline(cin,title);
	cout << "Enter quantity:";
	cin >> quantity;
	cout << "Enter wholesale cost:";
	cin >> wholesale;
	cout << "Enter retail price";
	cin >> retail;
	cout << "Adding the book"<<endl;
    books[1].setISBN(theISBN);
    books[1].setTitle(title);
    books[1].setAuthor(author);
    books[1].setPublisher(publisher);
    books[1].setQuantity(quantity);
    books[1].setWholesale(wholesale);
    books[1].setRetail(retail);
    books[1].setDateAdded(time(0)); 
    
};

void InventoryDatabase::deleteBook(){
	int theISBN = -1;
	int index = 0;
	cout << "Enter the ISBN of the book you would like to delete";
	cin >> theISBN;
	index = find(theISBN);
	numBooks--;
	//set all values to nothing and boot to the end of the array
	books[index].setISBN(2147483647);
    books[index].setTitle("");
    books[index].setAuthor("");
    books[index].setPublisher("");
    books[index].setQuantity(0);
    books[index].setWholesale(0);
    books[index].setRetail(0);
    books[index].setDateAdded(0); 
	
    
};

void InventoryDatabase::changeBook(){
    int theISBN = -1;
	int index = 0;
	string title, author, publisher;
	int date, quantity;
	double wholesale, retail;
	cout << "Enter the ISBN of the book you would like to change";
	cin >> theISBN;
	index = find(theISBN);

	cin.ignore();
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
    books[index].setISBN(theISBN);
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

