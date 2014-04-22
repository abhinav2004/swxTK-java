%include "std_string.i"
%include "various.i"
%include "enums.swg"
%javaconst(1);
%apply char **STRING_ARRAY { char *argv[] }
%import(module="wxmenubar_module") "../include/java_wxmenubar.h"
%import(module="wxwindow_module") "../include/java_wxwindow.h"
%typemap(javabase) java_wxframe "wx.JNI.java_wxwindow";
#pragma SWIG nowarn=401
%module wxframe_module
%{
	#include <wx/wx.h>
	#include "../include/java_wxframe.h"
%}
%include "../include/java_wxframe.h"