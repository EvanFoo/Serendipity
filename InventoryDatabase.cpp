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
    
    inventory[numBooks-1].setISBN(inputISBN);
    inventory[numBooks-1].setTitle(inputTitle);
    inventory[numBooks-1].setAuthor(inputAuthor);
    inventory[numBooks-1].setPublisher(inputPublisher);
    inventory[numBooks-1].setQuantity(inputQuantity);
    inventory[numBooks-1].setWholesale(inputWholesaleCost);
    inventory[numBooks-1].setRetail(inputRetailPrice);
    inventory[numBooks-1].setDateAdded(time(0)); 
    
};

int InventoryDatabase::deleteBook(int inputISBN){
    
    
    
    //perform a linear search to find the location of the book with the input ISBN number
    int position = -1;
    for(int i = 0; i < numBooks; i ++){
        if(inventory[i].getISBN() == inputISBN){
            position = i;
        }
    }
    
    //make sure that the book was found before you remove the book
    if(position != -1){
        for(int i = position + 1; i < numBooks; i++){
            inventory[i - 1] = inventory[i];
        }
        
        //keep track of the correct number of books, this will also ensure that only the correct number of
        //books get written to the file
        numBooks--;
        
    }
    
    return position;
};

void InventoryDatabase::changeBook(int inputISBN){
    
};

InventoryDatabase::~InventoryDatabase() {
}

