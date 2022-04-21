#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab12_4.1cpp\main.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::IsTrue(cpp_find_read("C:\\Users\\Arsen\\Desktop\\Arsen\\2 семестр\\ПКР\\Лаби\\Lab12_4.1cpp\\Lab12_4.1cpp\\t", 3, 4));
		}
	};
}
