#pragma once
#include <iostream>
#include "Students.h"

Students::Students(std::string fN, std::string lN, int id, std::string course, int level)
{
	fName = fN;
	lName = lN;
	idNumber = id;
	course = course;
	level = level;
}