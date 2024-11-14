#include "pch.h"
#include "CppUnitTest.h"
#include "../pr9.1/var.h"
#include "../pr9.1/sum.h"
#include "../pr9.1/dod.h"

using namespace std;
using namespace nsSum;
using namespace nsVar;
using namespace nsDod;


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			x = 0.1;
			n = 1;
			a = 0;
			dod();

			Assert::AreEqual(0.09531, s, 0.0001);
		}
	};
}
