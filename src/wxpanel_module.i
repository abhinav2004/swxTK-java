%include "std_string.i"
%include "various.i"
%include "enums.swg"
%javaconst(1);
%apply char **STRING_ARRAY { char *argv[] }
%import(module="wxframe_module") "../include/java_wxframe.h"
%typemap(javabase) java_wxpanel "wx.JNI.java_wxwindow";
#pragma SWIG nowarn=401
%module wxpanel_module
%{
	#include <wx/wx.h>
	#include "../include/java_wxpanel.h"
%}
%include "../include/java_wxpanel.h"