#pragma once
template <typename T>
class Vector {
private:
	int vindex = 0; // Keeps track of last index used
	int vcapacity; // keeps track of total size of array
	T *varray;
public:
	//Default Constructor
	Vector<T>()
	{ 
		varray = new T[]; // empty array
	}
	//Constructor creates an array of size (size)
	Vector<T>(int size) 
	{ 
		varray = new T[size];
		vcapacity = size;
	}
	//Constructor creates an array of size (size) and sets every index to defaultvalue.
	Vector<T>(int size, T defaultValue) 
	{
		(varray) = new T[size];
		for (int i = 0; i < size; i++)
		{
			varray[i] = defaultValue;
		}
		vcapacity = size; // updates capacity
		vindex = size-1; // since array is full, vsize equals size as well. 
	}
	//Accessors
	unsigned const size() { return (vindex); }
	unsigned const capacity() { return vcapacity; }
	bool const empty()
	{
		if (vindex == 0) // if at 0, array is empty
			return true;
		else
			return false;
	}
	T const at(int index)
	{
		return varray[index];
	}
	///////////////////////////////////////////////////////////
	void push_back(T element)
	{
		if (vindex != vcapacity) // if not on last index
		{
			varray[vindex+1] = element;
			vindex++; // increase to next index
		}
		else
		{
			T *tempArray = new T[vcapacity * 2]; // creates a new array with double the size
			for (int i = 0; i < vcapacity; i++) //
			{
				tempArray[i] = varray[i]; // stores the old array index into new array index
			}
			vcapacity = vcapacity * 2; // updates to new capacity
			varray = tempArray; // These are pointers so now the address of varray is the same as tempArray
			varray[vindex+1] = element; // now assign the new element
			vindex++;// update the index position
		}
	}
	void pop_back()
	{
		if (vindex != 0) // checks if not at the beggining
		{
			varray[vindex] = NULL; // clears the index
			vindex--;
		}
		else {}

	}

	
	
	void clear()
	{
		for (int i = 0; i < vcapacity; i++) // checks the entire size of the array
			varray[i] = NULL; // clears ALL index
		vindex = 0; // resets the size value
	}
	void swap(Vector v2)
	{
		T *temp = new T[v2.capacity()]; //creates a temp array to match v2
		for (int i = 0; i < v2.capacity(); i++)
		{
			temp[i] = v2.at(i);
		}
		varray = temp; // pointers equal eachother
		vindex = v2.size(); // update the size to size of v2
		vcapacity = v2.capacity(); // update capacity
	}
};