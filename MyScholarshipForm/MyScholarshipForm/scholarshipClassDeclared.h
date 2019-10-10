// SholarshipClassDeclared.h
// This file contains all member variable 
//   and member functions declarations
//   and prototypes only.
// Function definitions are found in the 
//     scholarshipClassDefined.cpp file
// The member variables match the
//   scholarships.csv data file
#pragma once
#include <string>
//using namespace std; // This had to removed to avoid conflicts
//   with the String type in MyForm.cpp
//  All objects now have the "std::" resolution identifier added

class Scholarship
{
private:
	std::string ID;
	int    Amount;
	std::string Type;
	std::string Length;
	std::string DateStarts;
	std::string Lname;
	std::string Fname;

public:
	Scholarship();					// default constructor
	Scholarship(std::string id,			// Initializing constructor
				int a, 
				std::string t, 
				std::string len, 
				std::string d, 
				std::string ln, 
				std::string fn);

	bool setID(std::string id);			// Sets for private member variables
	bool setAmount(int a);
	bool setType(std::string t);
	bool setLength(std::string len);
	bool setDate(std::string d);
	bool setLname(std::string ln);
	bool setFname(std::string fn);

	std::string getID();			// Gets for private member variables
	int getAmount();
	std::string getType();
	std::string getLength();
	std::string getDate();
	std::string getLname();
	std::string getFname();
};