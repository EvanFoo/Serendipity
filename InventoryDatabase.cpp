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
	/*int first = 0, last = numBooks - 1, middle, position = -1;
	bool found = false; 
	int startScan, minIndex;
	InventoryBook minValue;
	//selection sort
		for (startScan = 0; startScan < (numBooks-1); startScan++){
			minIndex = startScan;
			minValue = inventory[startScan];
			for(int index = startScan + 1; index < numBooks; index++){
				if (inventory[index].getISBN() < minValue.getISBN()){
					minValue = inventory[index];
					minIndex = index;
				}
			}
			inventory[minIndex] = inventory[startScan];
			inventory[startScan] = minValue;
		}
	//binary search
	while (!found && first <= last)
	{
		middle = (first + last) / 2; 
		if (inventory[middle].getISBN() == theISBN) 
		{
			found = true;
			position = middle;
		}
		else if (inventory[middle].getISBN() > theISBN) 
			last = middle - 1;
		else
			first = middle + 1; 
	}
	if(!found){
		cout << "Book not found" << endl;
		return 0;
	}
	return position;*/
	//Linear search implementation
	int i = 0;
	bool found = false;
	int location = 0;
	while((i < numBooks) || !found){
		if(inventory[i].getISBN() == theISBN){
			found = true;
			location = i;
		}
	}
	if(!found){
		cout << "Book not found";
	}
	return location;
} 


void InventoryDatabase::lookUp(){
	int theISBN;
	int location;
	cout << "Enter the ISBN of the book you want to lookup";
	cin >> theISBN;
	if( location = find(theISBN)){
		cout << inventory[location];
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
	getline(cin,publisher);
	cout << "Enter quantity:";
	cin >> quantity;
	cout << "Enter wholesale cost:";
	cin >> wholesale;
	cout << "Enter retail price:";
	cin >> retail;
	cout << "Adding the book"<<endl;
    inventory[numBooks].setISBN(theISBN);
    inventory[numBooks].setTitle(title);
    inventory[numBooks].setAuthor(author);
    inventory[numBooks].setPublisher(publisher);
    inventory[numBooks].setQuantity(quantity);
    inventory[numBooks].setWholesale(wholesale);
    inventory[numBooks].setRetail(retail);
    inventory[numBooks].setDateAdded(time(0)); 
	numBooks++;
    
};

void InventoryDatabase::deleteBook(){
	int theISBN = -1;
	int index = 0;
	cout << "Enter the ISBN of the book you would like to delete";
	cin >> theISBN;
	index = find(theISBN);
	numBooks--;
	//set all values to nothing and boot to the end of the array
	inventory[index].setISBN(2147483647);
    inventory[index].setTitle("");
    inventory[index].setAuthor("");
    inventory[index].setPublisher("");
    inventory[index].setQuantity(0);
    inventory[index].setWholesale(0);
    inventory[index].setRetail(0);
    inventory[index].setDateAdded(0); 
	
    
};

void InventoryDatabase::changeBook(){
    int theISBN = -1;
	int index = 0;
	string title, author, publisher;
	int date, quantity;
	double wholesale, retail;
	cout << "Enter the ISBN of the book you would like to change";
	cin >> theISBN;
	cin.ignore();
	if(index = find(theISBN)){
		cout << "Enter new title:";
		getline(cin, title);
		cout << "Enter new author:";
		getline(cin, author);
		cout << "Enter new Publisher:";
		getline(cin,publisher);
		cout << "Enter new quantity:";
		cin >> quantity;
		cout << "Enter new wholesale cost:";
		cin >> wholesale;
		cout << "Enter new retail price";
		cin >> retail;
	    inventory[index].setISBN(theISBN);
		inventory[index].setTitle(title);
		inventory[index].setAuthor(author);
		inventory[index].setPublisher(publisher);
	    inventory[index].setQuantity(quantity);
		inventory[index].setWholesale(wholesale);
		inventory[index].setRetail(retail);
		inventory[index].setDateAdded(time(0)); 
	}
};

InventoryDatabase::~InventoryDatabase() {
}

