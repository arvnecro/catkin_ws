/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.13.2 on Tue May 12 17:25:35 2015
 */

#include "sipAPIlibrviz_sip.h"

#line 7 "ogre_logging.sip"
#define ROS_PACKAGE_NAME "rviz"
#include <rviz/ogre_helpers/ogre_logging.h>
#line 13 "/home/sudha/catkin_ws/devel/bin/sip/rviz_sip/siplibrviz_siprvizOgreLogging.cpp"

#line 36 "/usr/share/sip/PyQt4/QtCore/qstring.sip"
#include <qstring.h>
#line 17 "/home/sudha/catkin_ws/devel/bin/sip/rviz_sip/siplibrviz_siprvizOgreLogging.cpp"


extern "C" {static PyObject *meth_rviz_OgreLogging_useRosLog(PyObject *, PyObject *);}
static PyObject *meth_rviz_OgreLogging_useRosLog(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            rviz::OgreLogging::useRosLog();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_OgreLogging, sipName_useRosLog, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_rviz_OgreLogging_useLogFile(PyObject *, PyObject *);}
static PyObject *meth_rviz_OgreLogging_useLogFile(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString& a0def = "Ogre.log";
        const QString * a0 = &a0def;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "|J1", sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            rviz::OgreLogging::useLogFile(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_OgreLogging, sipName_useLogFile, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_rviz_OgreLogging_noLog(PyObject *, PyObject *);}
static PyObject *meth_rviz_OgreLogging_noLog(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            rviz::OgreLogging::noLog();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_OgreLogging, sipName_noLog, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_rviz_OgreLogging(void *, const sipTypeDef *);}
static void *cast_rviz_OgreLogging(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_rviz_OgreLogging)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_rviz_OgreLogging(void *, int);}
static void release_rviz_OgreLogging(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<rviz::OgreLogging *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_rviz_OgreLogging(sipSimpleWrapper *);}
static void dealloc_rviz_OgreLogging(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_rviz_OgreLogging(sipGetAddress(sipSelf),0);
    }
}


static PyMethodDef methods_rviz_OgreLogging[] = {
    {SIP_MLNAME_CAST(sipName_noLog), meth_rviz_OgreLogging_noLog, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_useLogFile), meth_rviz_OgreLogging_useLogFile, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_useRosLog), meth_rviz_OgreLogging_useRosLog, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_librviz_sip_rviz_OgreLogging = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_rviz__OgreLogging,
        {0}
    },
    {
        sipNameNr_OgreLogging,
        {0, 255, 0},
        3, methods_rviz_OgreLogging,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    0,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_rviz_OgreLogging,
    0,
    0,
    0,
    release_rviz_OgreLogging,
    cast_rviz_OgreLogging,
    0,
    0,
    0
},
    0,
    0,
    0
};
