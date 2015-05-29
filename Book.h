/* 
 * File:   Book.h
 * Author: evan
 *
 * Created on May 28, 2015, 6:30 PM
 */

#ifndef BOOK_H
#define	BOOK_H

#include <string>

using namespace std;

class Book {
public:
    Book();
    Book(const Book& orig);
    int getISBN(){return ISBN;};
    void setISBN(int input){ISBN = input;};
    string getTitle(){return title;};
    void setTitle(string input){title = input;};
    string getAuthor(){return author;};
    void setAuthor(string input){author = input;};
    string getPublisher(){return publisher;};
    void setPublisher(string input){publisher = input;};
    time_t getDateAdded(){return dateAdded;};
    void setDateAdded(time_t input){dateAdded = input;};
    double getWholesale(){return wholesale;};
    void setWholesale(double input){wholesale = input;};
    double getRetail(){return retail;};
    void setRetail(double input){retail = input;};
    virtual ~Book();
protected:
    int ISBN;
    string title;
    string author;
    string publisher;
    time_t dateAdded;       //using time_t makes it easy to store a date as numerical value
    double wholesale;
    double retail;
};

#endif	/* BOOK_H */

