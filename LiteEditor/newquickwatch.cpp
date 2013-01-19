//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "newquickwatch.h"


// Declare the bitmap loading function
extern void wxCB786InitBitmapResources();

static bool bBitmapLoaded = false;


clDebuggerTipWindowBase::clDebuggerTipWindowBase(wxWindow* parent,long style)
    : wxPopupWindow(parent, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCB786InitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* boxSizer4 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer4);
    
    m_scrollWin6 = new wxScrolledWindow(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxHSCROLL|wxVSCROLL);
    m_scrollWin6->SetScrollRate(5, 5);
    
    boxSizer4->Add(m_scrollWin6, 1, wxEXPAND, 5);
    
    wxBoxSizer* bSizer5 = new wxBoxSizer(wxVERTICAL);
    m_scrollWin6->SetSizer(bSizer5);
    
    m_treeCtrl = new wxTreeCtrl(m_scrollWin6, wxID_ANY, wxDefaultPosition, wxSize(-1, -1), wxTR_DEFAULT_STYLE|wxTR_SINGLE|wxBORDER_NONE);
    m_treeCtrl->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_INFOBK));
    m_treeCtrl->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_INFOTEXT));
    
    bSizer5->Add(m_treeCtrl, 1, wxEXPAND, 0);
    
    m_panelStatusBar = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(-1,22), wxTAB_TRAVERSAL);
    
    boxSizer4->Add(m_panelStatusBar, 0, wxEXPAND, 2);
    
    wxBoxSizer* boxSizer42 = new wxBoxSizer(wxVERTICAL);
    m_panelStatusBar->SetSizer(boxSizer42);
    
    m_staticBitmap44 = new wxStaticBitmap(m_panelStatusBar, wxID_ANY, wxXmlResource::Get()->LoadBitmap(wxT("resize")), wxDefaultPosition, wxSize(16,16), 0 );
    
    boxSizer42->Add(m_staticBitmap44, 0, wxALL|wxALIGN_RIGHT|wxALIGN_BOTTOM, 5);
    
    
    SetSizeHints(400,300);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    Centre(wxBOTH);
    // Connect events
    m_treeCtrl->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(clDebuggerTipWindowBase::OnKeyDown), NULL, this);
    m_treeCtrl->Connect(wxEVT_LEFT_DOWN, wxMouseEventHandler(clDebuggerTipWindowBase::OnLeftDown), NULL, this);
    m_treeCtrl->Connect(wxEVT_MOTION, wxMouseEventHandler(clDebuggerTipWindowBase::OnMouseMove), NULL, this);
    m_treeCtrl->Connect(wxEVT_COMMAND_TREE_ITEM_EXPANDED, wxTreeEventHandler(clDebuggerTipWindowBase::OnItemExpanded), NULL, this);
    m_treeCtrl->Connect(wxEVT_COMMAND_TREE_ITEM_EXPANDING, wxTreeEventHandler(clDebuggerTipWindowBase::OnExpandItem), NULL, this);
    m_treeCtrl->Connect(wxEVT_COMMAND_TREE_ITEM_MENU, wxTreeEventHandler(clDebuggerTipWindowBase::OnItemMenu), NULL, this);
    m_panelStatusBar->Connect(wxEVT_LEFT_UP, wxMouseEventHandler(clDebuggerTipWindowBase::OnStatusLeftUp), NULL, this);
    m_panelStatusBar->Connect(wxEVT_MOTION, wxMouseEventHandler(clDebuggerTipWindowBase::OnStatuMotion), NULL, this);
    m_staticBitmap44->Connect(wxEVT_LEFT_DOWN, wxMouseEventHandler(clDebuggerTipWindowBase::OnTipLeftDown), NULL, this);
    m_staticBitmap44->Connect(wxEVT_ENTER_WINDOW, wxMouseEventHandler(clDebuggerTipWindowBase::OnEnterBmp), NULL, this);
    m_staticBitmap44->Connect(wxEVT_LEAVE_WINDOW, wxMouseEventHandler(clDebuggerTipWindowBase::OnLeaveBmp), NULL, this);
    
}

clDebuggerTipWindowBase::~clDebuggerTipWindowBase()
{
    m_treeCtrl->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(clDebuggerTipWindowBase::OnKeyDown), NULL, this);
    m_treeCtrl->Disconnect(wxEVT_LEFT_DOWN, wxMouseEventHandler(clDebuggerTipWindowBase::OnLeftDown), NULL, this);
    m_treeCtrl->Disconnect(wxEVT_MOTION, wxMouseEventHandler(clDebuggerTipWindowBase::OnMouseMove), NULL, this);
    m_treeCtrl->Disconnect(wxEVT_COMMAND_TREE_ITEM_EXPANDED, wxTreeEventHandler(clDebuggerTipWindowBase::OnItemExpanded), NULL, this);
    m_treeCtrl->Disconnect(wxEVT_COMMAND_TREE_ITEM_EXPANDING, wxTreeEventHandler(clDebuggerTipWindowBase::OnExpandItem), NULL, this);
    m_treeCtrl->Disconnect(wxEVT_COMMAND_TREE_ITEM_MENU, wxTreeEventHandler(clDebuggerTipWindowBase::OnItemMenu), NULL, this);
    m_panelStatusBar->Disconnect(wxEVT_LEFT_UP, wxMouseEventHandler(clDebuggerTipWindowBase::OnStatusLeftUp), NULL, this);
    m_panelStatusBar->Disconnect(wxEVT_MOTION, wxMouseEventHandler(clDebuggerTipWindowBase::OnStatuMotion), NULL, this);
    m_staticBitmap44->Disconnect(wxEVT_LEFT_DOWN, wxMouseEventHandler(clDebuggerTipWindowBase::OnTipLeftDown), NULL, this);
    m_staticBitmap44->Disconnect(wxEVT_ENTER_WINDOW, wxMouseEventHandler(clDebuggerTipWindowBase::OnEnterBmp), NULL, this);
    m_staticBitmap44->Disconnect(wxEVT_LEAVE_WINDOW, wxMouseEventHandler(clDebuggerTipWindowBase::OnLeaveBmp), NULL, this);
    
}

clDebuggerEditItemDlgBase::clDebuggerEditItemDlgBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCB786InitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* boxSizer24 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer24);
    
    m_panel32 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    
    boxSizer24->Add(m_panel32, 1, wxALL|wxEXPAND, 5);
    
    wxBoxSizer* boxSizer34 = new wxBoxSizer(wxVERTICAL);
    m_panel32->SetSizer(boxSizer34);
    
    m_staticText36 = new wxStaticText(m_panel32, wxID_ANY, _("Enter new expression:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer34->Add(m_staticText36, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5);
    
    m_textCtrl38 = new wxTextCtrl(m_panel32, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer34->Add(m_textCtrl38, 0, wxALL|wxEXPAND, 5);
    
    wxBoxSizer* boxSizer26 = new wxBoxSizer(wxHORIZONTAL);
    
    boxSizer24->Add(boxSizer26, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5);
    
    m_button28 = new wxButton(this, wxID_OK, _("&OK"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_button28->SetDefault();
    
    boxSizer26->Add(m_button28, 0, wxALL, 5);
    
    m_button30 = new wxButton(this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer26->Add(m_button30, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5);
    
    
    SetMinSize( wxSize(400,-1) );
    SetSizeHints(400,-1);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    Centre(wxBOTH);
}

clDebuggerEditItemDlgBase::~clDebuggerEditItemDlgBase()
{
}
