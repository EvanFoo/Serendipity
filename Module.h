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
#include <fstream>
#include <iomanip>
#include "InventoryBook.h"

using namespace std;

class Module {
protected:
	int numBooks;
	InventoryBook* inventory;
	ifstream in;
	ofstream out;
public:
    Module();
    Module(const Module& orig);
    
    //call this to sort the inventory array by ISBN
    //use 1 -- ISBN
    //    2 -- Title
    //    3 -- Author
    //    4 -- Publisher
    //    5 -- Date Added
    //    6 -- Wholesale cost
    //    7 -- Retail Price
    //    8 -- Quantity
    void sortByElement(int element);
    
    void displayTable(int rows, int columns, std::string elements[]);
    
    
    template <class T1, class T2>
    void tChart(T1 array1[], T2 array2[], int arrayLen){
        
        cout << left;
        cout << "------------------------------------------" ;
        cout << "------------------------------------------" << endl;
        
        for(int i = 0; i < arrayLen; i++){
            cout << "|" << setw(43) << array1[i] << "|" << setw(37) << array2[i] << "|" << endl;
        }
        
        cout << "------------------------------------------" ;
        cout << "------------------------------------------" << endl;
    }
    
    template <class T>
    void searchByElement(int element, T value){
        sortByElement(element);
    }
    
    virtual ~Module();

};

#endif	/* MODULE_H */

