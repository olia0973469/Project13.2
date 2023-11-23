#include "pch.h"
#include "CppUnitTest.h"
#include "../Project13.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int test = CUBE(2);
			Assert::AreEqual(8, test);
		}
	};
}
