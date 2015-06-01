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

Module::Module() {
	InventoryBook book;
        
        //choose the correct file path for your computer
	//in.open("C:\\Users\\Fox\\Documents\\GitHub\\Serendipity\\file.txt");
        in.open("file.txt");
        
	in >> numBooks;
	books = new InventoryBook[numBooks];
	for(int i = 0; i < numBooks; i++){
		in >> books[i]; 
		cout << books[i];
	}
        
        in.close();
}

Module::Module(const Module& orig) {
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
        
    out.open("file.txt");
    //out.open("C:\\Users\\Fox\\Documents\\GitHub\\Serendipity\\file.txt");
    cout << "destructor";
    out << numBooks;
    for(int i = 0; i < numBooks; i++){
	out <<  books[i]; 
    }
        
    out.close();
        
    delete [] books;

}

