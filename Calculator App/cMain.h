#pragma once
#include "wx/wx.h"

class cMain : public wxFrame
{
private:

	wxButton* bttn1 = nullptr; //(-)
	wxButton* bttn2 = nullptr; //mod
	wxButton* bttn3 = nullptr; //bin
	wxButton* bttn4 = nullptr; //hex
	wxButton* bttn5 = nullptr; //dec
	wxButton* bttn6 = nullptr; //7
	wxButton* bttn7 = nullptr; //8
	wxButton* bttn8 = nullptr; //9
	wxButton* bttn9 = nullptr; ///
	wxButton* bttn10 = nullptr; //4
	wxButton* bttn11 = nullptr; //5
	wxButton* bttn12 = nullptr; //6
	wxButton* bttn13 = nullptr; //*
	wxButton* bttn14 = nullptr; //1
	wxButton* bttn15 = nullptr; //2 
	wxButton* bttn16 = nullptr; //3
	wxButton* bttn17 = nullptr; //-
	wxButton* bttn18 = nullptr; //c
	wxButton* bttn19 = nullptr; //0
	wxButton* bttn20 = nullptr; //=
	wxButton* bttn21 = nullptr; //+
	wxTextCtrl* textBox = nullptr; //TEXT

public:

	cMain();
	~cMain();
	void OnButtonClick(wxCommandEvent& evt);
};

