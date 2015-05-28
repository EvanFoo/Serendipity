/* 
 * File:   Module.h
 * Author: evan
 *
 * Created on May 26, 2015, 10:07 PM
 */

#ifndef MODULE_H
#define	MODULE_H

#include <string>

class Module {
public:
    Module();
    Module(const Module& orig);
    void displayTable(int rows, int columns, std::string elements[]);
    virtual ~Module();
private:

};

#endif	/* MODULE_H */

