#include "cMain.h"

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Calculator.exe", wxPoint(1100, 600), wxSize(285, 410))
{
	textBox = new wxTextCtrl(this, 100, "", wxPoint(10, 10), wxSize(185, 50));
	bttn1 = new wxButton(this, wxID_ANY, "(-)", wxPoint(205, 10), wxSize(55, 50));
	//row ended
	bttn2 = new wxButton(this, wxID_ANY, "MOD", wxPoint(10, 70), wxSize(55, 50));
	bttn3 = new wxButton(this, wxID_ANY, "BIN", wxPoint(75, 70), wxSize(55, 50));
	bttn4 = new wxButton(this, wxID_ANY, "HEX", wxPoint(140, 70), wxSize(55, 50));
	bttn5 = new wxButton(this, wxID_ANY, "DEC", wxPoint(205, 70), wxSize(55, 50));
	//row ended
	bttn6 = new wxButton(this, wxID_ANY, "7", wxPoint(10, 130), wxSize(55, 50));
	bttn7 = new wxButton(this, wxID_ANY, "8", wxPoint(75, 130), wxSize(55, 50));
	bttn8 = new wxButton(this, wxID_ANY, "9", wxPoint(140, 130), wxSize(55, 50));
	bttn9 = new wxButton(this, wxID_ANY, "/", wxPoint(205, 130), wxSize(55, 50));
	//row ended
	bttn10 = new wxButton(this, wxID_ANY, "4", wxPoint(10, 190), wxSize(55, 50));
	bttn11 = new wxButton(this, wxID_ANY, "5", wxPoint(75, 190), wxSize(55, 50));
	bttn12 = new wxButton(this, wxID_ANY, "6", wxPoint(140, 190), wxSize(55, 50));
	bttn13 = new wxButton(this, wxID_ANY, "*", wxPoint(205, 190), wxSize(55, 50));
	//row ended
	bttn14 = new wxButton(this, wxID_ANY, "1", wxPoint(10, 250), wxSize(55, 50));
	bttn15 = new wxButton(this, wxID_ANY, "2", wxPoint(75, 250), wxSize(55, 50));
	bttn16 = new wxButton(this, wxID_ANY, "3", wxPoint(140, 250), wxSize(55, 50));
	bttn17 = new wxButton(this, wxID_ANY, "-", wxPoint(205, 250), wxSize(55, 50));
	//row ended
	bttn18 = new wxButton(this, wxID_ANY, "C", wxPoint(10, 310), wxSize(55, 50));
	bttn19 = new wxButton(this, wxID_ANY, "0", wxPoint(75, 310), wxSize(55, 50));
	bttn20 = new wxButton(this, wxID_ANY, "=", wxPoint(140, 310), wxSize(55, 50));
	bttn21 = new wxButton(this, wxID_ANY, "+", wxPoint(205, 310), wxSize(55, 50));
}
cMain::~cMain()
{

}
