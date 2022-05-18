// SavingsAccount.cpp

#include<iostream>
#include"SavingsAccount.h"
using namespace std;

// Interest Rate is set to 0
float SavingsAccount::Annual_Interest_Rate = 0;

// modify Interest function
void SavingsAccount::modify_Interest_Rate(float InterestRate)
{
	Annual_Interest_Rate = InterestRate;
}

// Set Balance 
void SavingsAccount::setBal(float bal)
{
	savingsBal = bal;
}

// Calculate Monthly Interest rates 
float SavingsAccount::calMonthInt()
{
	float monthInterst = 0;
	monthInterst += savingsBal * Annual_Interest_Rate / 12;
	return savingsBal += monthInterst;
}
