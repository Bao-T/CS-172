/*Bao Tran
CS 172
Whitworth University
EX06_04
*/

#include <iostream>
#include <string>
#include <vector>
#include <ctime>
using namespace std;
template <typename T>
void shuffle(vector<T> & v) // pass by reference to directly shuffle the vector
{
	int size = v.size();
	for (int i = 0; i < size; i++)
	{
		srand(time(NULL)); // ensures true randomness                            Joseph: You only want to call this once in the whole program. This is why the vector isn't shuffling quite right.
		int random = rand() % (size); // random integer between 0 and size
		T temp = v[i]; // swaps the index of the vector specified by the for loop with the index of the randomly chosen vector index of [random]
		v[i] = v[random];
		v[random] = temp;
	}

}
int main()
{
	vector<int> v(10);
	// user input for vector indexes
	for (int i = 0; i < 10; i++)
	{
		cin >> v[i];
	}
	shuffle(v); // shuffles the vector indexes
	cout << "Shuffled: \n";
	// displays the new indexes
	for (int i = 0; i < 10; i++)
	{
		cout << v[i] << endl;
	}
	return 0;
}