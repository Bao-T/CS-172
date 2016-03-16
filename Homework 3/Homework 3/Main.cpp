#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include "RegularPolygon.h"


bool isPalindromeVector(const std::string &s)
{
	std::vector<char> charVector(s.begin(), s.end()); // Creates a vector that is assigned values from beginning of string to end of string
	for (int i = 0; i < charVector.size(); i++) // checks every index of the vector. if char value is between 97 and 122, it is a lower case letter
	{
		if (charVector[i] >= 97 && charVector[i] <= 122) // only for lower case so that spaces and other symbol characters can be compared to be a palidrome
			charVector[i] -= 32; // if lower case, subtract 32 from ascii value to make upper case
	}
	// at this point the original string is changed into a vector and then converted to all letters to upper case letters
	std::vector<char> vectorReverse = charVector; // creates a new vector that is the same as the charVector
	std::reverse(vectorReverse.begin(), vectorReverse.end()); // uses reverse function to reverse the indexes of the array
	if (vectorReverse != charVector) // compares if the revesed and original arrays are the same
		return false; // if not return false
	return true; // returns true if the same
}

bool isPalindromeStack(const std::string &s)
{
	std::stack<char> charStack, reverseCharStack; //creates two stacks
	std::string sConvert = s; // assigns a new string as s in order to be changed since s is a const
	for (int i = 0; i < sConvert.length(); i++) // loops through entire index of string
	{
		if (sConvert.at(i) >= 97 && sConvert.at(i) <= 122) // checks if index contains a lower case letter
			sConvert.at(i) = toupper(sConvert.at(i)); // changes to upper case with toupper
	}
	for (int i = 0; i < sConvert.length(); i++) //loop converts every index of the string to an index of the stack
	{
		charStack.push(sConvert.at(i));
	}
	for (int i = (sConvert.length() - 1); i >= 0; i--) //creates a loop that reads the string indexes backwards (from index n to index 0) and assigns it was the reverse stack
	{
		reverseCharStack.push(sConvert.at(i));
	}
	if (reverseCharStack != charStack) // compaes stacks
		return false; // if not the same return false
	return true; // if the same return true
}

int main()
{
	// Main code of Palidromes problem *******************************************************************
	std::cout << "Palidromes ********** \n";
	std::string text;
	std::cout << "Enter a word, phrase, or random characters:\n";
	std::getline(std::cin, text); 

	// Checks if the string is a palidrome (the two if statements changes from using vectors to using stacks
	if (isPalindromeVector(text) == true) std::cout << text << " is a palidrome.\n";
	//if (isPalindromeStack(text) == true) std::cout << text << " is a palidrome.\n";
	else std::cout << text << " is not a palidrome.\n";

	// Main code for Regular Polygons problem ************************************************************
	std::cout << "Polygons ********** \n";
	RegularPolygon polygonOne;
	std::cout << "Perimeter: " << polygonOne.getPerimeter() << " Area: " << polygonOne.getArea() << std::endl;
	RegularPolygon polygonTwo(6, 4);
	std::cout << "Perimeter: " << polygonTwo.getPerimeter() << " Area: " << polygonTwo.getArea() << std::endl;
	RegularPolygon polygonThree(10, 4, 5.6, 7.8);
	std::cout << "Perimeter: " << polygonThree.getPerimeter() << " Area: " << polygonThree.getArea() << std::endl;


}