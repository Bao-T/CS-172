/*Bao Tran
CS 172
Whitworth University
EX06_03
*/
#include <iostream>
#include <string>
#include "Vector.h"
using namespace std;
int main()
{
	Vector <int> v1(10, 1);
	for (int i = 0; i <= v1.size(); i++)
		cout << v1.at(i);
	cout << endl;
	v1.pop_back();
	for (int i = 0; i <= v1.size(); i++)
		cout << v1.at(i);
	cout << endl;
	v1.push_back(2);
	for (int i = 0; i <= v1.size(); i++)
		cout << v1.at(i);
	cout << endl;
	v1.push_back(3);
	for (int i = 0; i <= v1.size(); i++)
		cout << v1.at(i);
	cout << endl;
	cout << v1.at(10) << endl;
	cout << boolalpha << v1.empty() << endl;
	v1.clear();
	cout << boolalpha << v1.empty() << endl;
	cout << endl;
	Vector <int> v2(10, 2);
	v1.swap(v2);
	for (int i = 0; i <= v1.size(); i++)
		cout << v1.at(i);
	cout << endl;

}