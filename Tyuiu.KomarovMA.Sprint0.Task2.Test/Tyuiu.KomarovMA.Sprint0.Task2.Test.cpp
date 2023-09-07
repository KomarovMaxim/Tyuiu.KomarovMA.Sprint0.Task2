#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.KomarovMA.Sprint0.Task2.Lib/Tyuiu.KomarovMA.Sprint0.Task2.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint0Task2V0* service = new Service();
			int a = 4;
			int b = 4;
			int c;


			c = service->Add(a, b);
			Assert::AreEqual(16, c);
		}
	};
}
