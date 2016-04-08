#include <iostream>
int* getArray(int size) {
	int *arrayPointer = new int[size];
	std::cout << "Enter array values: ";
	for (int i = 0; i < size; i++)
	{
		std::cin >> arrayPointer[i];
	}
	return arrayPointer;
}
double getAverage(int tempArray[],int size)
{
	double counter=0;
	for (int i = 0; i < size ; i++)
	{
		counter += tempArray[i];
	}
	return (counter / size);
}
int main()
{
	int arraySize;
	std::cout << "Enter size of array: ";
	std::cin >> arraySize;
	int *newArray = getArray(arraySize);
	std::cout << "Average: " << getAverage(newArray, arraySize) << std::endl;
	int aboveAverage = 0;
	for (int i = 0; i < arraySize; i++)
	{
		if (newArray[i] > getAverage(newArray,arraySize))
			aboveAverage++;
	}
	std::cout << "Inputs above average: " << aboveAverage << std::endl;
	delete[] newArray;
	return 0;
}