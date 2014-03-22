#include "java_wxpanel.h"

class java_wxdialog : public wxDialog {
public:
	java_wxdialog(java_wxpanel* parent, int id, std::string title, int x, int y, int width, int height, long style, std::string name);
	int  java_ShowModal();
	int  java_Show();
	void java_Center();
	void java_Center(int direction);
	void java_Destroy();
};

