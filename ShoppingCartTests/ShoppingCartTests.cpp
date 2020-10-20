#include "pch.h"
#include "CppUnitTest.h"
#include "../ADS_TDD_ShoppingCart/Book.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ShoppingCartTests
{
	TEST_CLASS(ShoppingCartTests)
	{
	//	ShoppingCart* shoppingCart;

	public:
		TEST_METHOD_INITIALIZE(Setup) {
			//shoppingCart = new ShoppingCart();
		}

		TEST_METHOD_CLEANUP(TearDown) {
		//	delete shoppingCart
		}

		TEST_METHOD(TestMethod1)
		{
			Book b("aaa", 125);
			Assert::AreEqual(b.getPrice(), 125, 0.01);
		}
	};
}
