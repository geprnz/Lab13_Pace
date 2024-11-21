#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <sstream>

using namespace std;

// PRE: Takes a vector of specified value and input file
// POST: Loads vector with values from in-file
void loadVector(vector<int>& values, ifstream& inFile);
void loadVector(vector<double>& values, ifstream& inFile);
void loadVector(vector<string>& values, ifstream& inFile);

template <typename T>
void printVector(vector<T>& values) {
	for (auto i : values) {
		cout << i << " ";
	}
	cout << endl;
}

// PRE: Takes an out-file, vector, and two integers denoting index values
// POST: Swaps values at given positions, changes vector in place
template <typename T>
void mySwap(ofstream& outFile, vector<T>& values, int pos1, int pos2) {

	outFile << "Swap items at positions " << pos1 << " and " << pos2 << endl;

	if (pos1 < 0 || pos1 > values.size() - 1) {
		outFile << "\tThis value is invalid: " << pos1 << endl;
		return;
	}
	if (pos2 < 0 || pos2 > values.size() - 1) {
		outFile << "\tThis value is invalid: " << pos2 << endl;
		return;
	}

	outFile << "\tBefore: " << values[pos1] << " & " << values[pos2] << endl;

	T tempVal = values[pos1];
	values[pos1] = values[pos2];
	values[pos2] = tempVal;

	outFile << "\tAfter: " << values[pos1] << " & " << values[pos2] << endl;
}

// PRE: Takes out-file and vector
// POST: Prints minimum value in vector to out-file
template <typename T>
void myMin(ofstream& outFile, vector<T>& values) {
	T min = values[0];

	for (auto val : values) {
		if (val < min) min = val;
	}

	outFile << "The minimum value is: " << min << endl;
}

// PRE: Takes out-file and vector
// POST: Prints maximum value in vector to out-file
template <typename T>
void myMax(ofstream& outFile, vector<T>& values) {
	T max = values[0];

	for (auto val : values) {
		if (val > max) max = val;
	}

	outFile << "The maximum value is: " << max << endl;
}


// PRE: Takes out-file, vector, and value to search for
// POST: Prints result of search to out-file 
template <typename T>
void mySearch(ofstream& outFile, vector<T>& values, T searchVal) {
	for (int i = 0; i < values.size(); ++i) {
		if (values[i] == searchVal) {
			outFile << "The value " << searchVal << " is found at position " << i << " in the list." << endl;
			return;
		}
	}
	outFile << "The value " << searchVal << " could not be found in the list." << endl;
}