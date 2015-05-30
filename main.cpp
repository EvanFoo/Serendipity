/* 
 * File:   main.cpp
 * Author: evan
 *
 * Created on May 26, 2015, 8:29 PM
 */
//such cool main file 
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <stdio.h>
#include "InventoryBook.h"
#include "Module.h"
#include "InventoryDatabase.h"

using namespace std;

int main(int argc, char** argv) {
	Module mod;
	Module mod2;
        
        InventoryDatabase other;
        other.addBook(534, "The best book ever", "Best author ever", "Best publisher ever", 34, 12.00, 12.00);


    return 0;
}

