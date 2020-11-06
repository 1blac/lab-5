#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5_2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest52
{
	TEST_CLASS(UnitTest52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a;
			int f = 2;
			a = A( 1,f,1);
			Assert::AreEqual(a, 1.2);
		}
	};
}
