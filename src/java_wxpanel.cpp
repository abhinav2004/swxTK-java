#include <wx/wx.h>
#include "../include/java_wxpanel.h"

java_wxpanel::java_wxpanel(java_wxframe* parent, int id, int x, int y, int width, int height, long style,std::string name) : wxPanel (dynamic_cast<wxWindow*>(parent), id, wxPoint(x,y), wxSize(width, height), wxTAB_TRAVERSAL, name)
{
	std::cout << parent << std::endl ;
}

