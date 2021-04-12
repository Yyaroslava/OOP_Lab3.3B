//Triad.cpp
#include "Triad.h"

void Triad::SetFirst(double first) { this->first = first; }
double Triad::GetFirst() const { return first; }

void Triad::SetSecond(double second) { this->second = second; }
double Triad::GetSecond() const { return second; }

Triad::Triad() { SetFirst(0); SetSecond(0); }

Triad::Triad(double first = 0, double second = 0) {
	SetFirst(first);
	SetSecond(second);
}

Triad::Triad(Triad& A) {
	SetFirst(A.GetFirst());
	SetSecond(A.GetSecond());
}

bool operator > (Triad& A, Triad& B) {
	return ((A.GetFirst() > B.GetFirst()) || (A.GetFirst() == B.GetFirst() && A.GetSecond() > B.GetSecond()));
}

bool operator < (Triad& A, Triad& B) {
	return ((A.GetFirst() < B.GetFirst()) || (A.GetFirst() == B.GetFirst() && A.GetSecond() < B.GetSecond()));
}

bool operator == (Triad& A, Triad& B) {
	return (A.GetFirst() == B.GetFirst() && A.GetSecond() == B.GetSecond());
}

ostream& operator << (ostream& out, const Triad& A) {
	out << string(A);
	return out;
}

istream& operator >> (istream& in, Triad& A) {
	double first, second, third;
	cout << "Enter first digit: "; in >> first;
	cout << "Enter second digit: "; in >> second;
	A.SetFirst(first); A.SetSecond(second);
	return in;
}

Triad::operator string() const {
	stringstream ss;
	ss << "First digit: " << first << endl;
	ss << "Second digit: " << second << endl;
	return ss.str();
}
