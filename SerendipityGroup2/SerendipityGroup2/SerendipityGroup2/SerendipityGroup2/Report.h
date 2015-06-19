/*
* File:   Report.h
* Author: evan
*
* Created on May 27, 2015, 9:11 PM
*/

#ifndef REPORT_H
#define	REPORT_H

#include "Module.h"

class Report : public Module {
public:
	Report();
	Report(const Report& orig);
	void inventoryList();
	void inventoryWholeSaleValue();
	void inventoryRetailValue();
	void listByQuantity();
	void listByCost();
	void listByAge();
	virtual ~Report();
private:

};

#endif	/* REPORT_H */

