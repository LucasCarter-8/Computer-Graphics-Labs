
#pragma once
#include <iostream>
class Students
{
public:
	std::string fName;
	std::string lName;
	int idNumber;
	std::string course;
	int level;
	int marks[12];


	Students(std::string fName, std::string lName, int id, std::string course, int level);


};