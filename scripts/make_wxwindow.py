import os
import sys
import subprocess

JAVA_HOME = os.environ['JAVA_HOME']
CXX = "g++"
WXWIDGETS_CXXOP = "`wx-config --cppflags` `wx-config --libs` "
CXXOP = " -pipe -c -shared -fPIC " + WXWIDGETS_CXXOP + "-L./build/natives -I"+JAVA_HOME+"/include/ -I"+JAVA_HOME+"/include/linux/ "
SWIG = "swig -c++ -java "
JAVAC = "javac -d ./build/ "

def make_all():
	print ("\n\033[1;37mMaking wxWindow.\033[0m")
	make_swig()
	make_cpp()
	make_java()


def make_natives():
	print ("\n\033[1;37mMaking wxWindow.\033[0m")
	make_swig()
	make_cpp()

def make_swig():
	print ("\n\t\033[1;37m--> Generating SWIG interfaces for wxWindow.\033[0m")
	print ("\t" + SWIG + "-package wx.JNI -outdir src/wx/JNI src/wxwindow_module.i")
	swigproc = os.system(SWIG + "-package wx.JNI -outdir src/wx/JNI src/wxwindow_module.i")
	if swigproc is not 0:
		print ("Error! Aborting!")
		sys.exit(1)
def make_cpp():
	print ("\n\t\033[1;37m--> Compiling wxWindow C++ library.\033[0m")
	print ("\t" + CXX + CXXOP + "src/java_wxwindow.cpp -o obj/java_wxwindow.o");
	cxxproc = os.system(CXX + CXXOP + "src/java_wxwindow.cpp -o obj/java_wxwindow.o");
	if cxxproc is not 0:
		print ("Error! Aborting!")
		sys.exit(1)
	
	print ("\n\t" + CXX + CXXOP + "src/wxwindow_module_wrap.cxx -o obj/wxwindow_module_wrap.o");
	cxxproc = os.system(CXX + CXXOP + "src/wxwindow_module_wrap.cxx -o obj/wxwindow_module_wrap.o");
	if cxxproc is not 0:
		print ("Error! Aborting!")
		sys.exit(1)
	
	# Do NOT change the sequence of the arguments passed to g++. It may seem to work on your distro but may not work on others. 
	# The following code works on most of the distros like Ubuntu and Arch Linux.	
	print ("\n\t" + CXX + " -shared -fPIC " + "obj/wxwindow_module_wrap.o obj/java_wxwindow.o " + WXWIDGETS_CXXOP + "-o ./build/natives/libwxwindow.so");
	cxxproc = os.system(CXX + " -shared -fPIC " + "obj/wxwindow_module_wrap.o obj/java_wxwindow.o " + WXWIDGETS_CXXOP + "-o ./build/natives/libwxwindow.so");
	if cxxproc is not 0:
		print ("Error! Aborting!")
		sys.exit(1)
def make_java():
	print ("\n\t\033[1;37m--> Compiling wxWindow Java class.\033[0m")
	print ("\t" + JAVAC + " -cp ./src src/wx/wxWindow.java")
	javaproc = os.system("\t"+JAVAC + " -cp ./src src/wx/wxWindow.java")
	if javaproc is not 0:
		print ("Error! Aborting!")
		sys.exit(1)