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
#include <vector>
#include <string>

using namespace std;

class Cashier: public Module {
public:
<<<<<<< HEAD
	Cashier()
	{
		Book tempBook;
		int tempISBN[50];
		int i = 0;
		int index = 0;
		double totalCost = 0.00;
		int numBooks;

		cout << "How many books are being purchased?\n";
		cin >> numBooks;

		cout << "\nEnter the ISBNs for the book being purchased.\n";
		{
			for (int j = 0; j < numBooks; j++)
				cin >> tempISBN[i];

			while (tempISBN[i] /= 0)
			{
				if (tempISBN[i] == inventory[index].getISBN())
				{
					//output that book's info: ISBN, Title, Price
					totalCost += inventory[index].getRetail();
					index++;
				}
				i++;
				cout << "\nSales tax 9.75%: $" << totalCost * 9.75;
				totalCost = 1.0975 * totalCost;
				cout << "\nTotal Cost: $" << totalCost;
			}
			system("pause");

		}

=======
>>>>>>> origin/master
	
	//uncomment this if we use a implementation in the cpp file
	Cashier();	

//	Cashier()
//	{
//		Book tempBook;
//		int tempISBN[50];
//		int i = 0;
//		int index = 0;
//		double totalCost = 0.00;
//		int Choice = 0;
//
//		while (Choice == 0)
//		{
//			cout << "Cashier Module\n\n";
//			cout << "1. Transaction\n";
//			cout << "2. Exit\n";
//			cin >> Choice;
//		}
//
//		cout << "Enter the ISBNs for the book being purchased.\n";
//		{
//			cin >> tempISBN[50];
//
//			while (tempISBN[i] /= 0)
//			{
//				if (tempISBN[i] == inventory[index].getISBN())
//				{
//					//output that book's info: ISBN, Title, Price
//					inventory[index].setQuantity = inventory[index].getQuantity - 1;
//
//					cout << inventory[index].getISBN << "\t" << inventory[index].getTitle << "\t\t" << inventory[index].getRetail << endl;
//
//					totalCost += inventory[index].getRetail();
//
//					index++;
//				}
//				i++;
//				cout << "\nSales tax 9.75%: $" << totalCost * 9.75;
//				totalCost = 1.0975 * totalCost;
//				cout << "\nTotal Cost: $" << totalCost;
//			}
//			//Ask user if they want to quit the cashier module
//
//		}
//
//	
//	};

    Cashier(const Cashier& orig);
    virtual ~Cashier();
private:
    double salesTax;
    double total;
    vector<string> purchasedBookTitles;
    vector<double> purchasedBookPrices;
    vector<int> purchasedBookISBNs;
    int numberOfPurchasedBooks;
    
    //will return a -1 if the book is not found
    int buyBook(int);
    
    
};

#endif	/* CASHIER_H */

