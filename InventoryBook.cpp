/* 
 * File:   InventoryBook.cpp
 * Author: evan
 * 
 * Created on May 28, 2015, 6:34 PM
 */

#include "InventoryBook.h"

InventoryBook::InventoryBook(int ISBN, string title, string author,string publisher,int date,double wholesale, double retail,int inquantity) {
	setISBN(ISBN);
	setTitle(title);
	setAuthor(author);
	setPublisher(publisher);
	setDateAdded(date);
	setWholesale(wholesale);
	setRetail(retail);
	quantity = inquantity;
}

InventoryBook::InventoryBook() {
	setISBN(0);
	setDateAdded(0);
	setWholesale(0);
	setRetail(0);
	quantity = 0;
}

InventoryBook::InventoryBook(const InventoryBook& orig) {
}

InventoryBook::~InventoryBook() {
}

