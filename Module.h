/* 
 * File:   Module.h
 * Author: evan
 *
 * Created on May 26, 2015, 10:07 PM
 */

#ifndef MODULE_H
#define	MODULE_H

#include <string>
#include <ctime>

class Module {
public:
    Module();
    Module(const Module& orig);
    void displayTable(int rows, int columns, std::string elements[]);
    virtual ~Module();
<<<<<<< HEAD

    struct Date{
        int day;
        int month;
        int year;
    };
    
=======
private:
>>>>>>> FETCH_HEAD
    struct Book{
        int ISBN;
        std::string title;
        std::string author;
        std::string pulisher;
        time_t dateAdded;
        int quantity;
        int wholesale;
        int retail;     
    };
};

#endif	/* MODULE_H */

