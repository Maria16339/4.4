#include "pch.h"
#include "CppUnitTest.h"
#include"C://Users/User/source/repos/4.4/4.4/Dollar.h"
#include"C://Users/User/source/repos/4.4/4.4/Currency.h"
#include"C://Users/User/source/repos/4.4/4.4/Dollar.cpp"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Dollar d(54);
			Assert::AreEqual(d.convertintohryvnia(),1506.6);

		}
	};
}
