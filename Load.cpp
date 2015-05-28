#include "Load.h"
#include <string>
#include <fstream>
using namespace std;
//Load loads books from a file into an array
//Load has a function to get a book from an array location
//Load also has a function to set a book from at an array
//Load also has a function to append books
Load::Load(string filename)
{
	in.open(filename, ios::binary||ios::in);
	out.open(filename, ios::binary||ios::out);
	in.read(reinterpret_cast<char *>(&numBooks), sizeof(numBooks));
	books = new Book[numBooks];
	for(int i = 0; i < numBooks; i++){
		in.read(reinterpret_cast<char *>(&books[i]), sizeof(books[i]));
	}
};

Module::Book Load::getBook(int location){
	if(location < numBooks)
		return books[location];
};

void Load::setBook(int location, Book book){

};

void Load::appBook(Book book){

};

Load::~Load(void)
{
	in.close();
	out.close();
	delete [] books;
};
