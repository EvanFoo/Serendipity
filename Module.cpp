/* 
 * File:   Module.cpp
 * Author: evan
 * 
 * Created on May 26, 2015, 10:08 PM
 */

#include "Module.h"
#include <iostream>

Module::Module() {
}

Module::Module(const Module& orig) {
}

void Module::displayTable(int rows, int columns, std::string elements[]){
    for(int i = 0; i < rows; i++){
        
        std::cout << std::endl;
        
        for(int j = 0; j < columns; j++){
            std::cout "--------------------";
        }
        
        std::cout << std::endl;
        
        for(int j= 0; j < columns; j++){
            std::cout << std::setw(20) << elements[(i*columns) + j] << "|";
        }
    }
}

Module::~Module() {
}

