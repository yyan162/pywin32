// This file declares the IBackgroundCopyManager Interface for Python.
// Generated by makegw.py
// ---------------------------------------------------
//
// Interface Declaration

class PyIBackgroundCopyManager : public PyIUnknown
{
public:
	MAKE_PYCOM_CTOR(PyIBackgroundCopyManager);
	static IBackgroundCopyManager *GetI(PyObject *self);
	static PyComTypeObject type;

	// The Python methods
	static PyObject *CreateJob(PyObject *self, PyObject *args);
	static PyObject *GetJob(PyObject *self, PyObject *args);
	static PyObject *EnumJobs(PyObject *self, PyObject *args);
	static PyObject *GetErrorDescription(PyObject *self, PyObject *args);

protected:
	PyIBackgroundCopyManager(IUnknown *pdisp);
	~PyIBackgroundCopyManager();
};
