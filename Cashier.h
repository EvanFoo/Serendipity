/* 
 * File:   Cashier.h
 * Author: evan
 *
 * Created on May 27, 2015, 9:11 PM
 */

#ifndef CASHIER_H
#define	CASHIER_H

#include "Module.h"

class Cashier: public Module {
public:
    Cashier();
    Cashier(const Cashier& orig);
    virtual ~Cashier();
private:

};

#endif	/* CASHIER_H */

