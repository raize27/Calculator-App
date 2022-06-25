#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include "cMain.h"
#include "CalculatorProcessor.h"
#include <string>
#include "ButtonFactory.h"
#include "DoSum.h"
#include "DoMinus.h"
#include "DoMult.h"
#include "DoDiv.h"


cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Calculator.exe", wxPoint(1100, 600), wxSize(285, 410))
{
	textBox = new wxTextCtrl(this, 100, "", wxPoint(10, 10), wxSize(185, 50));

	ButtonFactory factory = ButtonFactory();

	factory.SetParent(this);

	wxButton* bttn1 = factory.CreateNegButton(&cMain::OnButtonClick, this);//(-)
	//Row Ended
	wxButton* bttn2 = factory.CreateModButton(&cMain::OnButtonClick, this);//Mod
	wxButton* bttn3 = factory.CreateBinButton(&cMain::OnButtonClick, this);//Bin
	wxButton* bttn4 = factory.CreateHexButton(&cMain::OnButtonClick, this);//Hex
	wxButton* bttn5 = factory.CreateDecButton(&cMain::OnButtonClick, this);//Dec
	//Row Ended
	wxButton* bttn6 = factory.CreateSevenButton(&cMain::OnButtonClick, this);//7
	wxButton* bttn7 = factory.CreateEightButton(&cMain::OnButtonClick, this);//8
	wxButton* bttn8 = factory.CreateNineButton(&cMain::OnButtonClick, this);//9
	wxButton* bttn9 = factory.CreateDivButton(&cMain::OnButtonClick, this);// /
	//Row Ended
	wxButton* bttn10 = factory.CreateFourButton(&cMain::OnButtonClick, this);//4
	wxButton* bttn11 = factory.CreateFiveButton(&cMain::OnButtonClick, this);//5
	wxButton* bttn12 = factory.CreateSixButton(&cMain::OnButtonClick, this);//6
	wxButton* bttn13 = factory.CreateMulButton(&cMain::OnButtonClick, this);//*
	//Row Ended
	wxButton* bttn14 = factory.CreateOneButton(&cMain::OnButtonClick, this);//1
	wxButton* bttn15 = factory.CreateTwoButton(&cMain::OnButtonClick, this);//2
	wxButton* bttn16 = factory.CreateThreeButton(&cMain::OnButtonClick, this);//3
	wxButton* bttn17 = factory.CreateMinusButton(&cMain::OnButtonClick, this);//-
	//Row Ended
	wxButton* bttn18 = factory.CreateClearButton(&cMain::OnButtonClick, this);//C
	wxButton* bttn19 = factory.CreateZeroButton(&cMain::OnButtonClick, this);//0
	wxButton* bttn20 = factory.CreateEqualButton(&cMain::OnButtonClick, this);//=
	wxButton* bttn21 = factory.CreatePlusButton(&cMain::OnButtonClick, this);//+
	//Row Ended
}
cMain::~cMain()
{

}


cMain::cMain(cMain& other) {}

void cMain::operator=(const cMain& other) {};


void cMain::OnButtonClick(wxCommandEvent& evt) //Handles button clicks
{
	CalculatorProcessor* processor = CalculatorProcessor::GetInstance();

	wxButton* obj = (wxButton*)(evt.GetEventObject());
	textBox->AppendText(obj->GetLabel());

	if (obj->GetLabel() == "+") //+
	{
		processor->numbers.push_back(wxAtoi(textBox->GetValue()));
		DoSum* s = new DoSum();
		processor->commands.push_back(s);
		textBox->Clear();
	}
	else if (obj->GetLabel() == "-") //-
	{
		processor->numbers.push_back(wxAtoi(textBox->GetValue()));
		DoMinus* m = new DoMinus();
		processor->commands.push_back(m);
		textBox->Clear();

	}
	else if (obj->GetLabel() == "*") // *
	{
		processor->numbers.push_back(wxAtoi(textBox->GetValue()));
		DoMult* t = new DoMult();
		processor->commands.push_back(t);
		textBox->Clear();
	}
	else if (obj->GetLabel() == "/") // /
	{
		processor->numbers.push_back(wxAtoi(textBox->GetValue()));
		DoDiv* d = new DoDiv();
		processor->commands.push_back(d);
		textBox->Clear();
	}
	else if (obj->GetLabel() == "MOD") // MOD
	{
		processor->SetNumber1(wxAtoi(textBox->GetValue()));
		textBox->Clear();
		processor->SetOperator(1);
	}
	else if (obj->GetLabel() == "DEC") // DEC
	{
		processor->SetNumber1(wxAtoi(textBox->GetValue()));
		textBox->Clear();
		textBox->AppendText(processor->GetDecimal());
	}
	else if (obj->GetLabel() == "HEX") // Hex
	{
		processor->SetNumber1(wxAtoi(textBox->GetValue()));
		textBox->Clear();
		textBox->AppendText(processor->GetHexadecimal());
	}
	else if (obj->GetLabel() == "BIN") // BIN
	{
		processor->SetNumber1(wxAtoi(textBox->GetValue()));
		textBox->Clear();
		textBox->AppendText(processor->GetBinary());
	}
	else if (obj->GetLabel() == "(-)") // (-)
	{
		processor->SetNumber1(wxAtoi(textBox->GetValue()));
		textBox->Clear();
		textBox->AppendText(processor->MakeNegative());
	}
	else if (obj->GetLabel() == "C") // C
	{
		textBox->Clear();
		processor->commands.clear();
		processor->numbers.clear();
	}
	else if (obj->GetLabel() == "=") // =
	{
		if (processor->GetOperator() == 1)
		{
			processor->SetNumber2(wxAtoi(textBox->GetValue()));
			textBox->Clear();
			textBox->AppendText(processor->GetMod());
			processor->SetOperator(0);
		}
		else
		{
			processor->numbers.push_back(wxAtoi(textBox->GetValue()));
			int result = 0;
			for (int i = 0; i < processor->commands.size(); i++)
			{
				textBox->Clear();
				result = processor->commands[i]->Execute(processor->numbers[i], processor->numbers[i + 1]);
				processor->numbers[i + 1] = result;
				if (result == MAXINT) {
					textBox->AppendText("ERROR. Cannot divide by 0.");
				}
				else
					textBox->AppendText(std::to_string(result));
			}
			processor->commands.clear();
			processor->numbers.clear();
		}
	}
}
