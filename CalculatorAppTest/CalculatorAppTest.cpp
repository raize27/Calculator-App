//#pragma warning(disable : 4996)
#include "pch.h"
//#define _CRT_SECURE_NO_WARNINGS
#include "CppUnitTest.h"
#include "../Calculator App/ButtonFactory.h"
#include "../Calculator App/CalculatorProcessor.h"
#include "../Calculator App/ButtonFactory.cpp"
#include "../Calculator App/CalculatorProcessor.cpp"
#include <string> 
//#include "wx/wx.h"




using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorAppTest
{
	TEST_CLASS(CalculatorAppTest)
	{
	public:
		//Button Factory Tests
		ButtonFactory factory = ButtonFactory();

		TEST_METHOD(BFTest1)
		{
			wxButton* bttn1 = factory.CreateNegButton(&cMain::OnButtonClick, nullptr);
			int answer = bttn1->GetId();
			Assert::AreEqual(answer, 101);
		}
	};

}
