#pragma once
#include <string>
#include "Transaction.h"
#include <vector>
class Account {
private:
	int id;
	std::string name;
	double balance;
	double annualInterestRate = 1.5;
	std::vector <Transaction> history; // vector to store Transaction objects. In the code will push_back index when withdrawing or depositing
public:
	// Default constructor;
	Account() {
		id = 0;
		balance = 0;
		annualInterestRate = 0;
	}
	// Constructor sets id, name, and balance of the account holder
	Account(std::string tName, int tID, double tBalance) {
		id = tID;
		name = tName;
		balance = tBalance;
	}
	//Accessors
	int getid() { return id; }
	double getBalance() { return balance; }
	double getAIR() { return annualInterestRate; }
	double getMonthlyInterestRate() { return (annualInterestRate / 12); } // Annual to monthly conversion
	//Mutators
	void setid(int temp) { id = temp; }
	void setBalance(double temp) { balance = temp; }
	void setAIR(double temp) { annualInterestRate = temp; }

	void withdraw(double amount) 
	{
		std::string reason = "";  //reason is empty for easy of bug testing
		//std::cin >> reason;        Use this if you want user input and remove ="" from code above;
		balance -= amount; //subtract the amount withdrawn
		history.push_back(Transaction('W', amount, balance,reason )); // creates a Transaction object into the history vector.
	}
	void deposit(double amount) {
		std::string reason = ""; //reason is empty for easy of bug testing
		//std::cin >> reason;          Use this if you want user input and remove ="" from code above;
		balance += amount;
		history.push_back(Transaction('D', amount, balance, reason)); // creates a Transaction object into the history vector.
	}
	void printSummary() {
		for (int i = 0; i < history.size(); i++) // Displays the Transaction objects.
		{
			history[i].print();
		}
	}
};