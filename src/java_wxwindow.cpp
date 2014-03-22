#include <wx/wx.h>
#include "../include/java_wxwindow.h"

java_wxwindow::java_wxwindow()
{
	
}

java_wxwindow::java_wxwindow(java_wxwindow* parent, int id, int x, int y, int width, int height, long style,std::string name) : wxWindow (parent, id, wxPoint(x,y), wxSize(width, height), 0, name)
{
	
}

