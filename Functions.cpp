#include "Functions.h"

void loadVector(vector<int>& values, ifstream& inFile) {
	string line;
	string value;

	while (getline(inFile, line)) {
		stringstream ss(line);

		while (ss >> value) {
			try {
				values.push_back(stoi(value)); // Convert string to int and add to vector
			}
			catch (const invalid_argument& e) {
				cerr << "Invalid number: " << value << endl;
			}
			catch (const out_of_range& e) {
				cerr << "Out of range number: " << value << endl;
			}
		}
	}
}

void loadVector(vector<double>& values, ifstream& inFile) {
	string line;
	string value;

	while (getline(inFile, line)) {
		stringstream ss(line);
		while (getline(ss, value, ' ')) {
			values.push_back(stod(value));
		}
	}
}

void loadVector(vector<string>& values, ifstream& inFile) {
	string line;
	string value;

	while (getline(inFile, line)) {
		stringstream ss(line);
		while (getline(ss, value, ' ')) {
			values.push_back(value);
		}
	}
}