// Savings Account Header file

#pragma once
#ifndef SAVINGS_H
#define SAVINGS_H

// creating a class SavingsAccount
class SavingsAccount
{
	// private members
	private:
		static float Annual_Interest_Rate;
		double savingsBal;

	// public members 
	public:
		void setBal(float);
		static void modify_Interest_Rate(float);
		float calMonthInt();
};
#endif
