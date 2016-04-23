#pragma once
#include <ctime>
#include <iostream>
class Date {
private:
	int year = 1970;
	int month = 1;
	int day = 1;
public:
	Date() {
		// Code used from C++ reference
		time_t t = time(NULL);
		tm* timePtr = localtime(&t);
		year = timePtr->tm_year + 1900;
		month = timePtr->tm_mon+1; // For some reason my code needs a +1 to display the correct date.
		day = timePtr->tm_mday;
	}
	int getyear() { return year; }
	int getmonth() { return month; }
	int getday() { return day; }

};