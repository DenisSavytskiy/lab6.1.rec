#include "pch.h"
#include "CppUnitTest.h"
#include "../AP_Lab№6.1.рек/AP_Lab№6.1.рек.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:
        TEST_METHOD(TestCountElements)
        {
            const int testSize = 5;
            int testArr[testSize] = { 1, -3, 4, 0, 6 };
            int count = countElements(testArr, testSize, 0);
            Assert::AreEqual(4, count);
        }

        TEST_METHOD(TestSumElements)
        {
            const int testSize = 5;
            int testArr[testSize] = { 1, -3, 4, 0, 6 };
            int sum = sumElements(testArr, testSize, 0);
            Assert::AreEqual(11, sum);
        }

        TEST_METHOD(TestReplaceElements)
        {
            const int testSize = 5;
            int testArr[testSize] = { 1, -3, 4, 0, 6 };
            replaceElements(testArr, testSize, 0);
            int expectedArr[testSize] = { 0, -3, 0, 0, 0 };
            for (int i = 0; i < testSize; i++) {
                Assert::AreEqual(expectedArr[i], testArr[i]);
            }
        }
    };
}