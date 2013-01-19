//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef NEWQUICKWATCH_BASE_CLASSES_H
#define NEWQUICKWATCH_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/popupwin.h>
#include <wx/sizer.h>
#include <wx/scrolwin.h>
#include <wx/treectrl.h>
#include <wx/panel.h>
#include <wx/statbmp.h>
#include <wx/dialog.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/button.h>

class clDebuggerTipWindowBase : public wxPopupWindow
{
protected:
    wxScrolledWindow* m_scrollWin6;
    wxTreeCtrl* m_treeCtrl;
    wxPanel* m_panelStatusBar;
    wxStaticBitmap* m_staticBitmap44;

protected:
    virtual void OnKeyDown(wxKeyEvent& event) { event.Skip(); }
    virtual void OnLeftDown(wxMouseEvent& event) { event.Skip(); }
    virtual void OnMouseMove(wxMouseEvent& event) { event.Skip(); }
    virtual void OnItemExpanded(wxTreeEvent& event) { event.Skip(); }
    virtual void OnExpandItem(wxTreeEvent& event) { event.Skip(); }
    virtual void OnItemMenu(wxTreeEvent& event) { event.Skip(); }
    virtual void OnStatusLeftUp(wxMouseEvent& event) { event.Skip(); }
    virtual void OnStatuMotion(wxMouseEvent& event) { event.Skip(); }
    virtual void OnTipLeftDown(wxMouseEvent& event) { event.Skip(); }
    virtual void OnEnterBmp(wxMouseEvent& event) { event.Skip(); }
    virtual void OnLeaveBmp(wxMouseEvent& event) { event.Skip(); }

public:
    clDebuggerTipWindowBase(wxWindow* parent, long style = wxBORDER_SIMPLE);
    virtual ~clDebuggerTipWindowBase();
};


class clDebuggerEditItemDlgBase : public wxDialog
{
protected:
    wxPanel* m_panel32;
    wxStaticText* m_staticText36;
    wxTextCtrl* m_textCtrl38;
    wxButton* m_button28;
    wxButton* m_button30;

protected:

public:
    clDebuggerEditItemDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Edit Item"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(400,-1), long style = wxDEFAULT_DIALOG_STYLE|wxSTAY_ON_TOP);
    virtual ~clDebuggerEditItemDlgBase();
};

#endif
