#pragma once
#include <string>
#include <fstream>
#include "Serendipity\Module.h"
using namespace std;

class Load : public Module
{
private:
	fstream in;
	fstream out;
	Book * books;
	int numBooks;
public:

	Load(string filename);
	Book getBook(int);
	void setBook(int, Book);
	void  appBook(Book);
	~Load(void);
};

