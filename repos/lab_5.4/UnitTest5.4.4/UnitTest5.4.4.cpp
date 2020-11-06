#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5.4/5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest544
{
	TEST_CLASS(UnitTest544)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			int f = 1;
			t = S1(2, f, 3);
			Assert::AreEqual(t, 0.);

		}
	};
}
