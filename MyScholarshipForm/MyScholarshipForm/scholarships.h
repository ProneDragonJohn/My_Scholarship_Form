#pragma once
// Scholarships.h
// This file contains prototypes of functions used in main program
// This program tutorial demonstrates arrays using vectors
// It also demonstrates file I/O techniques with vectors
//  and making arrays of objects
// The Datafile used in a CSV (Comma Seperated Values) file
//  named Scholarships.csv
// The structor of the data file is:
//  ID, Amount Awarded, Scholarship Type, Length of Scholarship, Date Starts, Last Name, First Name
#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <sstream>
#include <string>
#include "scholarshipClassDeclared.h"
//using namespace std; // This had to removed to avoid conflicts
					   //   with the String type in MyForm.cpp
					   //  All objects now have the "std::" resolution identifier added


void OpenFiles(std::ifstream &in, std::ofstream &out);
Scholarship readFile(std::string &sLine, std::vector<std::string> &sParsed, std::ifstream &fin);
void writeFile(Scholarship s, std::ofstream &fout);
void createReportHeadings(std::ofstream &fout);
std::string addCommas(int num);
void createReportSummary(std::vector<Scholarship> sArray, std::ofstream &fout);
void writeFile(Scholarship s, std::ofstream &fout, std::string sType);
