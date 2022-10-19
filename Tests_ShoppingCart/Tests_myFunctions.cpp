#include "pch.h"
#include "CppUnitTest.h"
#include "../ADS_TDD_ShoppingCart/myFunctions.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestsShoppingCart
{
	TEST_CLASS(TestsMyFunctions)
	{
	public:

		TEST_METHOD(TestAddPass)
		{
			int result = add(2, 3);
			Assert::AreEqual(result, 5);
		}
	};
}