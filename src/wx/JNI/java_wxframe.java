/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.0
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package wx.JNI;

public class java_wxframe extends wx.JNI.java_wxwindow {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected java_wxframe(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(java_wxframe obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        wxframe_moduleJNI.delete_java_wxframe(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public java_wxframe(java_wxwindow parent, int id, String title, int x, int y, int width, int height, int style, String name) {
    this(wxframe_moduleJNI.new_java_wxframe(java_wxwindow.getCPtr(parent), parent, id, title, x, y, width, height, style, name), true);
  }

  public void java_Show(boolean val) {
    wxframe_moduleJNI.java_wxframe_java_Show(swigCPtr, this, val);
  }

  public void java_Center() {
    wxframe_moduleJNI.java_wxframe_java_Center__SWIG_0(swigCPtr, this);
  }

  public void java_Center(int direction) {
    wxframe_moduleJNI.java_wxframe_java_Center__SWIG_1(swigCPtr, this, direction);
  }

  public void java_SetMenuBar(java_wxmenubar menubar) {
    wxframe_moduleJNI.java_wxframe_java_SetMenuBar(swigCPtr, this, java_wxmenubar.getCPtr(menubar), menubar);
  }

}
