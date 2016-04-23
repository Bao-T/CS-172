/*Bao Tran
CS 172
Whitworth University
EX06_05*/

#include <iostream>
#include "Class.h"
#include <string>
using namespace std;
int main()
{
	std::string name = "George";
	Account a1(name, 1122, 1000);
	a1.deposit(30);
	a1.deposit(40);
	a1.deposit(50);
	a1.withdraw(5);
	a1.withdraw(4);
	a1.withdraw(2);
	a1.printSummary(); // displays the account history.

}