#include <iostream>
/*
Bao Tran
CS 172
Problem 11.5
*/
int findSmallest(int *list, int size)
{
	int smallest = *list; // dereferences list and makes smallest the value of the first index of list
	for (int *i = list; i < list + size; i++) //checks all the addresses associate with list until the end (list+size = addresses of *list)
	{
		if (*i < smallest) // if any index is less than smallest, change smallest to the dereference address i (actual value in list)
			smallest = *i;
	}
	return smallest;

}
int main()
{
	int testArray[8] = { 1,2,5,10,100,2,-22 };
	int smallestValue = findSmallest(testArray, 8);
	std::cout << smallestValue << std::endl;
	return 0;
}