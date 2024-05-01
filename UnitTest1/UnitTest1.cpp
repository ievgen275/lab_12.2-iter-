#include "pch.h"
#include "CppUnitTest.h"
#include "../PR_12.2(iter)/PR_12.2(iter).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{

	TEST_CLASS(UnitTest1)
	{
	public:
        TEST_METHOD(TestAppend)
        {
            Info testData = 10;

            append(testData);

            Assert::AreEqual(testData, p->info);
        }
	};
}
