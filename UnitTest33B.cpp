#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP Lab3.3B/LongLong.h"
#include "../OOP Lab3.3B/LongLong.cpp"
#include "../OOP Lab3.3B/Triad.h"
#include "../OOP Lab3.3B/Triad.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33B
{
	TEST_CLASS(UnitTest33B)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			LongLong A(10, 5), B(5, 10);
			Assert::AreEqual(A == B, false);
		}
	};
}
