// LongLong.cpp
#include "LongLong.h"

LongLong::LongLong(): LongLong(0, 0) {}
LongLong::LongLong(double first, double second) : Triad(first, second) {}
LongLong::LongLong(LongLong& A) : Triad(A.GetFirst(), A.GetSecond()) {}

LongLong& LongLong::operator ++ () {
	this->SetFirst(this->GetFirst() + 1);
	return *this;
}

LongLong& LongLong::operator -- () {
	this->SetFirst(this->GetFirst() - 1);
	return *this;
}

LongLong LongLong::operator ++ (int) {
	LongLong t(*this);
	this->SetSecond(this->GetSecond() + 1);
	return t;
}

LongLong LongLong::operator -- (int) {
	LongLong t(*this);
	this->SetSecond(this->GetSecond() - 1);
	return t;
}

LongLong operator +(LongLong& A, LongLong& B) {
	LongLong t(A.GetFirst() + B.GetFirst(), A.GetSecond() + B.GetSecond());
	return t;
}

LongLong operator * (LongLong& A, LongLong& B) {
	LongLong t(A.GetFirst() * B.GetFirst(), A.GetSecond() * B.GetSecond());
	return t;
}
