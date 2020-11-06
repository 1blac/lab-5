#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5,3/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest533
{
	TEST_CLASS(UnitTest533)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a;
			a = h(1);
			Assert::AreEqual(a, 1.);
		}
	};
}
