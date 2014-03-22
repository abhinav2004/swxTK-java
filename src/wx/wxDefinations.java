package wx;

public final class wxDefinations {

	/*
	 * Definations
	 * Default wxWindow styles:
	*/

	public final static int wxMINIMIZE_BOX 			= Integer.decode ("0x0400");
	public final static int wxMAXIMIZE_BOX 			= Integer.decode ("0x0200");
	public final static int wxRESIZE_BORDER	 		= Integer.decode ("0x0040");
	public final static int wxSYSTEM_MENU 			= Integer.decode ("0x0800");
	public final static int wxCAPTION 				= Integer.decode ("0x20000000");
	public final static int wxCLOSE_BOX 			= Integer.decode ("0x1000");
	public final static int wxCLIP_CHILDREN 		= Integer.decode ("0x00400000");
	public final static int wxICONIZE 				= Integer.decode ("0x4000");
	public final static int wxMINIMIZE 				= wxICONIZE;
	public final static int wxMAXIMIZE 				= Integer.decode ("0x2000");
	public final static int wxSTAY_ON_TOP 			= Integer.decode ("0x8000");
	public final static int wxFRAME_EX_CONTEXTHELP 	= Integer.decode ("0x00000080");
	public final static int wxFRAME_EX_METAL 		= Integer.decode ("0x00000040");
	
	public final static int wxDEFAULT_FRAME_STYLE 	= wxMINIMIZE_BOX | wxMAXIMIZE_BOX | wxRESIZE_BORDER | wxSYSTEM_MENU | wxCAPTION | wxCLOSE_BOX | wxCLIP_CHILDREN;
	
	/*
	 * wxNonOwnedWindow specific styles:
	*/
	
	public final static int wxFRAME_SHAPED	 	= Integer.decode ("0x0010");
	
	/*
	 * wxFrame specific styles:
	*/
	
	public final static int wxFRAME_NO_TASKBAR		= Integer.decode ("0x0002");
	public final static int wxFRAME_TOOL_WINDOW		= Integer.decode ("0x0004");
	public final static int wxFRAME_FLOAT_ON_PARENT	= Integer.decode ("0x0008");
	
	/*
	 * wx Standard IDs
	*/
	public final static int wxID_ANY 			= -1;
	public final static int wxID_OPEN 			= 5000;
    public final static int wxID_CLOSE 			= 5001;
    public final static int wxID_NEW 			= 5002;
    public final static int wxID_SAVE			= 5003;
    public final static int wxID_SAVEAS 		= 5004;
    public final static int wxID_REVERT 		= 5005;
    public final static int wxID_EXIT 			= 5006;
    public final static int wxID_UNDO 			= 5007;
    public final static int wxID_REDO 			= 5008;
    public final static int wxID_HELP 			= 5009;
    public final static int wxID_PRINT 			= 5010;
    public final static int wxID_PRINT_SETUP 	= 5011;
    public final static int wxID_PAGE_SETUP 	= 5012;
    public final static int wxID_PREVIEW 		= 5013;
    public final static int wxID_ABOUT 			= 5014;
    public final static int wxID_HELP_CONTENTS 	= 5015;
    public final static int wxID_HELP_INDEX 	= 5016;
    public final static int wxID_HELP_SEARCH 	= 5017;
    public final static int wxID_HELP_COMMANDS 	= 5018;
    public final static int wxID_HELP_PROCEDURE	= 5019;
    public final static int wxID_HELP_CONTEXT	= 5020;
    public final static int wxID_CLOSE_ALL 		= 5021;
    public final static int wxID_PREFERENCES 	= 5022;
	
	public final static int wxID_EDIT 			= 5030;
    public final static int wxID_CUT 			= 5031;
    public final static int wxID_COPY 			= 5032;
    public final static int wxID_PASTE 			= 5033;
    public final static int wxID_CLEAR 			= 5034;
    public final static int wxID_FIND 			= 5035;
    public final static int wxID_DUPLICATE 		= 5036;
    public final static int wxID_SELECTALL 		= 5037;
    public final static int wxID_DELETE 		= 5038;
    public final static int wxID_REPLACE 		= 5039;
    public final static int wxID_REPLACE_ALL 	= 5040;
    public final static int wxID_PROPERTIES 	= 5041;

    public final static int wxID_VIEW_DETAILS 		= 5042;
    public final static int wxID_VIEW_LARGEICONS	= 5043;
    public final static int wxID_VIEW_SMALLICONS	= 5044;
    public final static int wxID_VIEW_LIST 			= 5045;
    public final static int wxID_VIEW_SORTDATE 		= 5046;
    public final static int wxID_VIEW_SORTNAME 		= 5047;
    public final static int wxID_VIEW_SORTSIZE 		= 5048;
    public final static int wxID_VIEW_SORTTYPE 		= 5049;
	
	public final static int wxID_FILE 	= 5050;
    public final static int wxID_FILE1	= 5051;
    public final static int wxID_FILE2	= 5052;
    public final static int wxID_FILE3	= 5053;
    public final static int wxID_FILE4	= 5054;
    public final static int wxID_FILE5	= 5055;
    public final static int wxID_FILE6	= 5056;
    public final static int wxID_FILE7	= 5057;
    public final static int wxID_FILE8	= 5058;
    public final static int wxID_FILE9	= 5059;
	
	/*  Standard button and menu IDs */
    public final static int wxID_OK 			= 5100;
    public final static int wxID_CANCEL 		= 5101;
    public final static int wxID_APPLY 			= 5102;
    public final static int wxID_YES 			= 5103;
    public final static int wxID_NO 			= 5104;
    public final static int wxID_STATIC			= 5105;
    public final static int wxID_FORWARD 		= 5106;
    public final static int wxID_BACKWARD 		= 5107;
    public final static int wxID_DEFAULT 		= 5108;
    public final static int wxID_MORE 			= 5109;
    public final static int wxID_SETUP 			= 5110;
    public final static int wxID_RESET 			= 5111;
    public final static int wxID_CONTEXT_HELP 	= 5112;
    public final static int wxID_YESTOALL 		= 5113;
    public final static int wxID_NOTOALL 		= 5114;
    public final static int wxID_ABORT 			= 5115;
    public final static int wxID_RETRY 			= 5116;
    public final static int wxID_IGNORE 		= 5117;
    public final static int wxID_ADD 			= 5118;
    public final static int wxID_REMOVE 		= 5119;

    public final static int wxID_UP 		= 5120;
    public final static int wxID_DOWN 		= 5121;
    public final static int wxID_HOME 		= 5122;
    public final static int wxID_REFRESH 	= 5123;
    public final static int wxID_STOP 		= 5124;
    public final static int wxID_INDEX 		= 5125;

    public final static int wxID_BOLD 				= 5126;
    public final static int wxID_ITALIC 			= 5127;
    public final static int wxID_JUSTIFY_CENTER 	= 5128;
    public final static int wxID_JUSTIFY_FILL 		= 5129;
    public final static int wxID_JUSTIFY_RIGHT 		= 5130;
    public final static int wxID_JUSTIFY_LEFT 		= 5131;
    public final static int wxID_UNDERLINE			= 5132;
    public final static int wxID_INDENT 			= 5133;
    public final static int wxID_UNINDENT 			= 5134;
    public final static int wxID_ZOOM_100 			= 5135;
    public final static int wxID_ZOOM_FIT 			= 5136;
    public final static int wxID_ZOOM_IN 			= 5137;
    public final static int wxID_ZOOM_OUT 			= 5138;
    public final static int wxID_UNDELETE 			= 5139;
    public final static int wxID_REVERT_TO_SAVED 	= 5140;
    public final static int wxID_CDROM 				= 5141;
    public final static int wxID_CONVERT 			= 5142;
    public final static int wxID_EXECUTE 			= 5143;
    public final static int wxID_FLOPPY 			= 5144;
    public final static int wxID_HARDDISK 			= 5145;
    public final static int wxID_BOTTOM 			= 5146;
    public final static int wxID_FIRST 				= 5147;
    public final static int wxID_LAST 				= 5148;
    public final static int wxID_TOP 				= 5149;
    public final static int wxID_INFO 				= 5150;
    public final static int wxID_JUMP_TO 			= 5151;
    public final static int wxID_NETWORK 			= 5152;
    public final static int wxID_SELECT_COLOR 		= 5153;
    public final static int wxID_SELECT_FONT 		= 5154;
    public final static int wxID_SORT_ASCENDING 	= 5155;
    public final static int wxID_SORT_DESCENDING 	= 5156;
    public final static int wxID_SPELL_CHECK 		= 5157;
    public final static int wxID_STRIKETHROUGH 		= 5158;

    /*  System menu IDs (used by wxUniv): */
    public final static int wxID_SYSTEM_MENU 		= 5200;
    public final static int wxID_CLOSE_FRAME 		= 5201;
    public final static int wxID_MOVE_FRAME 		= 5202;
    public final static int wxID_RESIZE_FRAME 		= 5203;
    public final static int wxID_MAXIMIZE_FRAME 	= 5204;
    public final static int wxID_ICONIZE_FRAME 		= 5205;
    public final static int wxID_RESTORE_FRAME 		= 5206;

    /* MDI window menu ids */
    public final static int wxID_MDI_WINDOW_FIRST 			= 5230;
    public final static int wxID_MDI_WINDOW_CASCADE 		= wxID_MDI_WINDOW_FIRST;
    public final static int wxID_MDI_WINDOW_TILE_HORZ 		= 5231;
    public final static int wxID_MDI_WINDOW_TILE_VERT 		= 5232;
    public final static int wxID_MDI_WINDOW_ARRANGE_ICONS 	= 5233;
    public final static int wxID_MDI_WINDOW_PREV 			= 5234;
    public final static int wxID_MDI_WINDOW_NEXT 			= 5235;
    public final static int wxID_MDI_WINDOW_LAST 			= wxID_MDI_WINDOW_NEXT;

    /* OS X system menu ids */
    public final static int wxID_OSX_MENU_FIRST 	= 5250;
    public final static int wxID_OSX_HIDE 			= wxID_OSX_MENU_FIRST;
    public final static int wxID_OSX_HIDEOTHERS 	= 5251;
    public final static int wxID_OSX_SHOWALL 		= 5252;
    public final static int wxID_OSX_MENU_LAST 		= wxID_OSX_SHOWALL;
    
    /*  IDs used by generic file dialog (13 consecutive starting from this value) */
    public final static int wxID_FILEDLGG = 5900;

    /*  IDs used by generic file ctrl (4 consecutive starting from this value) */
    public final static int wxID_FILECTRL = 5950;

    public final static int wxID_HIGHEST = 5999;
	
	/*
	 * Enums:
	*/
	
	public static enum wxOrientation {
		wxHORIZONTAL,wxVERTICAL, wxBOTH, wxORIENTATION_MASK 
	}
} 
