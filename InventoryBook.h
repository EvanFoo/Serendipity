/* 
 * File:   InventoryBook.h
 * Author: evan
 *
 * Created on May 28, 2015, 6:34 PM
 */

#ifndef INVENTORYBOOK_H
#define	INVENTORYBOOK_H

#include "Book.h"

class InventoryBook: public Book {
public:
    InventoryBook();
    InventoryBook(const InventoryBook& orig);
    int getQuantity(){return quantity;};
    void set(int input){ISBN = input;};
    virtual ~InventoryBook();
private:
    int quantity;
};

#endif	/* INVENTORYBOOK_H */

