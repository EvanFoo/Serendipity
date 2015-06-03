/* 
 * File:   InventoryBook.h
 * Author: evan
 *
 * Created on May 28, 2015, 6:34 PM
 */

#ifndef INVENTORYBOOK_H
#define	INVENTORYBOOK_H

#include "Book.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class InventoryBook: public Book {
public:
    InventoryBook(int,string,string,string,int,double,double,int);
    InventoryBook();
    InventoryBook(const InventoryBook& orig);
    int getQuantity(){return quantity;};
    void setQuantity(int inputQuantity){quantity = inputQuantity;};
    
    InventoryBook & operator=(const InventoryBook& other){
        this->setISBN(other.ISBN);
        this->setTitle(other.title);
        this->setAuthor(other.author);
        this->setPublisher(other.publisher);
        this->setDateAdded(other.dateAdded);
        this->setWholesale(other.wholesale);
        this->setRetail(other.retail);
        this->setQuantity(other.quantity);
        return *this;
    }
    
    friend ostream &operator<<( ostream &output, InventoryBook &b ){ 
        output <<endl<< b.getISBN()<<endl<< b.getTitle()<<endl<<b.getAuthor()<<endl<<b.getPublisher()<<endl<<b.getDateAdded()<<endl<<b.getWholesale()<<endl<<b.getRetail()<<endl<<b.getQuantity();
        return output;            
      }

    friend istream &operator>>( istream  &input, InventoryBook &b ){   
        //must ignore unused \n characters, that is why there are input.ignore() method calls
        input >> b.ISBN;
        input.ignore();
        getline(input, b.title, '\n');
        getline(input, b.author, '\n');
        getline(input, b.publisher, '\n');
        input >> b.dateAdded >> b.wholesale >> b.retail >> b.quantity;
        input.ignore(4);
        return input;            
    }
    
    virtual ~InventoryBook();
private:
    int quantity;
};

#endif	/* INVENTORYBOOK_H */

