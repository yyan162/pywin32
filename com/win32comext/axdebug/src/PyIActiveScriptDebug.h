// This file declares the IActiveScriptDebug Interface and Gateway for Python.
// Generated by makegw.py
// ---------------------------------------------------
//
// Interface Declaration

class PyIActiveScriptDebug : public PyIUnknown
{
public:
	MAKE_PYCOM_CTOR_ERRORINFO(PyIActiveScriptDebug,IID_IActiveScriptDebug);
	static IActiveScriptDebug *GetI(PyObject *self);
	static PyComTypeObject type;

	// The Python methods
	static PyObject *GetScriptTextAttributes(PyObject *self, PyObject *args);
	static PyObject *GetScriptletTextAttributes(PyObject *self, PyObject *args);
	static PyObject *EnumCodeContextsOfPosition(PyObject *self, PyObject *args);

protected:
	PyIActiveScriptDebug(IUnknown *pdisp);
	~PyIActiveScriptDebug();
};
// ---------------------------------------------------
//
// Gateway Declaration

class PyGActiveScriptDebug : public PyGatewayBase, public IActiveScriptDebug
{
protected:
	PyGActiveScriptDebug(PyObject *instance) : PyGatewayBase(instance) { ; }
	PYGATEWAY_MAKE_SUPPORT(PyGActiveScriptDebug, IActiveScriptDebug, IID_IActiveScriptDebug)

	// IActiveScriptDebug
	STDMETHOD(GetScriptTextAttributes)(
		LPCOLESTR pstrCode,
		ULONG uNumCodeChars,
		LPCOLESTR pstrDelimiter,
		DWORD dwFlags,
		SOURCE_TEXT_ATTR __RPC_FAR * pattr);

	STDMETHOD(GetScriptletTextAttributes)(
		LPCOLESTR pstrCode,
		ULONG uNumCodeChars,
		LPCOLESTR pstrDelimiter,
		DWORD dwFlags,
		SOURCE_TEXT_ATTR __RPC_FAR * pattr);

	STDMETHOD(EnumCodeContextsOfPosition)(
#ifdef _WIN64
		DWORDLONG dwSourceContext,
#else
		DWORD dwSourceContext,
#endif
		ULONG uCharacterOffset,
		ULONG uNumChars,
		IEnumDebugCodeContexts __RPC_FAR *__RPC_FAR * ppescc);

};
