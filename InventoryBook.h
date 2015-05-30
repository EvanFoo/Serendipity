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
    InventoryBook(int,string,string,string,int,double,double,int);
	InventoryBook(){};
    InventoryBook(const InventoryBook& orig);
    int getQuantity(){return quantity;};
    void set(int input){ISBN = input;};
	friend ostream &operator<<( ostream &output, InventoryBook &b ){ 
		  output <<endl<< b.getISBN()<<endl<< b.getTitle()<<endl<<b.getAuthor()<<endl<<b.getPublisher()<<endl<<b.getDateAdded()<<endl<<b.getWholesale()<<endl<<b.getRetail()<<endl<<b.getQuantity();
         return output;            
      }

      friend istream &operator>>( istream  &input, InventoryBook &b ){
		  input >> b.ISBN>> b.title>>b.author>>b.publisher>>b.dateAdded>>b.wholesale>>b.retail>>b.quantity;
         return input;            
      }
    virtual ~InventoryBook();
private:
    int quantity;
};

#endif	/* INVENTORYBOOK_H */

