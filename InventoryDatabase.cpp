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
    
    //important: I am passing in the current system time to the constructor rather than a user entered time
    InventoryBook temp(inputISBN, inputTitle, inputAuthor, inputPublisher, time(0), inputQuantity, inputWholesaleCost, inputRetailPrice );
    
    ++numBooks;
    
    books[numBooks] = temp;
};

void InventoryDatabase::deleteBook(int inputISBN){
    
};

void InventoryDatabase::changeBook(int inputISBN){
    
};

InventoryDatabase::~InventoryDatabase() {
}

