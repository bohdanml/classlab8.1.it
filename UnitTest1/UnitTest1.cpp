
#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS
#include "CppUnitTest.h"
#include"..//classlab8.1.it/lab.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest2)
    {
    public:

        TEST_METHOD(TestChange)

        {
            char row[] = "neoniontonso";
            int k = 4;
            int t = Count(row);
            Assert::AreEqual (t,k);
        }
    };
}