%include "std_string.i"
%include "various.i"
%include "enums.swg"
%javaconst(1);
%apply char **STRING_ARRAY { char *argv[] }
#pragma SWIG nowarn=401
%module wxwindow_module
%{
	#include <wx/wx.h>
	#include "../include/java_wxwindow.h"
%}
%include "../include/java_wxwindow.h"