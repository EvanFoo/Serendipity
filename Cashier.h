/* 
 * File:   Cashier.h
 * Author: Andy a.k.a. "HouseCatFury" a.k.a. "I Ain't Got No Milk" a.k.a. "A-God" a.k.a. "penguinholic" a.k.a. "Mr.StealYourGirl"
 *
 * Created on May 27, 2015, 9:11 PM
 */

#ifndef CASHIER_H
#define	CASHIER_H

#include "Module.h"
#include <iostream>
#include <iomanip>

using namespace std;

class Cashier: public Module {
public:
    
    Cashier();
    Cashier(const Cashier& orig);
    virtual ~Cashier();
private:
    double salesTax;
    double total;
    void buyBook(int);
    
    
};

#endif	/* CASHIER_H */

