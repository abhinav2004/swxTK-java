#include <wx/wx.h>
#include "../include/java_wxdialog.h"

java_wxdialog::java_wxdialog(java_wxpanel* parent, int id, std::string title, int x, int y, int width, int height, long style,std::string name) : wxDialog (parent, id, wxString::FromUTF8(title.c_str()), wxPoint(x,y), wxSize(width, height), wxDEFAULT_DIALOG_STYLE, wxString::FromUTF8(name.c_str()))
{
	
}

int java_wxdialog::java_Show()
{
	std::cout << wxID_OPEN;
	return wxDialog::Show();
}

int java_wxdialog::java_ShowModal()
{
	return wxDialog::ShowModal();
}

void java_wxdialog::java_Center()
{
	wxDialog::Center();
}

void java_wxdialog::java_Center(int direction)
{
	wxDialog::Center(direction);
}

void java_wxdialog::java_Destroy()
{
	wxDialog::Destroy();
}