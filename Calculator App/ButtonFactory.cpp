#include "ButtonFactory.h"
#include "wx/wx.h"

ButtonFactory::ButtonFactory()
{

}

ButtonFactory::~ButtonFactory()
{

}

void ButtonFactory::SetParent(wxFrame* parent) {
	_parent = parent;
}

wxFrame* ButtonFactory::GetParent() {
	return _parent;
}

wxButton* ButtonFactory::CreateNegButton(void (cMain::* handler)(wxCommandEvent& evt), cMain* main)
{
	wxButton* temp = new wxButton(_parent, 101, "(-)", wxPoint(205, 10), wxSize(55, 50));
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, handler, main);
	return temp;
}

//Row ended

wxButton* ButtonFactory::CreateModButton(void (cMain::* handler)(wxCommandEvent& evt), cMain* main)
{
	wxButton* temp = new wxButton(_parent, 102, "MOD", wxPoint(10, 70), wxSize(55, 50));
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, handler, main);
	return temp;
}

wxButton* ButtonFactory::CreateBinButton(void (cMain::* handler)(wxCommandEvent& evt), cMain* main)
{
	wxButton* temp = new wxButton(_parent, 103, "BIN", wxPoint(75, 70), wxSize(55, 50));
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, handler, main);
	return temp;
}
wxButton* ButtonFactory::CreateHexButton(void (cMain::* handler)(wxCommandEvent& evt), cMain* main)
{
	wxButton* temp = new wxButton(_parent, 104, "HEX", wxPoint(140, 70), wxSize(55, 50));
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, handler, main);
	return temp;
}

wxButton* ButtonFactory::CreateDecButton(void (cMain::* handler)(wxCommandEvent& evt), cMain* main)
{
	wxButton* temp = new wxButton(_parent, 105, "DEC", wxPoint(205, 70), wxSize(55, 50));
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, handler, main);
	return temp;
}

//Row ended

wxButton* ButtonFactory::CreateSevenButton(void (cMain::* handler)(wxCommandEvent& evt), cMain* main)
{
	wxButton* temp = new wxButton(_parent, 106, "7", wxPoint(10, 130), wxSize(55, 50));
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, handler, main);
	return temp;
}

wxButton* ButtonFactory::CreateEightButton(void (cMain::* handler)(wxCommandEvent& evt), cMain* main)
{
	wxButton* temp = new wxButton(_parent, 107, "8", wxPoint(75, 130), wxSize(55, 50));
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, handler, main);
	return temp;
}


wxButton* ButtonFactory::CreateNineButton(void (cMain::* handler)(wxCommandEvent& evt), cMain* main)
{
	wxButton* temp = new wxButton(_parent, 108, "9", wxPoint(140, 130), wxSize(55, 50));
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, handler, main);
	return temp;
}

wxButton* ButtonFactory::CreateDivButton(void (cMain::* handler)(wxCommandEvent& evt), cMain* main)
{
	wxButton* temp = new wxButton(_parent, 109, "/", wxPoint(205, 130), wxSize(55, 50));
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, handler, main);
	return temp;
}

//Row ended

wxButton* ButtonFactory::CreateFourButton(void (cMain::* handler)(wxCommandEvent& evt), cMain* main)
{
	wxButton* temp = new wxButton(_parent, 110, "4", wxPoint(10, 190), wxSize(55, 50));
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, handler, main);
	return temp;

}

wxButton* ButtonFactory::CreateFiveButton(void (cMain::* handler)(wxCommandEvent& evt), cMain* main)
{
	wxButton* temp = new wxButton(_parent, 111, "5", wxPoint(75, 190), wxSize(55, 50));
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, handler, main);
	return temp;

}

wxButton* ButtonFactory::CreateSixButton(void (cMain::* handler)(wxCommandEvent& evt), cMain* main)
{
	wxButton* temp = new wxButton(_parent, 112, "6", wxPoint(140, 190), wxSize(55, 50));
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, handler, main);
	return temp;

}

wxButton* ButtonFactory::CreateMulButton(void (cMain::* handler)(wxCommandEvent& evt), cMain* main)
{
	wxButton* temp = new wxButton(_parent, 113, "*", wxPoint(205, 190), wxSize(55, 50));
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, handler, main);
	return temp;

}

//Row ended

wxButton* ButtonFactory::CreateOneButton(void (cMain::* handler)(wxCommandEvent& evt), cMain* main)
{
	wxButton* temp = new wxButton(_parent, 114, "1", wxPoint(10, 250), wxSize(55, 50));
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, handler, main);
	return temp;

}

wxButton* ButtonFactory::CreateTwoButton(void (cMain::* handler)(wxCommandEvent& evt), cMain* main)
{
	wxButton* temp = new wxButton(_parent, 115, "2", wxPoint(75, 250), wxSize(55, 50));
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, handler, main);
	return temp;

}

wxButton* ButtonFactory::CreateThreeButton(void (cMain::* handler)(wxCommandEvent& evt), cMain* main)
{
	wxButton* temp = new wxButton(_parent, 116, "3", wxPoint(140, 250), wxSize(55, 50));
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, handler, main);
	return temp;

}

wxButton* ButtonFactory::CreateMinusButton(void (cMain::* handler)(wxCommandEvent& evt), cMain* main)
{
	wxButton* temp = new wxButton(_parent, 117, "-", wxPoint(205, 250), wxSize(55, 50));
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, handler, main);
	return temp;

}

//Row ended

wxButton* ButtonFactory::CreateClearButton(void (cMain::* handler)(wxCommandEvent& evt), cMain* main)
{
	wxButton* temp = new wxButton(_parent, 118, "C", wxPoint(10, 310), wxSize(55, 50));
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, handler, main);
	return temp;

}

wxButton* ButtonFactory::CreateZeroButton(void (cMain::* handler)(wxCommandEvent& evt), cMain* main)
{
	wxButton* temp = new wxButton(_parent, 119, "0", wxPoint(75, 310), wxSize(55, 50));
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, handler, main);
	return temp;

}

wxButton* ButtonFactory::CreateEqualButton(void (cMain::* handler)(wxCommandEvent& evt), cMain* main)
{
	wxButton* temp = new wxButton(_parent, 120, "=", wxPoint(140, 310), wxSize(55, 50));
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, handler, main);
	return temp;

}

wxButton* ButtonFactory::CreatePlusButton(void (cMain::* handler)(wxCommandEvent& evt), cMain* main)
{
	wxButton* temp = new wxButton(_parent, 121, "+", wxPoint(205, 310), wxSize(55, 50));
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, handler, main);
	return temp;
}

//Row ended

