#include "pch.h"
#include "CppUnitTest.h"
#include "../ADS_TDD_ShoppingCart/Book.h"
#include "../ADS_TDD_ShoppingCart/ShoppingCart.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestsShoppingCart
{
	TEST_CLASS(TestsShoppingCart)
	{
	public:

		TEST_METHOD(TestEmptyCart)
		{
			ShoppingCart myCart;
			bool result = myCart.isEmpty();
			Assert::AreEqual(result, true);
		}
		TEST_METHOD(TestNonEmptyCart)
		{
			ShoppingCart myCart;
			Book b1("Some Amazing Book", 29.99);
			myCart.addBook(&b1);
			Assert::AreEqual(myCart.isEmpty(), false);
		}
		TEST_METHOD(TestSizeNonZero)
		{
			ShoppingCart myCart;
			Book b1("Some Amazing Book", 29.99);
			Assert::AreEqual(myCart.size(), 0);
			myCart.addBook(&b1);
			Assert::AreEqual(myCart.size(), 1);
		}
		TEST_METHOD(TestGetBookByTitlePass)
		{
			ShoppingCart myCart;
			Book b1("Some Amazing Book", 29.99);
			myCart.addBook(&b1);
			Book* searchResult
				= myCart.getBookByTitle("Some Amazing Book");
			Assert::IsNotNull(searchResult);
			string strTitle = "Some Amazing Book";
			Assert::AreEqual(searchResult->getTitle(),
				strTitle);
			double price = 29.99;
			Assert::AreEqual(searchResult->getPrice(),
				price);
		}

		TEST_METHOD(TestGetBookByTitleFail)
		{
			ShoppingCart myCart;
			Book* searchResult
				= myCart.getBookByTitle("Doesnt Exist");
			Assert::IsNull(searchResult);

			Book b1("Some Amazing Book", 29.99);
			myCart.addBook(&b1);

			searchResult
				= myCart.getBookByTitle("Doesnt Exist");
			Assert::IsNull(searchResult);
		}
	};
}