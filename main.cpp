/* 
 * File:   main.cpp
 * Author: evan
 *
 * Created on May 26, 2015, 8:29 PM
 */

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <stdio.h>
#include "InventoryBook.h"
#include "Module.h"
#include "InventoryDatabase.h"
#include "Cashier.h"
#include "Report.h"

using namespace std;

int main(int argc, char** argv) {
    int choice;
    
    cout << "Welcome to Serendipity books" << endl << endl << endl;

    do{
        cout << "1. Report" << endl;
        cout << "2. Cashier" << endl;
        cout << "3. Inventory Database" << endl;
        cout << "4. Quit" << endl;
        
        cin >> choice;
        
        if(choice == 1){
                //Report * r = new Report();
                //delete r;
        }else if(choice == 2){
                Cashier * c = new Cashier();
                delete c;
        }else if (choice == 3){
                InventoryDatabase * i = new InventoryDatabase();
                delete i;
        }else{
            cout << "Bye" << endl;
        }
        
    }while(choice != 4);
    
    
    return 0;
}

