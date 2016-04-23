#pragma once
#include "Date.h"
#include <string>
class Transaction {
private:
	Date date;
	char type;
	double amount;
	double balance;
	std::string description;
public:
	Transaction(char ttype, double tamount, double tbalance, std::string tdescription)
	{
		type = ttype;
		amount = tamount;
		balance = tbalance;
		description = tdescription;
	}
	void print()
	{
		std::cout << date.getmonth() << "/" << date.getday() << "/" << date.getyear() <<std:: endl; // For the summary report. this code returns the Transaction history.
		std::cout << "Type: " << type << std::endl;
		std::cout << "Amount: " << amount << "     " << "Balance: " << balance << std::endl << std::endl;
	}
};