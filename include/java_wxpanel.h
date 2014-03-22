#include "java_wxwindow.h"

class java_wxpanel : public wxPanel {
public:
	java_wxpanel(java_wxwindow* parent, int id, int x, int y, int width, int height, long style, std::string name);
};

