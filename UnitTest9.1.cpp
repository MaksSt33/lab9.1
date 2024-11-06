#include "pch.h"
#include "CppUnitTest.h"
#include "../lab9.1/dod.cpp"
#include "../lab9.1/sum.cpp"
#include "../lab9.1/var.cpp"
#include "../lab9.1/dod.h"
#include "../lab9.1/sum.h"
#include "../lab9.1/var.h"
#include <cmath>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestSumCalculation)
		{
			// ����������� ������� �������
			x_p = 1;
			x_k = 3;
			dx = 1;
			e = 0.0001;

			// �������� �������� ���������� � ��������� �����
			x = 2;  // ������ �������� x ��� ��������
			sum();    // ������ ������� sum(), ��� �� ����������� s � n

			// ��������� �������� ��� sinx/x
			double expectedValue = sin(x)/(x)  ;

			// ��������, �� ��������� ���������� s �������� �� log(x) �� ����������� ������� e
			Assert::AreEqual(expectedValue, s, 0.0001);

			// ��������, �� n � ������� ������
			Assert::IsTrue(n > 0);
		}
	};
}
