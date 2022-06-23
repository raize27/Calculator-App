#include "cMain.h"
#include <string>
#include "ButtonFactory.h"
#include "CalculatorProcessor.h"

CalculatorProcessor* processor = CalculatorProcessor::GetInstance();

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
void cMain::OnButtonClick(wxCommandEvent& evt) //Handles button clicks
{
	wxButton* obj = (wxButton*)(evt.GetEventObject());
	textBox->AppendText(obj->GetLabel());

	if (obj->GetLabel() == "+") //+
	{
		processor->SetNumber1(wxAtoi(textBox->GetValue()));
		processor->SetOperator(1);
		textBox->Clear();
	}
	else if (obj->GetLabel() == "-") //-
	{
		processor->SetNumber1(wxAtoi(textBox->GetValue()));
		processor->SetOperator(2);
		textBox->Clear();
	}
	else if (obj->GetLabel() == "*") // *
	{
		processor->SetNumber1(wxAtoi(textBox->GetValue()));
		processor->SetOperator(3);
		textBox->Clear();
	}
	else if (obj->GetLabel() == "/") // /
	{
		processor->SetNumber1(wxAtoi(textBox->GetValue()));
		processor->SetOperator(4);
		textBox->Clear();
	}
	else if (obj->GetLabel() == "MOD") // MOD
	{
		processor->SetNumber1(wxAtoi(textBox->GetValue()));
		processor->SetOperator(5);
		textBox->Clear();
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
	}
	else if (obj->GetLabel() == "=") // =
	{
		processor->SetNumber2(wxAtoi(textBox->GetValue()));
		switch (processor->GetOperator())
		{
		case 1:
			textBox->Clear();
			textBox->AppendText(processor->DoSum());
			break;
		case 2:
			textBox->Clear();
			textBox->AppendText(processor->DoMinus());
			break;
		case 3:
			textBox->Clear();
			textBox->AppendText(processor->DoMult());
			break;
		case 4:
			textBox->Clear();
			textBox->AppendText(processor->DoDiv());
			break;
		case 5:
			textBox->Clear();
			textBox->AppendText(processor->GetMod());
			break;
		}
	}
}
