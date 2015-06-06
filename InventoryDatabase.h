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

    void addBook( int inputISBN, std::string inputTitle, std::string inputAuthor, std::string inputPublisher, int inputQuantity, double inputWholesaleCost, double inputRetailPrice);
    //this will return a 1, if the function failed to find the book
	void deleteBook();
    void changeBook(int inputISBN);

    void lookUp();
    void addBook();
    int find(int);
    void changeBook();
	virtual ~InventoryDatabase(){};
private:
};

#endif	/* INVENTORYDATABASE_H */

