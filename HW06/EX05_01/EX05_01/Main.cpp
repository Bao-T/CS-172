/*Bao Tran
CS 172
Whitworth University
EX06_01
*/
#include <iostream>
#include <string>
using namespace std;
template<typename T>
int linearSearch(const T list[], T key, int arraySize)
{
	for (int i = 0; i < arraySize; i++) // Searches through array
	{
		if (key == list[i]) // if search is found, return the value of that index that the key found a match in.
			return i;
	}
	return -1; 
}

int main()
{
	int list1[] = { 1,2,3,4,5 };
	int a = linearSearch(list1, 3, 5);

	double list2[] = { 1.1,2.2,3.3,4.4,5.5 };
	int b = linearSearch(list2, 3.3, 5);

	string list3[] = { "aaa","bbb","ccc","ddd","eee" };
	string temp = "ccc";
	int c = linearSearch(list3, temp , 5);
	cout << a << endl << b << endl << c << endl;
}