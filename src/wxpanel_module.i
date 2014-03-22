%include "std_string.i"
%include "various.i"
%include "enums.swg"
%javaconst(1);
%apply char **STRING_ARRAY { char *argv[] }
%import(module="wxwindow_module") "../include/java_wxwindow.h"
%typemap(javabase) java_wxpanel "wx.wxWindow";
#pragma SWIG nowarn=401
%module wxpanel_module
%{
	#include <wx/wx.h>
	#include "../include/java_wxpanel.h"
%}
%include "../include/java_wxpanel.h"