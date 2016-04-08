#include "Class.h"
#include "iostream"
int main()
{
	Course c1("test", 2);
	c1.addStudent("s1");
	c1.addStudent("s2");
	c1.addStudent("s3");
	
	c1.dropStudent("s2");
	string *students = c1.getStudents();
	for (int i = 0; i < c1.getNumberOfStudents(); i++)
		std::cout << students[i] << std::endl;
	return 0;
}