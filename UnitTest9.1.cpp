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
			// Ініціалізація вхідних значень
			x_p = 1;
			x_k = 3;
			dx = 1;
			e = 0.0001;

			// Перевірка значення результату в конкретній точці
			x = 2;  // обране значення x для перевірки
			sum();    // виклик функції sum(), яка має розрахувати s і n

			// Очікуване значення для sinx/x
			double expectedValue = sin(x)/(x)  ;

			// Перевірка, чи результат обчислення s близький до log(x) із врахуванням точності e
			Assert::AreEqual(expectedValue, s, 0.0001);

			// Перевірка, що n є додатнім числом
			Assert::IsTrue(n > 0);
		}
	};
}
