#ifndef __simpletablebase__
#define __simpletablebase__

#include <wx/listctrl.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/choice.h>
#include <wx/panel.h>
#include "cl_treelistctrl.h"
#include <map>
#include "debugger.h"
#include "manager.h"
#include "debuggerobserver.h"
#include "debuggersettingsbasedlg.h"

///////////////////////////////////////////////////////////////////////////

class DbgTreeItemData : public wxTreeItemData
{
public:
    wxString _gdbId;
    size_t   _kind;
    bool     _isFake;
    wxString _retValueGdbValue;

public:
    enum {
        Locals         = 0x00000001,
        FuncArgs       = 0x00000002,
        VariableObject = 0x00000004,
        Watch          = 0x00000010,
        FuncRetValue   = 0x00000020
    };

public:
    DbgTreeItemData()
        : _kind(Locals)
        , _isFake(false)
    {}

    DbgTreeItemData(const wxString &gdbId)
        : _gdbId(gdbId)
        , _isFake(false)
    {}

    virtual ~DbgTreeItemData()
    {}
};


///////////////////////////////////////////////////////////////////////////////
/// Class SimpleTableBase
///////////////////////////////////////////////////////////////////////////////
class DebuggerTreeListCtrlBase : public LocalsTableBase
{
private:
    bool m_withButtons;

protected:
    virtual void OnDeleteWatch(wxCommandEvent& event);
    virtual void OnDeleteWatchUI(wxUpdateUIEvent& event);
    virtual void OnItemExpanding(wxTreeEvent& event);
    virtual void OnItemRightClick(wxTreeEvent& event);
    virtual void OnListEditLabelBegin(wxTreeEvent& event);
    virtual void OnListEditLabelEnd(wxTreeEvent& event);
    virtual void OnListKeyDown(wxTreeEvent& event);
    virtual void OnNewWatch(wxCommandEvent& event);
    virtual void OnNewWatchUI(wxUpdateUIEvent& event);
    virtual void OnRefresh(wxCommandEvent& event);

    std::map<wxString, wxTreeItemId> m_gdbIdToTreeId;
    std::map<wxString, wxTreeItemId> m_listChildItemId;
    std::map<wxString, wxTreeItemId> m_createVarItemId;
    DbgStackInfo                     m_curStackInfo;

protected:
    int                              m_DBG_USERR;
    int                              m_QUERY_NUM_CHILDS;
    int                              m_LIST_CHILDS;

protected:
    void OnThemeColourChanged(wxCommandEvent &e);

public:
    DebuggerTreeListCtrlBase( wxWindow* parent,
                              wxWindowID id = wxID_ANY,
                              bool withButtonsPane = true,
                              const wxPoint& pos = wxDefaultPosition,
                              const wxSize& size = wxSize( 500,300 ),
                              long style = wxTAB_TRAVERSAL );
    ~DebuggerTreeListCtrlBase();

    //////////////////////////////////////////////
    // Common to both Locals / Watches
    //////////////////////////////////////////////
    virtual IDebugger*   DoGetDebugger           ();
    virtual void         DoResetItemColour       (const wxTreeItemId& item, size_t itemKind);
    virtual void         OnEvaluateVariableObj   (const DebuggerEventData& event);
    virtual void         OnCreateVariableObjError(const DebuggerEventData& event);
    virtual void         DoRefreshItemRecursively(IDebugger *dbgr, const wxTreeItemId &item, wxArrayString &itemsToRefresh);
    virtual void         Clear                   ();
    virtual void         DoRefreshItem           (IDebugger *dbgr, const wxTreeItemId &item, bool forceCreate);
    virtual wxString     DoGetGdbId              (const wxTreeItemId& item);
    virtual wxTreeItemId DoFindItemByGdbId       (const wxString& gdbId);
    virtual void         DoDeleteWatch           (const wxTreeItemId& item);
    virtual wxTreeItemId DoFindItemByExpression  (const wxString &expr);
    virtual void         ResetTableColors        ();
    virtual wxString     GetItemPath             (const wxTreeItemId &item);
    virtual void         UpdateVariableObjects   ();

};

#endif //__simpletablebase__
