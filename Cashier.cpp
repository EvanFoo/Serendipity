/* 
 * File:   Cashier.cpp
 * Author: evan
 * 
 * Created on May 27, 2015, 9:11 PM
 */

#include "Cashier.h"
Cashier::Cashier(){
    cout << "Enter the ISBN numbers of the books being purchased \n (Enter a negative number to end)" << endl;
    
    int tempISBN = 10;
    
    while(tempISBN > 0){
        cout << ":";
        cin >> tempISBN;
        cout << endl;
        buyBook(tempISBN);
    }
    
    cout << "Subtotal: " << total << endl;
    
    salesTax = .08 * total;
    total += salesTax;
    
    cout << "Total with tax: " << total << endl;
    cout << "Press any key to return to main menu"<< endl;
    cin.get();
}

Cashier::Cashier(const Cashier& orig) {
}

void Cashier::buyBook(int inputISBN){

    for(int i = 0; i < numBooks; i++){
        if(inventory[i].getISBN() == inputISBN){
            if(inventory[i].getQuantity() > 0){
                inventory[i].setQuantity(inventory[i].getQuantity() - 1);
                total += inventory[i].getRetail();
            }else{
                cout << "Sorry, sold out" << endl;
            }
        }
    }
}

Cashier::~Cashier() {
}

