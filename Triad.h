// Triad.h
#pragma once
#include <iostream>
#include <sstream>

using namespace std;

class Triad {
private:
	double first, second;
public:
	void SetFirst(double);
	double GetFirst() const;

	void SetSecond(double);
	double GetSecond() const;
	
	Triad();
	Triad(double, double);
	Triad(Triad&);

	friend bool operator > (Triad&, Triad&);
	friend bool operator < (Triad&, Triad&);
	friend bool operator == (Triad&, Triad&);
	friend ostream& operator << (ostream&, const Triad&);
	friend istream& operator >> (istream&, Triad&);
	operator string() const;
};
