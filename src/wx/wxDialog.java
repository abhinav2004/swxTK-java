package wx;

import java.awt.Point;
import java.awt.Dimension;

import wx.JNI.*;

import static wx.wxDefinations.*;

public class wxDialog extends java_wxdialog{

	static {
		System.loadLibrary("wxdialog");
	}
	
	/*
	 * Constants
	 */
	 
	/* Don't assign parent to dialog */
	public final static int wxDIALOG_NO_PARENT 					= Integer.decode("0x00000020");
	
	/* Default dialog style */
	public final static int wxDEFAULT_DIALOG_STYLE 				= (wxCAPTION | wxSYSTEM_MENU | wxCLOSE_BOX);
	
	/* Don't do any layout adaptation */
	public final static int wxDIALOG_ADAPTATION_NONE 			= 0;
	
	/*TODO: Write comment here.*/
	public final static int wxDIALOG_ADAPTATION_STANDARD_SIZER 	= 1;
	public final static int wxDIALOG_ADAPTATION_ANY_SIZER 		= 2;
	public final static int wxDIALOG_ADAPTATION_LOOSE_BUTTONS 	= 3;
	
	public final static int wxDIALOG_ADAPTATION_MODE_DEFAULT 	= 0;
	public final static int wxDIALOG_ADAPTATION_MODE_ENABLED 	= 1;
	public final static int wxDIALOG_ADAPTATION_MODE_DISABLED 	= 2;
	
	/*
	 * Member functions
	 */
	
	public wxDialog(wxPanel parent, int id, String title, Point location, Dimension size, int style, String name) {
		super(parent, id, title, (int) location.getX(), (int) location.getY(), (int) size.getWidth(), (int) size.getHeight(), style, name);
	}
	
	public wxDialog(wxPanel parent, int id, String title) {
		super(parent, id, title, 0, 0, 400, 400, wxDEFAULT_FRAME_STYLE, "default name");
	}
	
	public void center() {
		this.java_Center();
	}
	
	public void center(wxOrientation direction) {
		this.java_Center(direction.ordinal());
	}
	
	public int show() {
		return this.java_Show();
	}
	
	public int showModal() {
		return this.java_ShowModal();
	}
}
