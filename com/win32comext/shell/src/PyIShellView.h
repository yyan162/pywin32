// This file declares the IShellView Interface and Gateway for Python.
// Generated by makegw.py
// ---------------------------------------------------
//
// Interface Declaration

class PyIShellView : public PyIOleWindow
{
public:
	MAKE_PYCOM_CTOR(PyIShellView);
	static IShellView *GetI(PyObject *self);
	static PyComTypeObject type;

	// The Python methods
	static PyObject *TranslateAccelerator(PyObject *self, PyObject *args);
	static PyObject *EnableModeless(PyObject *self, PyObject *args);
	static PyObject *UIActivate(PyObject *self, PyObject *args);
	static PyObject *Refresh(PyObject *self, PyObject *args);
	static PyObject *CreateViewWindow(PyObject *self, PyObject *args);
	static PyObject *DestroyViewWindow(PyObject *self, PyObject *args);
	static PyObject *GetCurrentInfo(PyObject *self, PyObject *args);
	static PyObject *AddPropertySheetPages(PyObject *self, PyObject *args);
	static PyObject *SaveViewState(PyObject *self, PyObject *args);
	static PyObject *SelectItem(PyObject *self, PyObject *args);
	static PyObject *GetItemObject(PyObject *self, PyObject *args);

protected:
	PyIShellView(IUnknown *pdisp);
	~PyIShellView();
};
// ---------------------------------------------------
//
// Gateway Declaration

class PyGShellView : public PyGOleWindow, public IShellView
{
protected:
	PyGShellView(PyObject *instance) : PyGOleWindow(instance) { ; }
	PYGATEWAY_MAKE_SUPPORT2(PyGShellView, IShellView, IID_IShellView, PyGOleWindow)

	// IOleWindow
	STDMETHOD(GetWindow)(
		HWND __RPC_FAR * phwnd);

	STDMETHOD(ContextSensitiveHelp)(
		BOOL fEnterMode);

	// IShellView
	STDMETHOD(TranslateAccelerator)(
		MSG * pmsg);

	STDMETHOD(EnableModeless)(
		BOOL fEnable);

	STDMETHOD(UIActivate)(
		UINT uState);

	STDMETHOD(Refresh)(
		void);

	STDMETHOD(CreateViewWindow)(
		IShellView * psvPrevious,
		LPCFOLDERSETTINGS pfs,
		IShellBrowser * psb,
		RECT * prcView,
		HWND * phWnd);

	STDMETHOD(DestroyViewWindow)(
		void);

	STDMETHOD(GetCurrentInfo)(
		LPFOLDERSETTINGS pfs);

	STDMETHOD(AddPropertySheetPages)(
		DWORD dwReserved,
		LPFNSVADDPROPSHEETPAGE pfn,
		LPARAM lparam);

	STDMETHOD(SaveViewState)(
		void);

	STDMETHOD(SelectItem)(
		LPCITEMIDLIST pidlItem,
		SVSIF uFlags);

	STDMETHOD(GetItemObject)(
		UINT uItem,
		REFIID riid,
		void ** ppv);

};
