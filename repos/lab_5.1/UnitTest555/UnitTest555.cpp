#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5.1/5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest555
{
	TEST_CLASS(UnitTest555)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a;
			a = t(0);
			Assert::AreEqual(a, 2.);
		}
	};
}
