/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.12
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package wx.JNI;

public class java_wxdialog {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected java_wxdialog(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(java_wxdialog obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        wxdialog_moduleJNI.delete_java_wxdialog(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public java_wxdialog(java_wxpanel parent, int id, String title, int x, int y, int width, int height, int style, String name) {
    this(wxdialog_moduleJNI.new_java_wxdialog(java_wxpanel.getCPtr(parent), parent, id, title, x, y, width, height, style, name), true);
  }

  public void java_ShowModal() {
    wxdialog_moduleJNI.java_wxdialog_java_ShowModal(swigCPtr, this);
  }

  public void java_Show() {
    wxdialog_moduleJNI.java_wxdialog_java_Show(swigCPtr, this);
  }

  public void java_Center() {
    wxdialog_moduleJNI.java_wxdialog_java_Center__SWIG_0(swigCPtr, this);
  }

  public void java_Center(int direction) {
    wxdialog_moduleJNI.java_wxdialog_java_Center__SWIG_1(swigCPtr, this, direction);
  }

}