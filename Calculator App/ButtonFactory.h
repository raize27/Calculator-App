#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "cMain.h"
#include "wx/wx.h"

class ButtonFactory
{
public:

	ButtonFactory();
	~ButtonFactory();

	wxButton* CreateNegButton(void (cMain::* handler)(wxCommandEvent& evt), cMain* main);//(-)
	//Row ended
	wxButton* CreateModButton(void (cMain::* handler)(wxCommandEvent& evt), cMain* main);//Mod
	wxButton* CreateBinButton(void (cMain::* handler)(wxCommandEvent& evt), cMain* main);//Bin
	wxButton* CreateHexButton(void (cMain::* handler)(wxCommandEvent& evt), cMain* main);//Hex
	wxButton* CreateDecButton(void (cMain::* handler)(wxCommandEvent& evt), cMain* main);//Dec
	//Row ended
	wxButton* CreateSevenButton(void (cMain::* handler)(wxCommandEvent& evt), cMain* main);//7
	wxButton* CreateEightButton(void (cMain::* handler)(wxCommandEvent& evt), cMain* main);//8
	wxButton* CreateNineButton(void (cMain::* handler)(wxCommandEvent& evt), cMain* main);//9
	wxButton* CreateDivButton(void (cMain::* handler)(wxCommandEvent& evt), cMain* main);// /
	//Row ended
	wxButton* CreateFourButton(void (cMain::* handler)(wxCommandEvent& evt), cMain* main);//4
	wxButton* CreateFiveButton(void (cMain::* handler)(wxCommandEvent& evt), cMain* main);//5
	wxButton* CreateSixButton(void (cMain::* handler)(wxCommandEvent& evt), cMain* main);//6
	wxButton* CreateMulButton(void (cMain::* handler)(wxCommandEvent& evt), cMain* main);//*
	//Row ended
	wxButton* CreateOneButton(void (cMain::* handler)(wxCommandEvent& evt), cMain* main);//1
	wxButton* CreateTwoButton(void (cMain::* handler)(wxCommandEvent& evt), cMain* main);//2
	wxButton* CreateThreeButton(void (cMain::* handler)(wxCommandEvent& evt), cMain* main);//3
	wxButton* CreateMinusButton(void (cMain::* handler)(wxCommandEvent& evt), cMain* main);//-
	//Row ended
	wxButton* CreateClearButton(void (cMain::* handler)(wxCommandEvent& evt), cMain* main);//C
	wxButton* CreateZeroButton(void (cMain::* handler)(wxCommandEvent& evt), cMain* main);//0
	wxButton* CreateEqualButton(void (cMain::* handler)(wxCommandEvent& evt), cMain* main);//=
	wxButton* CreatePlusButton(void (cMain::* handler)(wxCommandEvent& evt), cMain* main);//+
	//Row ended

	void SetParent(wxFrame*);

	wxFrame* GetParent();

private:

	wxFrame* _parent;
};

