#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6.4/lab6.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest64
{
	TEST_CLASS(UnitTest64)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[3] = { 3, 6, 7 };
			int t = Product(a, 3);
			Assert::AreEqual(t, 21);
		}
	};
}
