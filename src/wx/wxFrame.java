package wx;

import java.awt.Point;
import java.awt.Dimension;

import wx.JNI.*;

import static wx.wxDefinations.*;

public class wxFrame extends java_wxframe{

	static {
		System.loadLibrary("wxframe");
	}

	
	
	public wxFrame(wxFrame parent, int id, String title, Point location, Dimension size, int style, String name) {
		super(parent, id, title, (int) location.getX(), (int) location.getY(), (int) size.getWidth(), (int) size.getHeight(), style, name);
	}
	
	public wxFrame(wxFrame parent, int id, String title) {
		super(parent, id, title, 0, 0, 400, 400, wxDEFAULT_FRAME_STYLE, "default name");
	}
	
	public void center() {
		this.java_Center();
	}
	
	public void center(wxOrientation direction) {
		this.java_Center(direction.ordinal());
	}
	
	public void show(boolean val) {
		this.java_Show(val);
	}
	
	public void setMenuBar(wxMenuBar menubar) {
		this.java_SetMenuBar(menubar);
	}
}
