/* 
 * File:   InventoryDatabase.cpp
 * Author: evan
 * 
 * Created on May 27, 2015, 9:11 PM
 */

#include "InventoryDatabase.h"
#include <ctime>

InventoryDatabase::InventoryDatabase() {
}

InventoryDatabase::InventoryDatabase(const InventoryDatabase& orig) {
}

void InventoryDatabase::addBook(InventoryBook books[], int inputISBN, std::string inputTitle, std::string inputAuthor, std::string inputPublisher, int inputQuantity, double inputWholesaleCost, double inputRetailPrice ){
    
    //important: I am passing in the current system time to the constructor rather than a user entered time
    InventoryBook temp(inputISBN, inputTitle, inputAuthor, inputPublisher, time(0), inputQuantity, inputWholesaleCost, inputRetailPrice );
    
    //increment the number of unique books, and write the new book in the last position
    ++numberOfUniqueBooks;
    
    for(int i = 0; i < numberOfUniqueBooks; i++){
        if(books[i].getISBN() < inputISBN && books[i + 1].getISBN() > inputISBN){
            
        }
    }
    
};

void InventoryDatabase::deleteBook(InventoryBook books[], int inputISBN){
    
};

void InventoryDatabase::changeBook(InventoryBook books[], int inputISBN){
    
};

InventoryDatabase::~InventoryDatabase() {
}

