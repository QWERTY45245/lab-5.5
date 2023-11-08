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
			int n = 12; // ������ �� �������� �� ��, ��� �� ������ ���������
			int m = 18; // ������ �� �������� �� ��, ��� �� ������ ���������
			int expected_result = 6; // ���������� ��������� ��� ���������
			int recursion_depth = 0;
			int level = 1;
			int result = ncd(n, m, recursion_depth, level);
			Assert::AreEqual(expected_result, result); // ��������� ���������� � ���������� ���������

			// ��������� �������� ������� ������, ���� ���� ������ �������� �� �������� �����
			// ���������, �� ������ ���������, �� ������� �������� � ���������� ��������.
			Assert::AreEqual(4, recursion_depth); // ��������� ������� ������
		}
	};
}
