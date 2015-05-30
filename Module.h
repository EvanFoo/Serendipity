/* 
 * File:   Module.h
 * Author: evan
 *
 * Created on May 26, 2015, 10:07 PM
 */

#ifndef MODULE_H
#define	MODULE_H

#include <string>
#include <ctime>
#include<fstream>
#include "InventoryBook.h"

class Module {
private:
	int numBooks;
	InventoryBook* books;
	ifstream in;
	ofstream out;
public:
    Module();
    Module(const Module& orig);
    void displayTable(int rows, int columns, std::string elements[]);
    virtual ~Module();

    struct Date{
        int day;
        int month;
        int year;
    };
    
protected:
    
};

#endif	/* MODULE_H */

