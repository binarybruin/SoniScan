#include "Slice.h"

#include <iostream>
#include <fstream>
#include <string>

// Slice constructor
Slice::Slice(int number, int view)
{
	m_number = number;
	m_view = view;

	for (int i = 0; i < NUMPOINTS; i++) {
		m_points[i] = Point{ 0, 0 };
	}
}

void Slice::readSlice(std::string str, int index) {
	index = 0;
	int pos = 0;
	std::string tmp = "";
	for (int curr = 0; curr < str.size(); curr++) {
		while (isdigit(str[curr])) {
			tmp += str[curr++];
		}
		if (pos == 0) {
			m_points[index].x = std::stoi(tmp);
			pos++;
		}
		else {
			m_points[index].y = std::stoi(tmp);
		}
		// Reset at semicolon - separator for points
		if (str[curr] == ';') {
			tmp = "";
			pos = 0;
			index++;
		}
	}
}

// Slice member functions
void Slice::setPoints(char* filename, int number, int view)
{
	// Read file containing coordinates for each point of slice
	std::string str;
	int curr = 0;		// index for str
	int lineCount = 0;	// to find slice number
	int index;			// index for points array
	int pos = 0;		// index for x or y

	std::ifstream inputFile;

	inputFile.open(filename);
	if (!inputFile.good())
	{
		std::cout << "Error opening file!\n";
		return;
	}

	// Get line of slice number
	while (lineCount < number) {
		getline(inputFile, str);
	}

	inputFile.close();

	if (view == FPVIEW) {
		readSlice(str, 0);
	}

	if (view == TOVIEW) {
		readSlice(str, 8);
	}

	if (view == PERSPVIEW) {
		readSlice(str, 13);
	}
}

Point Slice::getPoint(char letter)
{
	switch (letter)
	{
		case 'A':
			return m_points[0];
			break;
		case 'B':
			return m_points[1];
			break;
		case 'C':
			return m_points[2];
			break;
		case 'D':
			return m_points[3];
			break;
		case 'E':
			return m_points[4];
			break;
		case 'F':
			return m_points[5];
			break;
		case 'G':
			return m_points[6];
			break;
		case 'H':
			return m_points[7];
			break;
		case 'I':
			return m_points[8];
			break;
		case 'J':
			return m_points[9];
			break;
		case 'K':
			return m_points[10];
			break;
		case 'L':
			return m_points[11];
			break;
		case 'M':
			return m_points[12];
			break;
		case 'N':
			return m_points[13];
			break;
		case 'O':
			return m_points[14];
			break;
		case 'P':
			return m_points[15];
			break;
		case 'Q':
			return m_points[16];
			break;
	}
}