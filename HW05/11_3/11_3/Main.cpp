#include <iostream>
/*
Bao Tran
CS 172
Problem 11.3
*/
int* doubleCapacity(const int* list, int size)
{
	int *newArray = new int[size * 2]; //assigns the address newArray to the address of a new array of integers of allocated size * 2 

	for (int i = 0; i < (size * 2); i++) //goes through all the indexes in newArray
	{
		if (i < size) // copies the indexes of the list to newArray up until the size of list
			newArray[i] = list[i];
		// no assignment for indexes greater than the end of indexes for list
	}
	return newArray;
}
int main()
{
	int testArray[3] = { 1,2,3 }; // creates array of size 3 and outputs the index
	for (int i = 0; i < 3; i++)
		std::cout << testArray[i] << " ";
	std:: cout << std::endl;
	int *newArray = doubleCapacity(testArray, 3); // assigns the address of newArray to the returned address value of doubleCapacity()
	for (int i = 0; i < 6; i++) // displays newArray
		std::cout << newArray[i] << " ";
	return 0;
}