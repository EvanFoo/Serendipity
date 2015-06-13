/* 
 * File:   Module.cpp
 * Author: evan
 * 
 * Created on May 26, 2015, 10:08 PM
 */

#include "Module.h"
#include <iostream>
#include <fstream>
#include <iomanip>

//notes on how the Module class works:
//in the constructor, all of the books are loaded into the array named "books"
//in the destructor, all of the books are written from the "books" array back into the file
//to best use this functionality, use the "books" array to obtain information about books in the 
//database, and make changes to the database, the changes will be automatically written back to the file

Module::Module() {
	InventoryBook book;

	in.open("file.txt");

	in >> numBooks;
        
        //the size of this array in numBooks * 2, this means that there will always be enough space to add more 
        //books to the array as long as the number of unique books is not more than doubled
	inventory = new InventoryBook[numBooks * 2];

	for(int i = 0; i < numBooks; i++){
		in >> inventory[i]; 
	}
        
        in.close();
}

Module::Module(const Module& orig) {
}

void Module::sortByISBN(){
    int startScan, minIndex;
    InventoryBook minValue;
    
    for(startScan = 0; startScan < (numBooks -1); startScan++){
        minIndex = startScan;
        minValue = inventory[startScan];
        for(int index = startScan +1; index < numBooks; index++){
            if(inventory[index].getISBN() < minValue.getISBN()){
                minValue = inventory[index];
                minIndex = index;
            }
        }
        inventory[minIndex] = inventory[startScan];
        inventory[startScan] = minValue;
        
        cout << "sorting" << endl;
    }
}

void Module::displayTable(int rows, int columns, std::string elements[]){
    for(int i = 0; i < rows; i++){
        
        std::cout << std::endl;
        
        for(int j = 0; j < columns; j++){

            std::cout << "---------------------";

        }
        
        std::cout << std::endl;
        
        std::cout << "|";
        
        for(int j= 0; j < columns; j++){
            std::cout << std::setw(20) << std::left << elements[(i*columns) + j] << "|";
        }
    }
        std::cout << std::endl;
        
        for(int j = 0; j < columns; j++){
            std::cout << "---------------------";
        }
        
        std::cout << std::endl;
}

Module::~Module() {
        
    //again, enter the correct path for your environment
    //out.open("file.txt");
    out.open("file.txt");
    

    out << numBooks;
    for(int i = 0; i < numBooks; i++){
		out <<  inventory[i]; 
    }
        
    out.close();
        
    delete [] inventory;

}

