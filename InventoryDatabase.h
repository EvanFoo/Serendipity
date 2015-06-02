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
	void lookUp();
    void addBook();
	int find(int);
    void deleteBook();
    void changeBook();
    virtual ~InventoryDatabase();
private:
    
};

#endif	/* INVENTORYDATABASE_H */

