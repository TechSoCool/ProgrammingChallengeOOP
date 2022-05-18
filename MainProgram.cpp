//Sterling Gerard
// Date :April 19, 2022
// Objective: This program will create a Saving Account class using a static data num
// to contain the annual interest Rate for each savers. Each members of the class contain
// private data members. Write a driver program to test class Saving Account. Instantiate two 
// different savingAccount objects, saver1, and saver2, with the balances of $2000.00 and $3000.00. 
// calculate the monthly interest and print the new balance for each of the savers.

// preprocessor directives
#include<iostream>
#include"SavingsAccount.h" 
#include<string>
using namespace std;



// ++++++++++++++++++Main Program+++++++++++++++++++++++++++++
int main()
{
	// creating SavingAccount objects saver1 & saver2 
	SavingsAccount saver1, saver2; 

	// Instantiate two different saving account objects with balance $2000.00 and $3000.00
	saver1.setBal(2000.00);
	saver2.setBal(3000.00);

	// annual Interest Rate to 3% & monthly interest
	saver1.modify_Interest_Rate(0.03);
	cout << "Balance of saver1 and saver2 on 3% Interest Rate\n";
	cout << "__________________________\n";
	cout << "Balance of saver1 = " << saver1.calMonthInt() << endl;
	cout << "Balance of saver2 = " << saver2.calMonthInt() << endl;

	// annual Interest Rate to 4%
	saver1.modify_Interest_Rate(0.04);
	cout << "Balance of saver1 and saver2 on 4% Interest Rate\n";
	cout << "__________________________\n";
	cout << "Balance of saver1 = " << saver1.calMonthInt() << endl;
	cout << "Balance of saver2 = " << saver2.calMonthInt() << endl;

	system("pause");
	return 0;
}