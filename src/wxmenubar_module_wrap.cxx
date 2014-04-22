/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.0
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

#define SWIGJAVA
#define SWIG_DIRECTORS


#ifdef __cplusplus
/* SwigValueWrapper is described in swig.swg */
template<typename T> class SwigValueWrapper {
  struct SwigMovePointer {
    T *ptr;
    SwigMovePointer(T *p) : ptr(p) { }
    ~SwigMovePointer() { delete ptr; }
    SwigMovePointer& operator=(SwigMovePointer& rhs) { T* oldptr = ptr; ptr = 0; delete oldptr; ptr = rhs.ptr; rhs.ptr = 0; return *this; }
  } pointer;
  SwigValueWrapper& operator=(const SwigValueWrapper<T>& rhs);
  SwigValueWrapper(const SwigValueWrapper<T>& rhs);
public:
  SwigValueWrapper() : pointer(0) { }
  SwigValueWrapper& operator=(const T& t) { SwigMovePointer tmp(new T(t)); pointer = tmp; return *this; }
  operator T&() const { return *pointer.ptr; }
  T *operator&() { return pointer.ptr; }
};

template <typename T> T SwigValueInit() {
  return T();
}
#endif

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__))
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__))
# else
#   define SWIGUNUSED
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#  ifndef GCC_HASCLASSVISIBILITY
#    define GCC_HASCLASSVISIBILITY
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif



/* Fix for jlong on some versions of gcc on Windows */
#if defined(__GNUC__) && !defined(__INTEL_COMPILER)
  typedef long long __int64;
#endif

/* Fix for jlong on 64-bit x86 Solaris */
#if defined(__x86_64)
# ifdef _LP64
#   undef _LP64
# endif
#endif

#include <jni.h>
#include <stdlib.h>
#include <string.h>


/* Support for throwing Java exceptions */
typedef enum {
  SWIG_JavaOutOfMemoryError = 1, 
  SWIG_JavaIOException, 
  SWIG_JavaRuntimeException, 
  SWIG_JavaIndexOutOfBoundsException,
  SWIG_JavaArithmeticException,
  SWIG_JavaIllegalArgumentException,
  SWIG_JavaNullPointerException,
  SWIG_JavaDirectorPureVirtual,
  SWIG_JavaUnknownError
} SWIG_JavaExceptionCodes;

typedef struct {
  SWIG_JavaExceptionCodes code;
  const char *java_exception;
} SWIG_JavaExceptions_t;


static void SWIGUNUSED SWIG_JavaThrowException(JNIEnv *jenv, SWIG_JavaExceptionCodes code, const char *msg) {
  jclass excep;
  static const SWIG_JavaExceptions_t java_exceptions[] = {
    { SWIG_JavaOutOfMemoryError, "java/lang/OutOfMemoryError" },
    { SWIG_JavaIOException, "java/io/IOException" },
    { SWIG_JavaRuntimeException, "java/lang/RuntimeException" },
    { SWIG_JavaIndexOutOfBoundsException, "java/lang/IndexOutOfBoundsException" },
    { SWIG_JavaArithmeticException, "java/lang/ArithmeticException" },
    { SWIG_JavaIllegalArgumentException, "java/lang/IllegalArgumentException" },
    { SWIG_JavaNullPointerException, "java/lang/NullPointerException" },
    { SWIG_JavaDirectorPureVirtual, "java/lang/RuntimeException" },
    { SWIG_JavaUnknownError,  "java/lang/UnknownError" },
    { (SWIG_JavaExceptionCodes)0,  "java/lang/UnknownError" }
  };
  const SWIG_JavaExceptions_t *except_ptr = java_exceptions;

  while (except_ptr->code != code && except_ptr->code)
    except_ptr++;

  jenv->ExceptionClear();
  excep = jenv->FindClass(except_ptr->java_exception);
  if (excep)
    jenv->ThrowNew(excep, msg);
}


/* Contract support */

#define SWIG_contract_assert(nullreturn, expr, msg) if (!(expr)) {SWIG_JavaThrowException(jenv, SWIG_JavaIllegalArgumentException, msg); return nullreturn; } else

/* -----------------------------------------------------------------------------
 * director.swg
 *
 * This file contains support for director classes so that Java proxy
 * methods can be called from C++.
 * ----------------------------------------------------------------------------- */

#if defined(DEBUG_DIRECTOR_OWNED) || defined(DEBUG_DIRECTOR_EXCEPTION)
#include <iostream>
#endif

#include <exception>

namespace Swig {

  /* Java object wrapper */
  class JObjectWrapper {
  public:
    JObjectWrapper() : jthis_(NULL), weak_global_(true) {
    }

    ~JObjectWrapper() {
      jthis_ = NULL;
      weak_global_ = true;
    }

    bool set(JNIEnv *jenv, jobject jobj, bool mem_own, bool weak_global) {
      if (!jthis_) {
        weak_global_ = weak_global || !mem_own; // hold as weak global if explicitly requested or not owned
        if (jobj)
          jthis_ = weak_global_ ? jenv->NewWeakGlobalRef(jobj) : jenv->NewGlobalRef(jobj);
#if defined(DEBUG_DIRECTOR_OWNED)
        std::cout << "JObjectWrapper::set(" << jobj << ", " << (weak_global ? "weak_global" : "global_ref") << ") -> " << jthis_ << std::endl;
#endif
        return true;
      } else {
#if defined(DEBUG_DIRECTOR_OWNED)
        std::cout << "JObjectWrapper::set(" << jobj << ", " << (weak_global ? "weak_global" : "global_ref") << ") -> already set" << std::endl;
#endif
        return false;
      }
    }

    jobject get(JNIEnv *jenv) const {
#if defined(DEBUG_DIRECTOR_OWNED)
      std::cout << "JObjectWrapper::get(";
      if (jthis_)
        std::cout << jthis_;
      else
        std::cout << "null";
      std::cout << ") -> return new local ref" << std::endl;
#endif
      return (jthis_ ? jenv->NewLocalRef(jthis_) : jthis_);
    }

    void release(JNIEnv *jenv) {
#if defined(DEBUG_DIRECTOR_OWNED)
      std::cout << "JObjectWrapper::release(" << jthis_ << "): " << (weak_global_ ? "weak global ref" : "global ref") << std::endl;
#endif
      if (jthis_) {
        if (weak_global_) {
          if (jenv->IsSameObject(jthis_, NULL) == JNI_FALSE)
            jenv->DeleteWeakGlobalRef((jweak)jthis_);
        } else
          jenv->DeleteGlobalRef(jthis_);
      }

      jthis_ = NULL;
      weak_global_ = true;
    }

    /* Only call peek if you know what you are doing wrt to weak/global references */
    jobject peek() {
      return jthis_;
    }

    /* Java proxy releases ownership of C++ object, C++ object is now
       responsible for destruction (creates NewGlobalRef to pin Java proxy) */
    void java_change_ownership(JNIEnv *jenv, jobject jself, bool take_or_release) {
      if (take_or_release) {  /* Java takes ownership of C++ object's lifetime. */
        if (!weak_global_) {
          jenv->DeleteGlobalRef(jthis_);
          jthis_ = jenv->NewWeakGlobalRef(jself);
          weak_global_ = true;
        }
      } else {
	/* Java releases ownership of C++ object's lifetime */
        if (weak_global_) {
          jenv->DeleteWeakGlobalRef((jweak)jthis_);
          jthis_ = jenv->NewGlobalRef(jself);
          weak_global_ = false;
        }
      }
    }

  private:
    /* pointer to Java object */
    jobject jthis_;
    /* Local or global reference flag */
    bool weak_global_;
  };

  /* director base class */
  class Director {
    /* pointer to Java virtual machine */
    JavaVM *swig_jvm_;

  protected:
#if defined (_MSC_VER) && (_MSC_VER<1300)
    class JNIEnvWrapper;
    friend class JNIEnvWrapper;
#endif
    /* Utility class for managing the JNI environment */
    class JNIEnvWrapper {
      const Director *director_;
      JNIEnv *jenv_;
      int env_status;
    public:
      JNIEnvWrapper(const Director *director) : director_(director), jenv_(0), env_status(0) {
#if defined(__ANDROID__)
        JNIEnv **jenv = &jenv_;
#else
        void **jenv = (void **)&jenv_;
#endif
        env_status = director_->swig_jvm_->GetEnv((void **)&jenv_, JNI_VERSION_1_2);
#if defined(SWIG_JAVA_ATTACH_CURRENT_THREAD_AS_DAEMON)
        // Attach a daemon thread to the JVM. Useful when the JVM should not wait for
        // the thread to exit upon shutdown. Only for jdk-1.4 and later.
        director_->swig_jvm_->AttachCurrentThreadAsDaemon(jenv, NULL);
#else
        director_->swig_jvm_->AttachCurrentThread(jenv, NULL);
#endif
      }
      ~JNIEnvWrapper() {
#if !defined(SWIG_JAVA_NO_DETACH_CURRENT_THREAD)
        // Some JVMs, eg jdk-1.4.2 and lower on Solaris have a bug and crash with the DetachCurrentThread call.
        // However, without this call, the JVM hangs on exit when the thread was not created by the JVM and creates a memory leak.
        if (env_status == JNI_EDETACHED)
          director_->swig_jvm_->DetachCurrentThread();
#endif
      }
      JNIEnv *getJNIEnv() const {
        return jenv_;
      }
    };

    /* Java object wrapper */
    JObjectWrapper swig_self_;

    /* Disconnect director from Java object */
    void swig_disconnect_director_self(const char *disconn_method) {
      JNIEnvWrapper jnienv(this) ;
      JNIEnv *jenv = jnienv.getJNIEnv() ;
      jobject jobj = swig_self_.get(jenv);
#if defined(DEBUG_DIRECTOR_OWNED)
      std::cout << "Swig::Director::disconnect_director_self(" << jobj << ")" << std::endl;
#endif
      if (jobj && jenv->IsSameObject(jobj, NULL) == JNI_FALSE) {
        jmethodID disconn_meth = jenv->GetMethodID(jenv->GetObjectClass(jobj), disconn_method, "()V");
        if (disconn_meth) {
#if defined(DEBUG_DIRECTOR_OWNED)
          std::cout << "Swig::Director::disconnect_director_self upcall to " << disconn_method << std::endl;
#endif
          jenv->CallVoidMethod(jobj, disconn_meth);
        }
      }
      jenv->DeleteLocalRef(jobj);
    }

  public:
    Director(JNIEnv *jenv) : swig_jvm_((JavaVM *) NULL), swig_self_() {
      /* Acquire the Java VM pointer */
      jenv->GetJavaVM(&swig_jvm_);
    }

    virtual ~Director() {
      JNIEnvWrapper jnienv(this) ;
      JNIEnv *jenv = jnienv.getJNIEnv() ;
      swig_self_.release(jenv);
    }

    bool swig_set_self(JNIEnv *jenv, jobject jself, bool mem_own, bool weak_global) {
      return swig_self_.set(jenv, jself, mem_own, weak_global);
    }

    jobject swig_get_self(JNIEnv *jenv) const {
      return swig_self_.get(jenv);
    }

    // Change C++ object's ownership, relative to Java
    void swig_java_change_ownership(JNIEnv *jenv, jobject jself, bool take_or_release) {
      swig_self_.java_change_ownership(jenv, jself, take_or_release);
    }
  };


  // Utility classes and functions for exception handling.

  // Simple holder for a Java string during exception handling, providing access to a c-style string
  class JavaString {
  public:
    JavaString(JNIEnv *jenv, jstring jstr) : jenv_(jenv), jstr_(jstr), cstr_(0) {
      if (jenv_ && jstr_)
	cstr_ = (const char *) jenv_->GetStringUTFChars(jstr_, NULL);
    }

    ~JavaString() {
      if (jenv_ && jstr_ && cstr_)
	jenv_->ReleaseStringUTFChars(jstr_, cstr_);
    }

    const char *c_str(const char *null_string = "null JavaString") const {
      return cstr_ ? cstr_ : null_string;
    }

  private:
    // non-copyable
    JavaString(const JavaString &);
    JavaString &operator=(const JavaString &);

    JNIEnv *jenv_;
    jstring jstr_;
    const char *cstr_;
  };

  // Helper class to extract the exception message from a Java throwable
  class JavaExceptionMessage {
  public:
    JavaExceptionMessage(JNIEnv *jenv, jthrowable throwable) : message_(jenv, exceptionMessageFromThrowable(jenv, throwable)) {
    }

    const char *message() const {
      return message_.c_str("Could not get exception message in JavaExceptionMessage");
    }

  private:
    // non-copyable
    JavaExceptionMessage(const JavaExceptionMessage &);
    JavaExceptionMessage &operator=(const JavaExceptionMessage &);

    // Get exception message by calling Java method Throwable.getMessage()
    static jstring exceptionMessageFromThrowable(JNIEnv *jenv, jthrowable throwable) {
      jstring jmsg = NULL;
      if (jenv && throwable) {
	jenv->ExceptionClear(); // Cannot invoke methods with any pending exceptions
	jclass throwclz = jenv->GetObjectClass(throwable);
	if (throwclz) {
	  // All Throwable classes have a getMessage() method, so call it to extract the exception message
	  jmethodID getMessageMethodID = jenv->GetMethodID(throwclz, "getMessage", "()Ljava/lang/String;");
	  if (getMessageMethodID)
	    jmsg = (jstring)jenv->CallObjectMethod(throwable, getMessageMethodID);
	}
	if (jmsg == NULL && jenv->ExceptionCheck())
	  jenv->ExceptionClear();
      }
      return jmsg;
    }

    JavaString message_;
  };

  // C++ Exception class for handling Java exceptions thrown during a director method Java upcall
  class DirectorException : public std::exception {
  public:

    // Construct exception from a Java throwable
    DirectorException(JNIEnv *jenv, jthrowable throwable) : classname_(0), msg_(0) {

      // Call Java method Object.getClass().getName() to obtain the throwable's class name (delimited by '/')
      if (throwable) {
	jclass throwclz = jenv->GetObjectClass(throwable);
	if (throwclz) {
	  jclass clzclz = jenv->GetObjectClass(throwclz);
	  if (clzclz) {
	    jmethodID getNameMethodID = jenv->GetMethodID(clzclz, "getName", "()Ljava/lang/String;");
	    if (getNameMethodID) {
	      jstring jstr_classname = (jstring)(jenv->CallObjectMethod(throwclz, getNameMethodID));
              // Copy strings, since there is no guarantee that jenv will be active when handled
              if (jstr_classname) {
                JavaString jsclassname(jenv, jstr_classname);
                const char *classname = jsclassname.c_str(0);
                if (classname)
                  classname_ = copypath(classname);
              }
	    }
	  }
	}
      }

      JavaExceptionMessage exceptionmsg(jenv, throwable);
      msg_ = copystr(exceptionmsg.message());
    }

    // More general constructor for handling as a java.lang.RuntimeException
    DirectorException(const char *msg) : classname_(0), msg_(copystr(msg ? msg : "Unspecified DirectorException message")) {
    }

    ~DirectorException() throw() {
      delete[] classname_;
      delete[] msg_;
    }

    const char *what() const throw() {
      return msg_;
    }

    // Reconstruct and raise/throw the Java Exception that caused the DirectorException
    // Note that any error in the JNI exception handling results in a Java RuntimeException
    void raiseJavaException(JNIEnv *jenv) const {
      if (jenv) {
	jenv->ExceptionClear();

	jmethodID ctorMethodID = 0;
	jclass throwableclass = 0;
        if (classname_) {
          throwableclass = jenv->FindClass(classname_);
          if (throwableclass)
            ctorMethodID = jenv->GetMethodID(throwableclass, "<init>", "(Ljava/lang/String;)V");
	}

	if (ctorMethodID) {
	  jenv->ThrowNew(throwableclass, what());
	} else {
	  SWIG_JavaThrowException(jenv, SWIG_JavaRuntimeException, what());
	}
      }
    }

  private:
    static char *copypath(const char *srcmsg) {
      char *target = copystr(srcmsg);
      for (char *c=target; *c; ++c) {
        if ('.' == *c)
          *c = '/';
      }
      return target;
    }

    static char *copystr(const char *srcmsg) {
      char *target = 0;
      if (srcmsg) {
	int msglen = strlen(srcmsg) + 1;
	target = new char[msglen];
	strncpy(target, srcmsg, msglen);
      }
      return target;
    }

    const char *classname_;
    const char *msg_;
  };

  // Helper method to determine if a Java throwable matches a particular Java class type
  bool ExceptionMatches(JNIEnv *jenv, jthrowable throwable, const char *classname) {
    bool matches = false;

    if (throwable && jenv && classname) {
      // Exceptions need to be cleared for correct behavior.
      // The caller of ExceptionMatches should restore pending exceptions if desired -
      // the caller already has the throwable.
      jenv->ExceptionClear();

      jclass clz = jenv->FindClass(classname);
      if (clz) {
	jclass classclz = jenv->GetObjectClass(clz);
	jmethodID isInstanceMethodID = jenv->GetMethodID(classclz, "isInstance", "(Ljava/lang/Object;)Z");
	if (isInstanceMethodID) {
	  matches = jenv->CallBooleanMethod(clz, isInstanceMethodID, throwable) != 0;
	}
      }

#if defined(DEBUG_DIRECTOR_EXCEPTION)
      if (jenv->ExceptionCheck()) {
        // Typically occurs when an invalid classname argument is passed resulting in a ClassNotFoundException
        JavaExceptionMessage exc(jenv, jenv->ExceptionOccurred());
        std::cout << "Error: ExceptionMatches: class '" << classname << "' : " << exc.message() << std::endl;
      }
#endif
    }
    return matches;
  }

}

namespace Swig {
  namespace {
    jclass jclass_wxmenubar_moduleJNI = NULL;
    jmethodID director_methids[1];
  }
}

#include <string>


	#include <wx/wx.h>
	#include "../include/java_wxmenubar.h"



/* ---------------------------------------------------
 * C++ director class methods
 * --------------------------------------------------- */

#include "wxmenubar_module_wrap.h"

SwigDirector_java_wxmenuitem::SwigDirector_java_wxmenuitem(JNIEnv *jenv, java_wxmenu *menu, int id, std::string name) : java_wxmenuitem(menu, id, name), Swig::Director(jenv) {
}

void SwigDirector_java_wxmenuitem::OnClick() {
  JNIEnvWrapper swigjnienv(this) ;
  JNIEnv * jenv = swigjnienv.getJNIEnv() ;
  jobject swigjobj = (jobject) NULL ;
  
  if (!swig_override[0]) {
    java_wxmenuitem::OnClick();
    return;
  }
  swigjobj = swig_get_self(jenv);
  if (swigjobj && jenv->IsSameObject(swigjobj, NULL) == JNI_FALSE) {
    jenv->CallStaticVoidMethod(Swig::jclass_wxmenubar_moduleJNI, Swig::director_methids[0], swigjobj);
    jthrowable swigerror = jenv->ExceptionOccurred();
    if (swigerror) {
      jenv->ExceptionClear();
      throw Swig::DirectorException(jenv, swigerror);
    }
    
  } else {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null upcall object in java_wxmenuitem::OnClick ");
  }
  if (swigjobj) jenv->DeleteLocalRef(swigjobj);
}

SwigDirector_java_wxmenuitem::~SwigDirector_java_wxmenuitem() {
  swig_disconnect_director_self("swigDirectorDisconnect");
}


void SwigDirector_java_wxmenuitem::swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global) {
  static struct {
    const char *mname;
    const char *mdesc;
    jmethodID base_methid;
  } methods[] = {
    {
      "OnClick", "()V", NULL 
    }
  };
  
  static jclass baseclass = 0 ;
  
  if (swig_set_self(jenv, jself, swig_mem_own, weak_global)) {
    if (!baseclass) {
      baseclass = jenv->FindClass("wx/JNI/java_wxmenuitem");
      if (!baseclass) return;
      baseclass = (jclass) jenv->NewGlobalRef(baseclass);
    }
    bool derived = (jenv->IsSameObject(baseclass, jcls) ? false : true);
    for (int i = 0; i < 1; ++i) {
      if (!methods[i].base_methid) {
        methods[i].base_methid = jenv->GetMethodID(baseclass, methods[i].mname, methods[i].mdesc);
        if (!methods[i].base_methid) return;
      }
      swig_override[i] = false;
      if (derived) {
        jmethodID methid = jenv->GetMethodID(jcls, methods[i].mname, methods[i].mdesc);
        swig_override[i] = (methid != methods[i].base_methid);
        jenv->ExceptionClear();
      }
    }
  }
}



#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jlong JNICALL Java_wx_JNI_wxmenubar_1moduleJNI_new_1java_1wxmenubar(JNIEnv *jenv, jclass jcls, jint jarg1) {
  jlong jresult = 0 ;
  long arg1 ;
  java_wxmenubar *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (long)jarg1; 
  result = (java_wxmenubar *)new java_wxmenubar(arg1);
  *(java_wxmenubar **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_wx_JNI_wxmenubar_1moduleJNI_java_1wxmenubar_1java_1Append(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_, jstring jarg3) {
  java_wxmenubar *arg1 = (java_wxmenubar *) 0 ;
  java_wxmenu *arg2 = (java_wxmenu *) 0 ;
  std::string arg3 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(java_wxmenubar **)&jarg1; 
  arg2 = *(java_wxmenu **)&jarg2; 
  if(!jarg3) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return ;
  } 
  const char *arg3_pstr = (const char *)jenv->GetStringUTFChars(jarg3, 0); 
  if (!arg3_pstr) return ;
  (&arg3)->assign(arg3_pstr);
  jenv->ReleaseStringUTFChars(jarg3, arg3_pstr); 
  (arg1)->java_Append(arg2,arg3);
}


SWIGEXPORT void JNICALL Java_wx_JNI_wxmenubar_1moduleJNI_delete_1java_1wxmenubar(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  java_wxmenubar *arg1 = (java_wxmenubar *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(java_wxmenubar **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_wx_JNI_wxmenubar_1moduleJNI_new_1java_1wxmenu_1_1SWIG_10(JNIEnv *jenv, jclass jcls, jint jarg1) {
  jlong jresult = 0 ;
  long arg1 ;
  java_wxmenu *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (long)jarg1; 
  result = (java_wxmenu *)new java_wxmenu(arg1);
  *(java_wxmenu **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_wx_JNI_wxmenubar_1moduleJNI_new_1java_1wxmenu_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jstring jarg1, jint jarg2) {
  jlong jresult = 0 ;
  std::string arg1 ;
  long arg2 ;
  java_wxmenu *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  if(!jarg1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  } 
  const char *arg1_pstr = (const char *)jenv->GetStringUTFChars(jarg1, 0); 
  if (!arg1_pstr) return 0;
  (&arg1)->assign(arg1_pstr);
  jenv->ReleaseStringUTFChars(jarg1, arg1_pstr); 
  arg2 = (long)jarg2; 
  result = (java_wxmenu *)new java_wxmenu(arg1,arg2);
  *(java_wxmenu **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_wx_JNI_wxmenubar_1moduleJNI_java_1wxmenu_1java_1Append_1_1SWIG_10(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jstring jarg3) {
  java_wxmenu *arg1 = (java_wxmenu *) 0 ;
  int arg2 ;
  std::string arg3 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(java_wxmenu **)&jarg1; 
  arg2 = (int)jarg2; 
  if(!jarg3) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return ;
  } 
  const char *arg3_pstr = (const char *)jenv->GetStringUTFChars(jarg3, 0); 
  if (!arg3_pstr) return ;
  (&arg3)->assign(arg3_pstr);
  jenv->ReleaseStringUTFChars(jarg3, arg3_pstr); 
  (arg1)->java_Append(arg2,arg3);
}


SWIGEXPORT void JNICALL Java_wx_JNI_wxmenubar_1moduleJNI_java_1wxmenu_1java_1Append_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  java_wxmenu *arg1 = (java_wxmenu *) 0 ;
  java_wxmenuitem *arg2 = (java_wxmenuitem *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(java_wxmenu **)&jarg1; 
  arg2 = *(java_wxmenuitem **)&jarg2; 
  (arg1)->java_Append(arg2);
}


SWIGEXPORT void JNICALL Java_wx_JNI_wxmenubar_1moduleJNI_java_1wxmenu_1java_1Bind(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  java_wxmenu *arg1 = (java_wxmenu *) 0 ;
  java_wxmenuitem *arg2 = (java_wxmenuitem *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(java_wxmenu **)&jarg1; 
  arg2 = *(java_wxmenuitem **)&jarg2; 
  (arg1)->java_Bind(arg2);
}


SWIGEXPORT void JNICALL Java_wx_JNI_wxmenubar_1moduleJNI_delete_1java_1wxmenu(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  java_wxmenu *arg1 = (java_wxmenu *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(java_wxmenu **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_wx_JNI_wxmenubar_1moduleJNI_new_1java_1wxmenuitem(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jstring jarg3) {
  jlong jresult = 0 ;
  java_wxmenu *arg1 = (java_wxmenu *) 0 ;
  int arg2 ;
  std::string arg3 ;
  java_wxmenuitem *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(java_wxmenu **)&jarg1; 
  arg2 = (int)jarg2; 
  if(!jarg3) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  } 
  const char *arg3_pstr = (const char *)jenv->GetStringUTFChars(jarg3, 0); 
  if (!arg3_pstr) return 0;
  (&arg3)->assign(arg3_pstr);
  jenv->ReleaseStringUTFChars(jarg3, arg3_pstr); 
  result = (java_wxmenuitem *)new SwigDirector_java_wxmenuitem(jenv,arg1,arg2,arg3);
  *(java_wxmenuitem **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_wx_JNI_wxmenubar_1moduleJNI_java_1wxmenuitem_1OnClick(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  java_wxmenuitem *arg1 = (java_wxmenuitem *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(java_wxmenuitem **)&jarg1; 
  (arg1)->OnClick();
}


SWIGEXPORT void JNICALL Java_wx_JNI_wxmenubar_1moduleJNI_java_1wxmenuitem_1OnClickSwigExplicitjava_1wxmenuitem(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  java_wxmenuitem *arg1 = (java_wxmenuitem *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(java_wxmenuitem **)&jarg1; 
  (arg1)->java_wxmenuitem::OnClick();
}


SWIGEXPORT void JNICALL Java_wx_JNI_wxmenubar_1moduleJNI_java_1wxmenuitem_1click_1event_1occured(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  java_wxmenuitem *arg1 = (java_wxmenuitem *) 0 ;
  wxCommandEvent *arg2 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(java_wxmenuitem **)&jarg1; 
  arg2 = *(wxCommandEvent **)&jarg2;
  if (!arg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "wxCommandEvent & reference is null");
    return ;
  } 
  (arg1)->click_event_occured(*arg2);
}


SWIGEXPORT void JNICALL Java_wx_JNI_wxmenubar_1moduleJNI_delete_1java_1wxmenuitem(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  java_wxmenuitem *arg1 = (java_wxmenuitem *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(java_wxmenuitem **)&jarg1; 
  delete arg1;
}


SWIGEXPORT void JNICALL Java_wx_JNI_wxmenubar_1moduleJNI_java_1wxmenuitem_1director_1connect(JNIEnv *jenv, jclass jcls, jobject jself, jlong objarg, jboolean jswig_mem_own, jboolean jweak_global) {
  java_wxmenuitem *obj = *((java_wxmenuitem **)&objarg);
  (void)jcls;
  SwigDirector_java_wxmenuitem *director = dynamic_cast<SwigDirector_java_wxmenuitem *>(obj);
  if (director) {
    director->swig_connect_director(jenv, jself, jenv->GetObjectClass(jself), (jswig_mem_own == JNI_TRUE), (jweak_global == JNI_TRUE));
  }
}


SWIGEXPORT void JNICALL Java_wx_JNI_wxmenubar_1moduleJNI_java_1wxmenuitem_1change_1ownership(JNIEnv *jenv, jclass jcls, jobject jself, jlong objarg, jboolean jtake_or_release) {
  java_wxmenuitem *obj = *((java_wxmenuitem **)&objarg);
  SwigDirector_java_wxmenuitem *director = dynamic_cast<SwigDirector_java_wxmenuitem *>(obj);
  (void)jcls;
  if (director) {
    director->swig_java_change_ownership(jenv, jself, jtake_or_release ? true : false);
  }
}


SWIGEXPORT void JNICALL Java_wx_JNI_wxmenubar_1moduleJNI_swig_1module_1init(JNIEnv *jenv, jclass jcls) {
  int i;
  
  static struct {
    const char *method;
    const char *signature;
  } methods[1] = {
    {
      "SwigDirector_java_wxmenuitem_OnClick", "(Lwx/JNI/java_wxmenuitem;)V" 
    }
  };
  Swig::jclass_wxmenubar_moduleJNI = (jclass) jenv->NewGlobalRef(jcls);
  if (!Swig::jclass_wxmenubar_moduleJNI) return;
  for (i = 0; i < (int) (sizeof(methods)/sizeof(methods[0])); ++i) {
    Swig::director_methids[i] = jenv->GetStaticMethodID(jcls, methods[i].method, methods[i].signature);
    if (!Swig::director_methids[i]) return;
  }
}


#ifdef __cplusplus
}
#endif

