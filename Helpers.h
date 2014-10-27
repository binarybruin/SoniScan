//
//  Helpers.h
//  SoniScan_2_0
//
//  Added by Michelle Auyoung on 10/25/14.
//  Copyright (c) 2014 Michelle Auyoung. All rights reserved.
//

#ifndef __SoniScan_2_0__Helpers__
#define __SoniScan_2_0__Helpers__

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void split(const string &s, char c, vector<string> &v) {
	string::size_type i = 0;
	string::size_type j = s.find(c);

	while (j != string::npos) {
		v.push_back(s.substr(i, j - i));
		i = ++j;
		j = s.find(c, j);

		if (j == string::npos)
			v.push_back(s.substr(i, s.length()));
	}
}

#endif /* defined(__SoniScan_2_0__Helpers__) */