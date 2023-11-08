#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

int ncd(int n, int m, int& recursion_depth, int level);

namespace UnitTestlab55
{
	TEST_CLASS(UnitTestlab55)
	{
	public:

		TEST_METHOD(TestNCD)
		{
			int n = 12; // Замініть це значення на те, яке ви хочете перевірити
			int m = 18; // Замініть це значення на те, яке ви хочете перевірити
			int expected_result = 6; // Очікуваний результат для порівняння
			int recursion_depth = 0;
			int level = 1;
			int result = ncd(n, m, recursion_depth, level);
			Assert::AreEqual(expected_result, result); // Порівняння результату з очікуваним значенням

			// Додаткова перевірка глибини рекурсії, може бути змінена відповідно до реальних даних
			// Наприклад, ви можете перевірити, чи рекурсія відбулася з правильною глибиною.
			Assert::AreEqual(4, recursion_depth); // Очікувана глибина рекурсії
		}
	};
}
