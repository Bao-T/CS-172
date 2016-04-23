/*Bao Tran
CS 172
Whitworth University
EX06_02
*/
#include <iostream>
#include <string>
using namespace std;
template <typename T>
bool isSorted(const T list[], int size)
{
	for (int i = 1; i < size; i++) // goes through list array
	{
		if (list[i] < list[i-1]) // checks if the current value is less than the previous value. If so, then order of smallest to largest is false
			return false;
	}
	return true;
}

int main()
{
	int list1[] = { 1,2,3 };
	bool l1 = isSorted(list1, 3);
	int list2[] = { 1,3,2 };
	bool l2 = isSorted(list2, 3);
	double list3[] = { 1.1,2.2,3.3 };
	bool l3 = isSorted(list3, 3);
	double list4[] = { 1.1,3.3,2.2 };
	bool l4 = isSorted(list4, 3);
	string list5[] = { "aa", "bb","cc" };
	bool l5 = isSorted(list5, 3);
	string list6[] = { "aa", "cc","bb" };
	bool l6 = isSorted(list6, 3);

	cout << boolalpha << l1 << endl << l2 << endl << l3 << endl << l4 << endl << l5 << endl << l6 << endl;
}