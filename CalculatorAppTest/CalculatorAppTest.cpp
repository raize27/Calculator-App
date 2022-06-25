#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include "CppUnitTest.h"
#include <string> 
#include "wx/wx.h"
#include "../Calculator App/ButtonFactory.h"
#include "../Calculator App/CalculatorProcessor.h"
#include "../Calculator App/cMain.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorAppTest
{
	TEST_CLASS(CalculatorAppTest)
	{
	public:
		//----------------------------------------------Button Factory Tests--------------------------------------------------------
		TEST_METHOD(BFTest1)
		{
			cMain c = cMain();
			ButtonFactory factory = ButtonFactory();
			factory.SetParent(&c);
			wxButton* bttn1 = factory.CreateNegButton(&cMain::OnButtonClick, &c);
			int answer = bttn1->GetId();
			Assert::AreEqual(answer, 101);
		}
		TEST_METHOD(BFTest2)
		{
			cMain c = cMain();
			ButtonFactory factory = ButtonFactory();
			factory.SetParent(&c);
			wxButton* bttn2 = factory.CreateModButton(&cMain::OnButtonClick, &c);
			int answer = bttn2->GetId();
			Assert::AreEqual(answer, 102);
		}
		TEST_METHOD(BFTest3)
		{
			cMain c = cMain();
			ButtonFactory factory = ButtonFactory();
			factory.SetParent(&c);
			wxButton* bttn3 = factory.CreateBinButton(&cMain::OnButtonClick, &c);
			int answer = bttn3->GetId();
			Assert::AreEqual(answer, 103);
		}
		TEST_METHOD(BFTest4)
		{
			cMain c = cMain();
			ButtonFactory factory = ButtonFactory();
			factory.SetParent(&c);
			wxButton* bttn4 = factory.CreateHexButton(&cMain::OnButtonClick, &c);
			int answer = bttn4->GetId();
			Assert::AreEqual(answer, 104);
		}
		TEST_METHOD(BFTest5)
		{
			cMain c = cMain();
			ButtonFactory factory = ButtonFactory();
			factory.SetParent(&c);
			wxButton* bttn5 = factory.CreateDecButton(&cMain::OnButtonClick, &c);
			int answer = bttn5->GetId();
			Assert::AreEqual(answer, 105);
		}
		TEST_METHOD(BFTest6)
		{
			cMain c = cMain();
			ButtonFactory factory = ButtonFactory();
			factory.SetParent(&c);
			wxButton* bttn6 = factory.CreateSevenButton(&cMain::OnButtonClick, &c);
			int answer = bttn6->GetId();
			Assert::AreEqual(answer, 106);
		}
		TEST_METHOD(BFTest7)
		{
			cMain c = cMain();
			ButtonFactory factory = ButtonFactory();
			factory.SetParent(&c);
			wxButton* bttn7 = factory.CreateEightButton(&cMain::OnButtonClick, &c);
			int answer = bttn7->GetId();
			Assert::AreEqual(answer, 107);
		}
		TEST_METHOD(BFTest8)
		{
			cMain c = cMain();
			ButtonFactory factory = ButtonFactory();
			factory.SetParent(&c);
			wxButton* bttn8 = factory.CreateNineButton(&cMain::OnButtonClick, &c);
			int answer = bttn8->GetId();
			Assert::AreEqual(answer, 108);
		}
		TEST_METHOD(BFTest9)
		{
			cMain c = cMain();
			ButtonFactory factory = ButtonFactory();
			factory.SetParent(&c);
			wxButton* bttn9 = factory.CreateDivButton(&cMain::OnButtonClick, &c);
			int answer = bttn9->GetId();
			Assert::AreEqual(answer, 109);
		}
		TEST_METHOD(BFTest10)
		{
			cMain c = cMain();
			ButtonFactory factory = ButtonFactory();
			factory.SetParent(&c);
			wxButton* bttn10 = factory.CreateFourButton(&cMain::OnButtonClick, &c);
			int answer = bttn10->GetId();
			Assert::AreEqual(answer, 110);
		}
		//-----------------------------------------------Calculator Processor Tests------------------------------------------------------
		TEST_METHOD(CPTest1)
		{
			CalculatorProcessor* processor = CalculatorProcessor::GetInstance();
			processor->SetNumber1(5);
			processor->SetNumber2(5);
			std::string answer = processor->DoSum();
			Assert::AreEqual(stoi(answer), 10);
		}
		TEST_METHOD(CPTest2)
		{
			CalculatorProcessor* processor = CalculatorProcessor::GetInstance();
			processor->SetNumber1(5);
			processor->SetNumber2(10);
			std::string answer = processor->DoSum();
			Assert::AreEqual(stoi(answer), 15);
		}
		TEST_METHOD(CPTest3)
		{
			CalculatorProcessor* processor = CalculatorProcessor::GetInstance();
			processor->SetNumber1(10);
			processor->SetNumber2(5);
			std::string answer = processor->DoMinus();
			Assert::AreEqual(stoi(answer), 5);
		}
		TEST_METHOD(CPTest4)
		{
			CalculatorProcessor* processor = CalculatorProcessor::GetInstance();
			processor->SetNumber1(5);
			processor->SetNumber2(20);
			std::string answer = processor->DoMinus();
			Assert::AreEqual(stoi(answer), -15);
		}
		TEST_METHOD(CPTest5)
		{
			CalculatorProcessor* processor = CalculatorProcessor::GetInstance();
			processor->SetNumber1(10);
			processor->SetNumber2(5);
			std::string answer = processor->DoMult();
			Assert::AreEqual(stoi(answer), 50);
		}
		TEST_METHOD(CPTest6)
		{
			CalculatorProcessor* processor = CalculatorProcessor::GetInstance();
			processor->SetNumber1(10);
			processor->SetNumber2(5);
			std::string answer = processor->DoDiv();
			Assert::AreEqual(stoi(answer), 2);
		}
		TEST_METHOD(CPTest7)
		{
			CalculatorProcessor* processor = CalculatorProcessor::GetInstance();
			processor->SetNumber1(45);
			std::string temp = "2D";
			std::string answer = processor->GetHexadecimal();
			Assert::AreEqual(stoi(answer, nullptr, 16), stoi(temp, nullptr, 16));
		}
		TEST_METHOD(CPTest8)
		{
			CalculatorProcessor* processor = CalculatorProcessor::GetInstance();
			processor->SetNumber1(30);
			std::string temp = "1E";
			std::string answer = processor->GetHexadecimal();
			Assert::AreEqual(stoi(answer, nullptr, 16), stoi(temp, nullptr, 16));
		}
		TEST_METHOD(CPTest9)
		{
			CalculatorProcessor* processor = CalculatorProcessor::GetInstance();
			processor->SetNumber1(5);
			std::string temp = "101";
			std::string answer = processor->GetBinary();
			Assert::AreEqual(stoi(answer, nullptr, 2), stoi(temp, nullptr, 2));
		}
		TEST_METHOD(CPTest10)
		{
			CalculatorProcessor* processor = CalculatorProcessor::GetInstance();
			processor->SetNumber1(6);
			std::string temp = "110";
			std::string answer = processor->GetBinary();
			Assert::AreEqual(stoi(answer, nullptr, 2), stoi(temp, nullptr, 2));
		}
	};
}
