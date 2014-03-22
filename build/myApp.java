import wx.*;

import java.awt.*;
import java.awt.event.*;

import static wx.wxDefinations.*;

class myApp extends wxApp implements ActionListener
{
	private wxFrame frame;
	private wxFrame internalframe;
	
	private wxDialog dialog;
	
	private wxButton button1;
	private wxButton button2;
	private wxMenuBar menubar;
	private wxMenu fileMenu;
	private wxMenu helpMenu;
	private wxMenuItem menuitem1;
	private wxMenuItem menuitem2;
	private wxMenuItem menuitem3;
	private wxMenuItem about;
	
	private wxPanel panel;
	
	String args[];

	@Override
	public boolean onInit() {
		frame = new wxFrame(null, wxID_ANY, "This is a Frame", new Point(0,0), new Dimension(800,600), wxDEFAULT_FRAME_STYLE, "mainFrame");
		
		panel = new wxPanel(frame, wxID_ANY);
		
		
		dialog = new wxDialog(panel, wxID_ANY, "About");
		//wxPanel dialogPanel = new wxPanel(dialog, wxID_ANY);
		
		button1 = new wxButton(panel, wxID_ANY, "Button 1", new Point(10,10), new Dimension(100,32), 1, "button");
		button1.addActionListener(this);
		
		
		
		button2 = new wxButton(panel, wxID_ANY, "Button 2", new Point(120,10), new Dimension(100,32), 1, "button 2");
		button2.addActionListener(this);
		
		
		
		menubar = new wxMenuBar();
		fileMenu = new wxMenu();
		helpMenu = new wxMenu();
		menuitem1 = new wxMenuItem(fileMenu, wxID_ANY, "&New\tCtrl+N");
		menuitem1.addActionListener(this);
		menuitem2 = new wxMenuItem(fileMenu, wxID_ANY, "&Open\tCtrl+O");
		menuitem2.addActionListener(this);
		menuitem3 = new wxMenuItem(fileMenu, wxID_ANY, "&Exit\tCtrl+Q");
		menuitem3.addActionListener(this);
		about = new wxMenuItem(helpMenu, wxID_ANY, "&About");
		about.addActionListener(this);
		fileMenu.append(menuitem1);
		fileMenu.append(menuitem2);
		fileMenu.append(menuitem3);
		helpMenu.append(about);
		menubar.append(fileMenu, "&File");
		menubar.append(helpMenu, "&Help");
		
		frame.setMenuBar(menubar);
		
		frame.show(true);
		frame.center(wxOrientation.wxHORIZONTAL);
		
		return true;
	}

	public static void main(String args[]) {
		final myApp currentInstance = new myApp();
		currentInstance.args = args;
		launch(args, currentInstance);
				
	}
	
	@Override
	public void actionPerformed(ActionEvent event) {
		if(event.getSource() == button1) {
			System.out.println("Button 1 pressed.");
		}
		else if(event.getSource() == button2) {
			System.out.println("Button 2 pressed.");
		}
		else if(event.getSource() == menuitem1) {
			internalframe = new wxFrame(frame, wxID_ANY, "This is a Internal Frame");
			internalframe.show(true);
		}
		else if(event.getSource() == menuitem2) {
			System.out.println("Opening file!");
		}
		else if(event.getSource() == menuitem3) {
			System.exit(0);
		}
		else if(event.getSource() == about) {
			dialog.showModal();
		}
	}
}