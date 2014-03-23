package wx;

import java.awt.Point;
import java.awt.Dimension;

import wx.JNI.*;

import static wx.wxDefinations.*;

public class wxWindow extends java_wxwindow {

	static {
		System.loadLibrary("wxwindow");
	}
	
	public wxWindow() {}
	
	public wxWindow(wxWindow parent, int id,  Point location, Dimension size, int style, String name) {
		super(parent, id,  (int) location.getX(), (int) location.getY(), (int) size.getWidth(), (int) size.getHeight(), style, name);
	}
}
