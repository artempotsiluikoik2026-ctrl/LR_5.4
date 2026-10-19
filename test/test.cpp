
#include "pch.h"
#include "CppUnitTest.h"
#include "../ЛР 5.4/ЛР 5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test54
{
	TEST_CLASS(test54)
	{
	public:

		TEST_METHOD(TestS0_Iter)
		{
			double result = S0(1, 2);
			Assert::AreEqual(3.2232305567, result, 1e-6);
		}

		TEST_METHOD(TestS1_RecUp)
		{
			double result = S1(1, 2, 1);
			Assert::AreEqual(3.2232305567, result, 1e-6);
		}

		TEST_METHOD(TestS2_RecUpDown)
		{
			double result = S2(1, 2, 2);
			Assert::AreEqual(3.2232305567, result, 1e-6);
		}

		TEST_METHOD(TestS3_RecDown)
		{
			double result = S3(1, 2, 1, 0);
			Assert::AreEqual(3.2232305567, result, 1e-6);
		}

		TEST_METHOD(TestS4_RecDownDown)
		{
			double result = S4(1, 2, 2, 0);
			Assert::AreEqual(3.2232305567, result, 1e-6);
		}
	};
}
