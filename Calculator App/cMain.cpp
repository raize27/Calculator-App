#include "cMain.h"
#include <string>

wxBEGIN_EVENT_TABLE(cMain, wxFrame)
EVT_BUTTON(100, cMain::OnButtonClick)
EVT_BUTTON(101, cMain::OnButtonClick)
EVT_BUTTON(102, cMain::OnButtonClick)
EVT_BUTTON(103, cMain::OnButtonClick)
EVT_BUTTON(104, cMain::OnButtonClick)
EVT_BUTTON(105, cMain::OnButtonClick)
EVT_BUTTON(106, cMain::OnButtonClick)
EVT_BUTTON(107, cMain::OnButtonClick)
EVT_BUTTON(108, cMain::OnButtonClick)
EVT_BUTTON(109, cMain::OnButtonClick)
EVT_BUTTON(110, cMain::OnButtonClick)
EVT_BUTTON(111, cMain::OnButtonClick)
EVT_BUTTON(112, cMain::OnButtonClick)
EVT_BUTTON(113, cMain::OnButtonClick)
EVT_BUTTON(114, cMain::OnButtonClick)
EVT_BUTTON(115, cMain::OnButtonClick)
EVT_BUTTON(116, cMain::OnButtonClick)
EVT_BUTTON(117, cMain::OnButtonClick)
EVT_BUTTON(118, cMain::OnButtonClick)
EVT_BUTTON(119, cMain::OnButtonClick)
EVT_BUTTON(120, cMain::OnButtonClick)
EVT_BUTTON(121, cMain::OnButtonClick)


wxEND_EVENT_TABLE()

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Calculator.exe", wxPoint(1100, 600), wxSize(285, 410))
{
	textBox = new wxTextCtrl(this, 100, "", wxPoint(10, 10), wxSize(185, 50));
	bttn1 = new wxButton(this, 101, "(-)", wxPoint(205, 10), wxSize(55, 50));
	//row ended
	bttn2 = new wxButton(this, 102, "MOD", wxPoint(10, 70), wxSize(55, 50));
	bttn3 = new wxButton(this, 103, "BIN", wxPoint(75, 70), wxSize(55, 50));
	bttn4 = new wxButton(this, 104, "HEX", wxPoint(140, 70), wxSize(55, 50));
	bttn5 = new wxButton(this, 105, "DEC", wxPoint(205, 70), wxSize(55, 50));
	//row ended
	bttn6 = new wxButton(this, 106, "7", wxPoint(10, 130), wxSize(55, 50));
	bttn7 = new wxButton(this, 107, "8", wxPoint(75, 130), wxSize(55, 50));
	bttn8 = new wxButton(this, 108, "9", wxPoint(140, 130), wxSize(55, 50));
	bttn9 = new wxButton(this, 109, "/", wxPoint(205, 130), wxSize(55, 50));
	//row ended
	bttn10 = new wxButton(this, 110, "4", wxPoint(10, 190), wxSize(55, 50));
	bttn11 = new wxButton(this, 111, "5", wxPoint(75, 190), wxSize(55, 50));
	bttn12 = new wxButton(this, 112, "6", wxPoint(140, 190), wxSize(55, 50));
	bttn13 = new wxButton(this, 113, "*", wxPoint(205, 190), wxSize(55, 50));
	//row ended
	bttn14 = new wxButton(this, 114, "1", wxPoint(10, 250), wxSize(55, 50));
	bttn15 = new wxButton(this, 115, "2", wxPoint(75, 250), wxSize(55, 50));
	bttn16 = new wxButton(this, 116, "3", wxPoint(140, 250), wxSize(55, 50));
	bttn17 = new wxButton(this, 117, "-", wxPoint(205, 250), wxSize(55, 50));
	//row ended
	bttn18 = new wxButton(this, 118, "C", wxPoint(10, 310), wxSize(55, 50));
	bttn19 = new wxButton(this, 119, "0", wxPoint(75, 310), wxSize(55, 50));
	bttn20 = new wxButton(this, 120, "=", wxPoint(140, 310), wxSize(55, 50));
	bttn21 = new wxButton(this, 121, "+", wxPoint(205, 310), wxSize(55, 50));




}
cMain::~cMain()
{

}
void cMain::OnButtonClick(wxCommandEvent& evt) //Handles button clicks
{
	wxButton* btn[21] =
	{
		bttn1, bttn2, bttn3, bttn4, bttn5, bttn6, bttn7, bttn8, bttn9, bttn10,
		bttn11, bttn12, bttn13, bttn14, bttn15, bttn16, bttn17, bttn18, bttn19,
		bttn20, bttn21
	};

	int id = evt.GetId();
	int i = 0;
	while (btn[i]->GetId() != id)
	{
		i++;
	}
	textBox->AppendText(btn[i]->GetLabel());
}
