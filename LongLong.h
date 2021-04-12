// LongLong.h
#pragma once
#include "Triad.h"

class LongLong : public Triad {
public:
	LongLong();
	LongLong(double, double);
	LongLong(LongLong&);

	LongLong& operator ++ ();
	LongLong& operator -- ();
	LongLong operator ++ (int);
	LongLong operator -- (int);

	friend LongLong operator + (LongLong&, LongLong&);
	friend LongLong operator * (LongLong&, LongLong&);
};
