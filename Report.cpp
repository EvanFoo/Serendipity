
//#include <iostream>
//#include <iomanip>
//#include <string>
//
//#include "Report.h" 
//#include "Module.h"
//#include "InventoryBook.h"
//#include "Book.h"
//using namespace std;
//
//const int    STR_SIZE = 51;        // Max size of a string
//const int	 NUM_WIDTH = 6;	      // the numeric display length
//const int	 TITLE_WIDTH = 26;	  // the title display length
//const int	 ISBN_WIDTH = 14;	  // the ISBN display length
//const int	 PRECISION = 2;	      // the decimal precision
//
//
//
//
//void Report::repListing()
//{
//	char repDate[STR_SIZE];	// stores today's date
//
//	// prompt the user to enter today's date
//	cout << "\n\nEnter Today's Date(MM/DD/YY): ";
//	cin >> repDate;
//
//	cout << endl << endl;
//
//	// display company name
//	cout << "\n\n\t\tSerendipity Booksellers Inventory Listing\n\n";
//
//	// display date
//	cout << "Date:\t\t\t"
//		<< repDate;
//
//	// display inventory information by record
//	char end[] = { '\0' };
//
//	for (int i = 0; i ; i++)
//	{
//		if (strcmp(testWithInts[i].getISBN(), end) != 0) // do not print an empty record
//		{
//			cout << "\n_____________________________________________________";
//
//			cout << "\n\nTitle:\t\t\t"
//				<< inventory[i].getTitle();
//
//			cout << "\nISBN:\t\t\t"
//				<< inventory[i].getISBN();
//
//			cout << "\nAuthor:\t\t\t"
//				<< inventory[i].getAuthor();
//
//			cout << "\nPublisher:\t\t"
//				<< inventory[i].getPublisher();
//
//			cout << "\nDate Added:\t\t"
//				<< inventory[i].getDateAdded();
//
//			cout << fixed
//				<< showpoint
//				<< right
//				<< setprecision(PRECISION);
//
//			cout << "\nQuantity On Hand:\t"
//				<< inventory[i].getQuantity();
//
//			cout << "\nWholesale Cost:\t\t"
//				<< inventory[i].getWholesale();
//
//			cout << "\nRetail Price:\t\t"
//				<< inventory[i].getRetail();
//		}
//	}
//
//	cout << "\n\n_____________________________________________________";
//	cout << "\n\nEnd of Inventory Report.\n\n\n";
//
//	// Pause so that user can read report
//	cout << "Press Enter to continue...";
//	cin.ignore();
//	cin.get();
//}
//
////********************************************
//// repWholesale function                     *
////********************************************
//
//void Report::repWholesale()
//{
//	char repDate[STR_SIZE];	// stores today's date
//
//	// prompt the user to enter today's date
//	cout << "\n\nEnter Today's Date(MM/DD/YY): ";
//	cin >> repDate;
//
//	cout << endl << endl;
//
//	// display header
//	cout << "\n\n\t\t\tSerendipity Booksellers\n";
//	cout << "\t\t\tWholesale Value Listing\n\n";
//
//	// display date
//	cout << "\tDate: "
//		<< repDate
//		<< endl;
//
//	// display item headings
//	cout << "\n\tTitle\t\t\t  ISBN\t\tQuantity\tWholesale\n";
//	cout << "\t_________________________________________________________________\n\n";
//
//	double	itemSubTot = 0;
//	double	subTot = 0;
//	char	end[] = { '\0' };
//
//	for (int i = 0; i < numBooks; i++)
//	{
//		if (strcmp(inventory[i].getISBN(), end) != 0) // do not print empty records
//		{
//			cout << "\n\t"
//				<< left
//				<< setw(TITLE_WIDTH)
//				<< inventory[i].getTitle();
//
//			cout << left
//				<< setw(ISBN_WIDTH)
//				<< inventory[i].getISBN();
//
//			cout << right
//				<< setw(NUM_WIDTH)
//				<< inventory[i].getQuantity()
//				<< "\t";
//
//			cout << fixed
//				<< showpoint
//				<< right
//				<< setprecision(PRECISION);
//
//			cout << setw(NUM_WIDTH)
//				<< "\t$ "
//				<< inventory[i].getWholesale();
//
//			itemSubTot = inventory[i].getQuantity() * inventory[i].getWholesale();
//			subTot += itemSubTot;
//		}
//	}
//
//	cout << "\n\n\n\tTotal Wholesale Value:  $ "
//		<< subTot
//		<< endl;
//
//	cout << "\t_________________________________________________________________\n";
//
//	cout << "\n\tEnd of Wholesale Report.\n\n\n";
//
//	// Pause so that user can read report
//	cout << "Press Enter to continue...";
//	cin.ignore();
//	cin.get();
//}
//
////********************************************
//// repRetail function                        *
////********************************************
//
//void Report::repRetail()
//{
//	char repDate[STR_SIZE];	// stores today's date
//
//	// prompt the user to enter today's date
//	cout << "\n\nEnter Today's Date(MM/DD/YY): ";
//	cin >> repDate;
//
//	cout << endl << endl;
//
//	// display header
//	cout << "\n\n\t\t\tSerendipity Booksellers\n";
//	cout << "\t\t\t  Retail Value Listing\n\n";
//
//	// display date
//	cout << "\tDate: "
//		<< repDate
//		<< endl;
//
//	// display item headings
//	cout << "\n\tTitle\t\t\t  ISBN\t\tQuantity\tRetail\n";
//	cout << "\t_________________________________________________________________\n\n";
//
//	double	itemSubTot = 0;
//	double	subTot = 0;
//	char	end[] = { '\0' };
//
//	for (int i = 0; i < numBooks; i++)
//	{
//		if (strcmp([i].getISBN(), end) != 0) // do not print empty records
//		{
//			cout << "\n\t"
//				<< left
//				<< setw(TITLE_WIDTH)
//				<< inventory[i].getTitle();
//
//			cout << left
//				<< setw(ISBN_WIDTH)
//				<< inventory[i].getISBN();
//
//			cout << fixed
//				<< showpoint
//				<< right
//				<< setprecision(PRECISION);
//
//			cout << right
//				<< setw(NUM_WIDTH)
//				<< inventory[i].getQuantity()
//				<< "\t";
//
//			cout << setw(NUM_WIDTH)
//				<< "\t$ "
//				<< inventory[i].getRetail();
//
//			itemSubTot = inventory[i].getQuantity() * inventory[i].getRetail();
//			subTot += itemSubTot;
//		}
//	}
//
//	cout << "\n\n\n\tTotal Retail Value:  $" << subTot << endl;
//	cout << "\t_________________________________________________________________\n\n";
//	cout << "\n\tEnd of Retail Report.\n\n\n";
//
//	// Pause so that user can read report
//	cout << "Press Enter to continue...";
//	cin.ignore();
//	cin.get();
//}
//
////********************************************
//// repQty function                           *
////********************************************
//
//void Report::repQty()
//{
//	int	 id[numBooks];		// array to track original order of subscripts
//	int* idPtr[numBooks];		// pointer to tracking array
//	int* qtyPtr[numBooks];     // array of pointers to qtyOnHand array
//
//	int bookQty[numBooks];	    // array of book objects quantity accessor values
//
//	for (int i = 0; i < numBooks; i++)
//	{
//		id[i] = i;
//		idPtr[i] = &id[i];
//		bookQty[i] = testWithInts[i].getQuantity();
//		qtyPtr[i] = &bookQty[i];
//	}
//
//	// selection sort to place qtyOnHand in descending order
//	// ...and track original subscripts to correspond
//	// ...with Title and isbn in parallel arrays
//
//	int  startScan;
//	int	 maxIndex;
//	int* tempId;
//	int* maxValue;
//
//	for (startScan = 0; startScan < numBooks - 1; startScan++)
//	{
//		maxIndex = startScan;
//		maxValue = qtyPtr[startScan];
//		tempId = idPtr[startScan];
//		for (int index = startScan + 1; index < numBooks; index++)
//		{
//			if (*(qtyPtr[index]) > *maxValue)
//			{
//				maxValue = qtyPtr[index];
//				tempId = idPtr[index];
//				maxIndex = index;
//			}
//		}
//		qtyPtr[maxIndex] = qtyPtr[startScan];
//		idPtr[maxIndex] = idPtr[startScan];
//		qtyPtr[startScan] = maxValue;
//		idPtr[startScan] = tempId;
//	}
//
//	char repDate[STR_SIZE];	// stores today's date
//
//	// prompt the user to enter today's date
//	cout << "\n\nEnter Today's Date(MM/DD/YY): ";
//	cin >> repDate;
//
//	cout << endl << endl;
//
//	// display header
//	cout << "\n\n\t\t\tSerendipity Booksellers\n";
//	cout << "\t\t\t  Quantity Listing\n\n";
//
//	// display date
//	cout << "\tDate: "
//		<< repDate
//		<< endl;
//
//	// display item headings
//
//	cout << "\n\tTitle\t\t\t  ISBN\t\tQuantity\n";
//	cout << "\t_______________________________________________________\n";
//	char end[] = { '\0' };
//
//	for (int j = 0; j < numBooks; j++)
//	{
//		if (strcmp(testWithInts[*(idPtr[j])].getISBN(), end) != 0) // do not print empty records
//		{
//			cout << "\n\t"
//				<< left
//				<< setw(TITLE_WIDTH)
//				<< testWithInts[*(idPtr[j])].getTitle();
//
//			cout << left
//				<< setw(ISBN_WIDTH)
//				<< testWithInts[*(idPtr[j])].getISBN();
//
//			cout << right
//				<< setw(NUM_WIDTH)
//				<< *qtyPtr[j]
//				<< "\n";
//		}
//	}
//	cout << "\t_______________________________________________________\n";
//	cout << "\n\tEnd of Quantity Report.\n\n\n";
//
//	// Pause so that user can read report
//	cout << "Press Enter to continue...";
//	cin.ignore();
//	cin.get();
//}
//
////********************************************
//// repCost function                          *
////********************************************
//
//void Report::repCost()
//{
//	int		id[numBooks];			// array to track original order of subscripts
//	int*	idPtr[numBooks];		// pointer to tracking array
//	double* wholePtr[numBooks];	// array of pointers to wholesale array
//
//	double bookWholesale[numBooks];// array of book objects wholesale accessor values
//
//	for (int i = 0; i < numBooks; i++)
//	{
//		id[i] = i;
//		idPtr[i] = &id[i];
//		bookWholesale[i] = testWithInts[i].getWholesale();
//		wholePtr[i] = &bookWholesale[i];
//	}
//
//	// selection sort to place Wholesale Cost in descending order
//	// ...and track original subscripts to correspond
//	// ...with Title, isbn, and qtyOnHand in parallel arrays
//
//	int     startScan;
//	int     maxIndex;
//	int*    tempId;
//	double* maxValue;
//
//	for (startScan = 0; startScan < numBooks - 1; startScan++)
//	{
//		maxIndex = startScan;
//		maxValue = wholePtr[startScan];
//		tempId = idPtr[startScan];
//		for (int index = startScan + 1; index < numBooks; index++)
//		{
//			if (*(wholePtr[index]) > *maxValue)
//			{
//				maxValue = wholePtr[index];
//				tempId = idPtr[index];
//				maxIndex = index;
//			}
//		}
//
//		wholePtr[maxIndex] = wholePtr[startScan];
//		idPtr[maxIndex] = idPtr[startScan];
//		wholePtr[startScan] = maxValue;
//		idPtr[startScan] = tempId;
//	}
//
//	char repDate[STR_SIZE];	// stores today's date
//
//	// prompt the user to enter today's date
//	cout << "\n\nEnter Today's Date(MM/DD/YY): ";
//	cin >> repDate;
//
//	cout << endl << endl;
//
//	// display header
//	cout << "\n\n\t\t\tSerendipity Booksellers\n";
//	cout << "\t\t\t    Cost Listing\n\n";
//
//	// display date
//	cout << "\tDate: "
//		<< repDate
//		<< endl;
//
//	// display item headings
//	cout << "\n\tTitle\t\t\t  ISBN\t\tQuantity\tWholesale\n";
//	cout << "\t_________________________________________________________________\n\n";
//
//	char end[] = { '\0' };
//
//	for (int j = 0; j < numBooks; j++)
//	{
//		if (strcmp(testWithInts[*(idPtr[j])].getISBN(), end) != 0) // do not print empty records
//		{
//			cout << "\t"
//				<< left
//				<< setw(TITLE_WIDTH)
//				<< testWithInts[*(idPtr[j])].getTitle();
//
//			cout << left
//				<< setw(ISBN_WIDTH)
//				<< testWithInts[*(idPtr[j])].getISBN();
//
//			cout << fixed
//				<< showpoint
//				<< right
//				<< setprecision(PRECISION);
//
//			cout << right
//				<< setw(NUM_WIDTH)
//				<< testWithInts[*(idPtr[j])].getQuantity();
//
//			cout << setw(NUM_WIDTH)
//				<< "\t$ "
//				<< *wholePtr[j]
//				<< "\n";
//		}
//	}
//
//	cout << "\t_________________________________________________________________\n";
//	cout << "\n\tEnd of Cost Report.\n\n\n";
//
//	// Pause so that user can read report
//	cout << "Press Enter to continue...";
//	cin.ignore();
//	cin.get();
//}
//
////********************************************
//// repAge function                           *
////********************************************
//
//void Report::repAge()
//{
//	int id[numBooks];			// array to track original order of subscripts
//	int* idPtr[numBooks];		// pointer to tracking array
//	char* datePtr[numBooks];	// array of pointers to dateAdded array
//
//	for (int i = 0; i < numBooks; i++)
//	{
//		id[i] = i;
//		idPtr[i] = &id[i];
//		datePtr[i] = testWithInts[i].getDateAdded();
//	}
//
//	// selection sort to place DateAdded in descending order
//	// ...and track original subscripts to correspond
//	// ...with Title, isbn, and qtyOnHand in parallel arrays
//
//	int     startScan;
//	int     maxIndex;
//	int*    tempId;
//	char*   maxValue;
//
//	for (startScan = 0; startScan < numBooks - 1; startScan++)
//	{
//		maxIndex = startScan;
//		maxValue = datePtr[startScan];
//		tempId = idPtr[startScan];
//		for (int index = startScan + 1; index < numBooks; index++)
//		{
//			if (strcmp(datePtr[index], maxValue) > 0)
//			{
//				maxValue = datePtr[index];
//				tempId = idPtr[index];
//				maxIndex = index;
//			}
//		}
//
//		datePtr[maxIndex] = datePtr[startScan];
//		idPtr[maxIndex] = idPtr[startScan];
//		datePtr[startScan] = maxValue;
//		idPtr[startScan] = tempId;
//	}
//
//	char repDate[STR_SIZE];	// stores today's date
//
//	// prompt the user to enter today's date
//	cout << "\n\nEnter Today's Date(MM/DD/YY): ";
//	cin >> repDate;
//
//	cout << endl << endl;
//
//	// display header
//	cout << "\n\n\t\t\tSerendipity Booksellers\n";
//	cout << "\t\t\t    Age Listing\n\n";
//
//	// display date
//	cout << "\tDate: "
//		<< repDate
//		<< endl;
//
//	// display item headings
//	cout << "\n\tTitle\t\t\t  ISBN\t\tQuantity\tDate Added\n";
//	cout << "\t_________________________________________________________________\n\n";
//
//	char end[] = { '\0' };
//
//	for (int j = 0; j < numBooks; j++)
//	{
//		if (strcmp(testWithInts[*(idPtr[j])].getISBN(), end) != 0) // do not print empty records
//		{
//			cout << "\t"
//				<< left
//				<< setw(TITLE_WIDTH)
//				<< testWithInts[*(idPtr[j])].getTitle();
//
//			cout << left
//				<< setw(ISBN_WIDTH)
//				<< testWithInts[*(idPtr[j])].getISBN();
//
//			cout << fixed
//				<< showpoint
//				<< right
//				<< setprecision(PRECISION);
//
//			cout << right
//				<< setw(NUM_WIDTH)
//				<< testWithInts[*(idPtr[j])].getQuantity();
//
//			cout << setw(NUM_WIDTH)
//				<< "\t"
//				<< testWithInts[*(idPtr[j])].getDateAdded()
//				<< "\n";
//		}
//	}
//
//	cout << "\t_________________________________________________________________\n";
//	cout << "\n\tEnd of Age Report.\n\n\n";
//
//	// Pause so that user can read report
//	cout << "Press Enter to continue...";
//	cin.ignore();
//	cin.get();
//}

