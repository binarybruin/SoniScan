#ifndef SLICE_H
#define SLICE_H

#include <string>

#define PERSPVIEW 0
#define FPVIEW 1
#define TOVIEW 2
#define NUMPOINTS 17

struct Point {
	int x;
	int y;
};

class Slice
{
private:
	int m_number;
	int m_view;

	// Array to hold coordinates of points A-Q
	Point m_points[NUMPOINTS];

	Slice() { } // private default constructor

public:
	Slice(int number, int view);

	void readSlice(std::string str, int index);
	void setPoints(char *filename, int number, int view);
	Point getPoint(char letter);
};

#endif