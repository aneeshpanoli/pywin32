// This file declares the IDebugCodeContext Interface and Gateway for Python.
// Generated by makegw.py
// ---------------------------------------------------
//
// Interface Declaration

class PyIDebugCodeContext : public PyIUnknown
{
public:
	MAKE_PYCOM_CTOR_ERRORINFO(PyIDebugCodeContext, IID_IDebugCodeContext);
	static IDebugCodeContext *GetI(PyObject *self);
	static PyComTypeObject type;

	// The Python methods
	static PyObject *GetDocumentContext(PyObject *self, PyObject *args);
	static PyObject *SetBreakPoint(PyObject *self, PyObject *args);

protected:
	PyIDebugCodeContext(IUnknown *pdisp);
	~PyIDebugCodeContext();
};
// ---------------------------------------------------
//
// Gateway Declaration

class PyGDebugCodeContext : public PyGatewayBase, public IDebugCodeContext
{
protected:
	PyGDebugCodeContext(PyObject *instance) : PyGatewayBase(instance) { ; }
	PYGATEWAY_MAKE_SUPPORT(PyGDebugCodeContext, IDebugCodeContext, IID_IDebugCodeContext)

	// IDebugCodeContext
	STDMETHOD(GetDocumentContext)(
		IDebugDocumentContext __RPC_FAR *__RPC_FAR * ppsc);

	STDMETHOD(SetBreakPoint)(
		BREAKPOINT_STATE bps);

};
