// CS201L-Lab13a-Completed.cpp : This file contains the 'main' function. Program execution begins and ends there.
// GUNNER PACE

#include "Functions.h"

int main() {
	ifstream integers("integers.txt");
	ifstream doubles("doubles.txt");
	ifstream strings("strings.txt");
	ofstream output("output.txt");

	vector<int>  myInts;
	vector<string> myStrings;
	vector<double> myDoubles;

	loadVector(myInts, integers);
	loadVector(myStrings, strings);
	loadVector(myDoubles, doubles);
	
	//the following calls should produce the output needed for this lab
	output << "INTEGERS:" << endl;
	mySwap(output, myInts, 10, 200);
	mySwap(output, myInts, -10, 15);
	mySwap(output, myInts, 10, 20);
	mySwap(output, myInts, 6, 7);

	myMin(output, myInts);
	myMax(output, myInts);

	mySearch(output, myInts, 1);
	mySearch(output, myInts, 3);


	output << "\nDOUBLES:" << endl;
	mySwap(output, myDoubles, 10, 200);
	mySwap(output, myDoubles, -10, 15);
	mySwap(output, myDoubles, 10, 20);
	mySwap(output, myDoubles, 6, 7);

	myMin(output, myDoubles);
	myMax(output, myDoubles);

	mySearch(output, myDoubles, 3.95805);
	mySearch(output, myDoubles, 4.62557);
	mySearch(output, myDoubles, 1.23456);
	output << endl;


	output << "\nSTRINGS:" << endl;
	mySwap(output, myStrings, 10, 200);
	mySwap(output, myStrings, -10, 15);
	mySwap(output, myStrings, 10, 20);
	mySwap(output, myStrings, 6, 7);

	myMin(output, myStrings);
	myMax(output, myStrings);

	string searchStr = "Satellite";
	mySearch(output, myStrings, searchStr);
	searchStr = "Pumpkin";
	mySearch(output, myStrings, searchStr);

	output << endl;

	output.close();

	return 0;
}