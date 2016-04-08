#include <iostream>
#include "Class.h"
using namespace std;
Course::Course(const string& courseName, int capacity)
{
	numberOfStudents = 0;
	this->courseName = courseName;
	this->capacity = capacity;
	students = new string[capacity];
}
Course::~Course()
{
	delete[] students;
}
string Course::getCourseName() const
{
	return courseName;
}
void Course::addStudent(const string& name)
{
	students[numberOfStudents] = name;
	numberOfStudents++;
	//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ From Book example 11.16
	// 11.13
	if (numberOfStudents >= capacity) // once the number of students reaches the capacity or is greater
	{
		string *newArray = new string[capacity + 10]; // assigns address of newArray to the address of an array of strings with capacity +10
		for (int i = 0; i < capacity; i++) // copies the old array students to newArray up until the last index of students
		{
			newArray[i] = students[i];
		}
		capacity += 10; // changes capacity to the new capacity amount
		students = newArray; // resets student to newArray
	}
}
void Course::dropStudent(const string& name)
{
	// checks the entire index of the array
	for (int i = 0; i < capacity; i++)
	{
		if (name == students[i]) // checks for a match in the strings
		{
			for (int j = i; j < capacity - 1; j++) // goes through the indexes after the index with the matching string.
			{
				students[j] = students[j + 1]; // moves all the indexes over to accomodate the dropped student
			}
			students[capacity -1] = ""; // sets the very last index to nothing.
			numberOfStudents--; // take out one student from count
		}
		
	}
}
// vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv From Book example 11.16
string* Course::getStudents() const
{
	return students;
}
int Course::getNumberOfStudents() const
{
	return numberOfStudents;
}
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ From Book example 11.16

void Course::clear()
{
	for (int i = 0; i < capacity; i++)
		students[i] = "";
	// or students = new string[0];
	numberOfStudents = 0; // resets the student count
	
}
