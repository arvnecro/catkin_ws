/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.13.2 on Tue May 12 17:25:35 2015
 */

#include "sipAPIlibrviz_sip.h"

#line 7 "yaml_config_writer.sip"
#define ROS_PACKAGE_NAME "rviz"
#include <rviz/yaml_config_writer.h>
#line 13 "/home/sudha/catkin_ws/devel/bin/sip/rviz_sip/siplibrviz_siprvizYamlConfigWriter.cpp"

#line 36 "/usr/share/sip/PyQt4/QtCore/qstring.sip"
#include <qstring.h>
#line 17 "/home/sudha/catkin_ws/devel/bin/sip/rviz_sip/siplibrviz_siprvizYamlConfigWriter.cpp"
#line 7 "config.sip"
#define ROS_PACKAGE_NAME "rviz"
#include <rviz/config.h>
#line 21 "/home/sudha/catkin_ws/devel/bin/sip/rviz_sip/siplibrviz_siprvizYamlConfigWriter.cpp"


extern "C" {static PyObject *meth_rviz_YamlConfigWriter_writeFile(PyObject *, PyObject *);}
static PyObject *meth_rviz_YamlConfigWriter_writeFile(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const rviz::Config * a0;
        const QString * a1;
        int a1State = 0;
        rviz::YamlConfigWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9J1", &sipSelf, sipType_rviz_YamlConfigWriter, &sipCpp, sipType_rviz_Config, &a0, sipType_QString,&a1, &a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->writeFile(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_YamlConfigWriter, sipName_writeFile, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_rviz_YamlConfigWriter_writeString(PyObject *, PyObject *);}
static PyObject *meth_rviz_YamlConfigWriter_writeString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const rviz::Config * a0;
        const QString& a1def = "data string";
        const QString * a1 = &a1def;
        int a1State = 0;
        rviz::YamlConfigWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9|J1", &sipSelf, sipType_rviz_YamlConfigWriter, &sipCpp, sipType_rviz_Config, &a0, sipType_QString,&a1, &a1State))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->writeString(*a0,*a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_YamlConfigWriter, sipName_writeString, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_rviz_YamlConfigWriter_error(PyObject *, PyObject *);}
static PyObject *meth_rviz_YamlConfigWriter_error(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        rviz::YamlConfigWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_rviz_YamlConfigWriter, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->error();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_YamlConfigWriter, sipName_error, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_rviz_YamlConfigWriter_errorMessage(PyObject *, PyObject *);}
static PyObject *meth_rviz_YamlConfigWriter_errorMessage(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        rviz::YamlConfigWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_rviz_YamlConfigWriter, &sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->errorMessage());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_YamlConfigWriter, sipName_errorMessage, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_rviz_YamlConfigWriter(void *, const sipTypeDef *);}
static void *cast_rviz_YamlConfigWriter(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_rviz_YamlConfigWriter)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_rviz_YamlConfigWriter(void *, int);}
static void release_rviz_YamlConfigWriter(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<rviz::YamlConfigWriter *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_rviz_YamlConfigWriter(sipSimpleWrapper *);}
static void dealloc_rviz_YamlConfigWriter(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_rviz_YamlConfigWriter(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_rviz_YamlConfigWriter(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_rviz_YamlConfigWriter(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    rviz::YamlConfigWriter *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new rviz::YamlConfigWriter();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_rviz_YamlConfigWriter[] = {
    {SIP_MLNAME_CAST(sipName_error), meth_rviz_YamlConfigWriter_error, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_errorMessage), meth_rviz_YamlConfigWriter_errorMessage, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_writeFile), meth_rviz_YamlConfigWriter_writeFile, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_writeString), meth_rviz_YamlConfigWriter_writeString, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_librviz_sip_rviz_YamlConfigWriter = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_rviz__YamlConfigWriter,
        {0}
    },
    {
        sipNameNr_YamlConfigWriter,
        {0, 255, 0},
        4, methods_rviz_YamlConfigWriter,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_rviz_YamlConfigWriter,
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
    dealloc_rviz_YamlConfigWriter,
    0,
    0,
    0,
    release_rviz_YamlConfigWriter,
    cast_rviz_YamlConfigWriter,
    0,
    0,
    0
},
    0,
    0,
    0
};
