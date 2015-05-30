/* 
 * File:   InventoryDatabase.h
 * Author: evan
 *
 * Created on May 27, 2015, 9:11 PM
 */

#ifndef INVENTORYDATABASE_H
#define	INVENTORYDATABASE_H

#include "Module.h"
#include <string>

class InventoryDatabase: public Module {
public:
    InventoryDatabase();
    InventoryDatabase(const InventoryDatabase& orig);
    void addBook(InventoryBook books[], int inputISBN, std::string inputTitle, std::string inputAuthor, std::string inputPublisher, int inputQuantity, double inputWholesaleCost, double inputRetailPrice);
    void deleteBook(InventoryBook books[], int inputISBN);
    void changeBook(InventoryBook books[], int inputISBN);
    virtual ~InventoryDatabase();
private:
    int numberOfUniqueBooks;

};

#endif	/* INVENTORYDATABASE_H */

