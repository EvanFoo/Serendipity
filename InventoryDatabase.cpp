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

void InventoryDatabase::addBook(int inputISBN, std::string inputTitle, std::string inputAuthor, std::string inputPublisher, int inputQuantity, double inputWholesaleCost, double inputRetailPrice ){    
    numBooks++;
    
    books[numBooks-1].setISBN(inputISBN);
    books[numBooks-1].setTitle(inputTitle);
    books[numBooks-1].setAuthor(inputAuthor);
    books[numBooks-1].setPublisher(inputPublisher);
    books[numBooks-1].setQuantity(inputQuantity);
    books[numBooks-1].setWholesale(inputWholesaleCost);
    books[numBooks-1].setRetail(inputRetailPrice);
    books[numBooks-1].setDateAdded(time(0)); 
    
};

void InventoryDatabase::deleteBook(int inputISBN){
    
};

void InventoryDatabase::changeBook(int inputISBN){
    
};

InventoryDatabase::~InventoryDatabase() {
}

