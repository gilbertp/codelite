//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "debuggersettingsbasedlg.h"


// Declare the bitmap loading function
extern void wxCrafter6v4fW1InitBitmapResources();

static bool bBitmapLoaded = false;


DebuggerSettingsBaseDlg::DebuggerSettingsBaseDlg(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCrafter6v4fW1InitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* bSizer1 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(bSizer1);
    
    m_treebook2 = new wxTreebook(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxBK_DEFAULT);
    
    bSizer1->Add(m_treebook2, 1, wxALL|wxEXPAND, 5);
    
    m_staticline1 = new wxStaticLine(this, wxID_ANY, wxDefaultPosition, wxSize(-1, -1), wxLI_HORIZONTAL);
    
    bSizer1->Add(m_staticline1, 0, wxALL|wxEXPAND, 5);
    
    wxBoxSizer* bSizer2 = new wxBoxSizer(wxHORIZONTAL);
    
    bSizer1->Add(bSizer2, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5);
    
    m_buttonOK = new wxButton(this, wxID_OK, _("&OK"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_buttonOK->SetDefault();
    
    bSizer2->Add(m_buttonOK, 0, wxALL, 5);
    
    m_buttonCancel = new wxButton(this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    bSizer2->Add(m_buttonCancel, 0, wxALL, 5);
    
    SetSizeHints(-1,-1);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    Centre();
    // Connect events
    m_buttonCancel->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DebuggerSettingsBaseDlg::OnButtonCancel), NULL, this);
    
}

DebuggerSettingsBaseDlg::~DebuggerSettingsBaseDlg()
{
    m_buttonCancel->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DebuggerSettingsBaseDlg::OnButtonCancel), NULL, this);
    
}

DbgPageStartupCmdsBase::DbgPageStartupCmdsBase(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style)
    : wxPanel(parent, id, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCrafter6v4fW1InitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* bSizer7 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(bSizer7);
    
    m_textCtrlStartupCommands = new wxTextCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1, -1), wxTE_RICH2|wxTE_PROCESS_TAB|wxTE_PROCESS_ENTER|wxTE_MULTILINE);
    wxFont m_textCtrlStartupCommandsFont(10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Sans"));
    m_textCtrlStartupCommands->SetFont(m_textCtrlStartupCommandsFont);
    
    bSizer7->Add(m_textCtrlStartupCommands, 1, wxALL|wxEXPAND, 5);
    
    SetSizeHints(-1,-1);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    Centre(wxBOTH);
}

DbgPageStartupCmdsBase::~DbgPageStartupCmdsBase()
{
}

PreDefinedTypesPageBase::PreDefinedTypesPageBase(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style)
    : wxPanel(parent, id, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCrafter6v4fW1InitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* bSizer11 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(bSizer11);
    
    m_panel2 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(-1, -1), wxTAB_TRAVERSAL);
    
    bSizer11->Add(m_panel2, 1, wxEXPAND, 5);
    
    wxBoxSizer* bSizer4 = new wxBoxSizer(wxVERTICAL);
    m_panel2->SetSizer(bSizer4);
    
    wxBoxSizer* bSizer5 = new wxBoxSizer(wxHORIZONTAL);
    
    bSizer4->Add(bSizer5, 1, wxEXPAND, 5);
    
    m_listCtrl1 = new wxListCtrl(m_panel2, wxID_ANY, wxDefaultPosition, wxSize(-1, -1), wxLC_VRULES|wxLC_HRULES|wxLC_SINGLE_SEL|wxLC_REPORT);
    
    bSizer5->Add(m_listCtrl1, 1, wxALL|wxEXPAND, 5);
    
    wxBoxSizer* bSizer6 = new wxBoxSizer(wxVERTICAL);
    
    bSizer5->Add(bSizer6, 0, wxEXPAND, 5);
    
    m_buttonNewType = new wxButton(m_panel2, wxID_ANY, _("&New..."), wxDefaultPosition, wxSize(-1, -1), 0);
    
    bSizer6->Add(m_buttonNewType, 0, wxALL|wxEXPAND, 5);
    
    m_buttonEdit = new wxButton(m_panel2, wxID_ANY, _("Edit..."), wxDefaultPosition, wxSize(-1, -1), 0);
    
    bSizer6->Add(m_buttonEdit, 0, wxALL|wxEXPAND, 5);
    
    m_buttonDelete = new wxButton(m_panel2, wxID_ANY, _("&Delete"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    bSizer6->Add(m_buttonDelete, 0, wxALL|wxEXPAND, 5);
    
    SetSizeHints(-1,-1);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    Centre(wxBOTH);
    // Connect events
    m_listCtrl1->Connect(wxEVT_COMMAND_LIST_ITEM_ACTIVATED, wxListEventHandler(PreDefinedTypesPageBase::OnItemActivated), NULL, this);
    m_listCtrl1->Connect(wxEVT_COMMAND_LIST_ITEM_DESELECTED, wxListEventHandler(PreDefinedTypesPageBase::OnItemDeselected), NULL, this);
    m_listCtrl1->Connect(wxEVT_COMMAND_LIST_ITEM_SELECTED, wxListEventHandler(PreDefinedTypesPageBase::OnItemSelected), NULL, this);
    m_buttonNewType->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PreDefinedTypesPageBase::OnNewShortcut), NULL, this);
    m_buttonEdit->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PreDefinedTypesPageBase::OnEditShortcut), NULL, this);
    m_buttonDelete->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PreDefinedTypesPageBase::OnDeleteShortcut), NULL, this);
    
}

PreDefinedTypesPageBase::~PreDefinedTypesPageBase()
{
    m_listCtrl1->Disconnect(wxEVT_COMMAND_LIST_ITEM_ACTIVATED, wxListEventHandler(PreDefinedTypesPageBase::OnItemActivated), NULL, this);
    m_listCtrl1->Disconnect(wxEVT_COMMAND_LIST_ITEM_DESELECTED, wxListEventHandler(PreDefinedTypesPageBase::OnItemDeselected), NULL, this);
    m_listCtrl1->Disconnect(wxEVT_COMMAND_LIST_ITEM_SELECTED, wxListEventHandler(PreDefinedTypesPageBase::OnItemSelected), NULL, this);
    m_buttonNewType->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PreDefinedTypesPageBase::OnNewShortcut), NULL, this);
    m_buttonEdit->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PreDefinedTypesPageBase::OnEditShortcut), NULL, this);
    m_buttonDelete->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PreDefinedTypesPageBase::OnDeleteShortcut), NULL, this);
    
}

NewPreDefinedSetBaseDlg::NewPreDefinedSetBaseDlg(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCrafter6v4fW1InitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* bSizer17 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(bSizer17);
    
    wxFlexGridSizer* fgSizer2 = new wxFlexGridSizer(  0, 2, 0, 0);
    fgSizer2->SetFlexibleDirection( wxBOTH );
    fgSizer2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    fgSizer2->AddGrowableCol(1);
    
    bSizer17->Add(fgSizer2, 0, wxEXPAND, 5);
    
    m_staticText3 = new wxStaticText(this, wxID_ANY, _("Name:"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    fgSizer2->Add(m_staticText3, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);
    
    m_textCtrlName = new wxTextCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1, -1), wxTE_RICH2);
    
    fgSizer2->Add(m_textCtrlName, 0, wxALL|wxEXPAND, 5);
    
    m_staticText4 = new wxStaticText(this, wxID_ANY, _("Copy Values From:"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    fgSizer2->Add(m_staticText4, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);
    
    wxArrayString m_choiceCopyFromArr;
    m_choiceCopyFrom = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxSize(-1, -1), m_choiceCopyFromArr, 0);
    
    fgSizer2->Add(m_choiceCopyFrom, 0, wxALL|wxEXPAND, 5);
    
    fgSizer2->Add(0, 0, 0, wxEXPAND, 5);
    
    m_checkBoxMakeActive = new wxCheckBox(this, wxID_ANY, _("Make this 'PreDefined Types' set active"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_checkBoxMakeActive->SetValue(false);
    
    fgSizer2->Add(m_checkBoxMakeActive, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5);
    
    bSizer17->Add(0, 0, 1, wxEXPAND, 5);
    
    m_staticline2 = new wxStaticLine(this, wxID_ANY, wxDefaultPosition, wxSize(-1, -1), wxLI_HORIZONTAL);
    
    bSizer17->Add(m_staticline2, 0, wxALL|wxEXPAND, 5);
    
    wxBoxSizer* bSizer18 = new wxBoxSizer(wxHORIZONTAL);
    
    bSizer17->Add(bSizer18, 0, wxALIGN_CENTER_HORIZONTAL, 5);
    
    m_button9 = new wxButton(this, wxID_OK, _("&OK"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_button9->SetDefault();
    
    bSizer18->Add(m_button9, 0, wxALL, 5);
    
    m_button10 = new wxButton(this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    bSizer18->Add(m_button10, 0, wxALL, 5);
    
    SetSizeHints(-1,-1);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    Centre(wxBOTH);
}

NewPreDefinedSetBaseDlg::~NewPreDefinedSetBaseDlg()
{
}

DbgPageGeneralBase::DbgPageGeneralBase(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style)
    : wxPanel(parent, id, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCrafter6v4fW1InitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* bSizer18 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(bSizer18);
    
    m_panel6 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(-1, -1), wxTAB_TRAVERSAL);
    
    bSizer18->Add(m_panel6, 1, wxALL|wxEXPAND, 5);
    
    wxBoxSizer* bSizer16 = new wxBoxSizer(wxVERTICAL);
    m_panel6->SetSizer(bSizer16);
    
    wxBoxSizer* bSizer10 = new wxBoxSizer(wxHORIZONTAL);
    
    bSizer16->Add(bSizer10, 0, wxEXPAND, 5);
    
    m_staticText1 = new wxStaticText(m_panel6, wxID_ANY, _("Debugger path:"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    bSizer10->Add(m_staticText1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);
    
    m_textCtrDbgPath = new wxTextCtrl(m_panel6, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1, -1), wxTE_RICH2);
    
    bSizer10->Add(m_textCtrDbgPath, 1, wxLEFT|wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 5);
    
    m_buttonBrowse = new wxButton(m_panel6, wxID_ANY, _("Browse"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    bSizer10->Add(m_buttonBrowse, 0, wxRIGHT|wxTOP|wxBOTTOM, 5);
    
    wxStaticBoxSizer* sbSizer1 = new wxStaticBoxSizer( new wxStaticBox(m_panel6, wxID_ANY, _("Options:")), wxVERTICAL);
    
    bSizer16->Add(sbSizer1, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 5);
    
    wxGridSizer* gSizer3 = new wxGridSizer(  0, 1, 0, 0);
    
    sbSizer1->Add(gSizer3, 0, wxEXPAND, 5);
    
    m_checkBoxEnablePendingBreakpoints = new wxCheckBox(m_panel6, wxID_ANY, _("Enable pending breakpoints"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_checkBoxEnablePendingBreakpoints->SetValue(false);
    m_checkBoxEnablePendingBreakpoints->SetToolTip(_("Some breakpoints can't be applied before the program is run, or even later. This is especially a problem when trying to debug inside a library that is dynamically loaded (CodeLite itself contains examples of this).\n\ngdb has an option to 'remember' any breakpoints that it can't initially set, and automatically to set them when it becomes possible. It doesn't always work! However, tick this box to tell gdb to try."));
    
    gSizer3->Add(m_checkBoxEnablePendingBreakpoints, 0, wxALL, 5);
    
    m_checkBoxSetBreakpointsAfterMain = new wxCheckBox(m_panel6, wxID_ANY, _("Apply breakpoints after main function is hit"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_checkBoxSetBreakpointsAfterMain->SetValue(false);
    m_checkBoxSetBreakpointsAfterMain->SetToolTip(_("Sometimes, some breakpoints won't apply cleanly until after main() has been reached. If this box is ticked, CodeLite won't try to apply them earlier."));
    
    gSizer3->Add(m_checkBoxSetBreakpointsAfterMain, 0, wxALL, 5);
    
    m_checkBreakAtWinMain = new wxCheckBox(m_panel6, wxID_ANY, _("Automatically set breakpoint at main"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_checkBreakAtWinMain->SetValue(false);
    m_checkBreakAtWinMain->SetToolTip(_("Every time the debugger runs, set a breakpoint at main(). You may wish to stop then anyway; but it's especially useful when you want to set breakpoints that won't 'take' earlier (however, first try enabling Pending breakpoints, or 'Apply breakpoints after main is hit'"));
    
    gSizer3->Add(m_checkBreakAtWinMain, 0, wxALL, 5);
    
    m_catchThrow = new wxCheckBox(m_panel6, wxID_ANY, _("Break when C++ exception is thrown"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_catchThrow->SetValue(false);
    
    gSizer3->Add(m_catchThrow, 0, wxALL, 5);
    
    m_raiseOnBpHit = new wxCheckBox(m_panel6, wxID_ANY, _("Raise CodeLite when a breakpoint is hit"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_raiseOnBpHit->SetValue(true);
    m_raiseOnBpHit->SetToolTip(_("Normally, when a breakpoint is hit, you'll want CodeLite to be raise to the top of the window z-order, so that you can examine values of variables etc.\nHowever you won't always want that to happen; in particular, not if the breakpoint has commands, which end in 'continue'. If so untick this box to stop it happening."));
    
    gSizer3->Add(m_raiseOnBpHit, 0, wxALL, 5);
    
    wxStaticBoxSizer* sbSizer4 = new wxStaticBoxSizer( new wxStaticBox(m_panel6, wxID_ANY, _("Debugger Tooltip:")), wxVERTICAL);
    
    bSizer16->Add(sbSizer4, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 5);
    
    wxGridSizer* gSizer31 = new wxGridSizer(  2, 1, 0, 0);
    
    sbSizer4->Add(gSizer31, 0, wxEXPAND, 5);
    
    m_showTooltipsRequiresControl = new wxCheckBox(m_panel6, wxID_ANY, _("Use CTRL key to evaluate expressions under the cursor"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_showTooltipsRequiresControl->SetValue(true);
    m_showTooltipsRequiresControl->SetToolTip(_("When enabled, codelite will evaluate the expression under the cursor only if the CTRL key is down. \nOtherwise, it will evaluate it automatically"));
    
    gSizer31->Add(m_showTooltipsRequiresControl, 0, wxALL|wxEXPAND, 5);
    
    m_checkBoxAutoExpand = new wxCheckBox(m_panel6, wxID_ANY, _("Auto expand items under the cursor"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_checkBoxAutoExpand->SetValue(false);
    
    gSizer31->Add(m_checkBoxAutoExpand, 0, wxALL|wxEXPAND, 5);
    
    wxStaticBoxSizer* sbSizer3 = new wxStaticBoxSizer( new wxStaticBox(m_panel6, wxID_ANY, _("Display:")), wxHORIZONTAL);
    
    bSizer16->Add(sbSizer3, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 5);
    
    wxFlexGridSizer* fgSizer21 = new wxFlexGridSizer(  0, 2, 0, 0);
    fgSizer21->SetFlexibleDirection( wxBOTH );
    fgSizer21->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    
    sbSizer3->Add(fgSizer21, 0, wxEXPAND, 5);
    
    m_staticText2 = new wxStaticText(m_panel6, wxID_ANY, _("Number of elements to display for arrays / strings:"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_staticText2->SetToolTip(_("For no limit, set it to 0"));
    
    fgSizer21->Add(m_staticText2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);
    
    m_spinCtrlNumElements = new wxSpinCtrl(m_panel6, wxID_ANY, wxT("200"), wxDefaultPosition, wxSize(-1, -1), wxSP_ARROW_KEYS);
    m_spinCtrlNumElements->SetToolTip(_("For no limit, set it to 0"));
    m_spinCtrlNumElements->SetRange(0, 10000);
    m_spinCtrlNumElements->SetValue(200);
    
    fgSizer21->Add(m_spinCtrlNumElements, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);
    
    m_checkBoxExpandLocals = new wxCheckBox(m_panel6, wxID_ANY, _("Use 'PreDefined types for the 'Locals' view"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_checkBoxExpandLocals->SetValue(false);
    
    fgSizer21->Add(m_checkBoxExpandLocals, 0, wxALL|wxEXPAND, 5);
    
    fgSizer21->Add(0, 0, 1, wxEXPAND, 5);
    
    m_checkBoxCharArrAsPtr = new wxCheckBox(m_panel6, wxID_ANY, _("Auto cast 'char[]' into 'char*'"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_checkBoxCharArrAsPtr->SetValue(false);
    
    fgSizer21->Add(m_checkBoxCharArrAsPtr, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5);
    
    fgSizer21->Add(0, 0, 1, wxEXPAND, 5);
    
    SetSizeHints(-1,-1);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    Centre(wxBOTH);
    // Connect events
    m_buttonBrowse->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DbgPageGeneralBase::OnBrowse), NULL, this);
    
}

DbgPageGeneralBase::~DbgPageGeneralBase()
{
    m_buttonBrowse->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DbgPageGeneralBase::OnBrowse), NULL, this);
    
}

DbgPageMiscBase::DbgPageMiscBase(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style)
    : wxPanel(parent, id, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCrafter6v4fW1InitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* bSizer19 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(bSizer19);
    
    m_panel7 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(-1, -1), wxTAB_TRAVERSAL);
    
    bSizer19->Add(m_panel7, 1, wxALL|wxEXPAND, 5);
    
    wxBoxSizer* bSizer17 = new wxBoxSizer(wxVERTICAL);
    m_panel7->SetSizer(bSizer17);
    
    wxStaticBoxSizer* sbSizer2 = new wxStaticBoxSizer( new wxStaticBox(m_panel7, wxID_ANY, wxT("")), wxVERTICAL);
    
    bSizer17->Add(sbSizer2, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 5);
    
    wxBoxSizer* boxSizer10 = new wxBoxSizer(wxVERTICAL);
    
    sbSizer2->Add(boxSizer10, 1, wxALL|wxEXPAND, 5);
    
    m_checkUseRelativePaths = new wxCheckBox(m_panel7, wxID_ANY, _("Use file name only for breakpoints (NO full paths)"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_checkUseRelativePaths->SetValue(false);
    
    boxSizer10->Add(m_checkUseRelativePaths, 0, wxALL, 5);
    
    m_checkBoxEnableLog = new wxCheckBox(m_panel7, wxID_ANY, _("Enable full debugger logging"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_checkBoxEnableLog->SetValue(false);
    
    boxSizer10->Add(m_checkBoxEnableLog, 0, wxALL, 5);
    
    m_checkShowTerminal = new wxCheckBox(m_panel7, wxID_ANY, _("Show debugger terminal"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_checkShowTerminal->SetValue(false);
    
    boxSizer10->Add(m_checkShowTerminal, 0, wxALL, 5);
    
    wxBoxSizer* boxSizer4 = new wxBoxSizer(wxHORIZONTAL);
    
    boxSizer10->Add(boxSizer4, 0, wxEXPAND, 5);
    
    m_staticText6 = new wxStaticText(m_panel7, wxID_ANY, _("Max number of frames to allow in a call-stack"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer4->Add(m_staticText6, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5);
    
    m_maxFramesSpinCtrl = new wxSpinCtrl(m_panel7, wxID_ANY, wxT("500"), wxDefaultPosition, wxSize(70,-1), wxSP_ARROW_KEYS);
    m_maxFramesSpinCtrl->SetToolTip(_("The maximum number of frames that CodeLite will display in the Call Stack tab. This protects against a very long hang while trying to show 100,000 frames in an infinite recursion situation."));
    m_maxFramesSpinCtrl->SetRange(1, 999999);
    m_maxFramesSpinCtrl->SetValue(500);
    
    boxSizer4->Add(m_maxFramesSpinCtrl, 0, wxALL, 5);
    
    wxStaticBoxSizer* sbSizer6 = new wxStaticBoxSizer( new wxStaticBox(m_panel7, wxID_ANY, _("MinGW / Cygwin:")), wxVERTICAL);
    
    bSizer17->Add(sbSizer6, 0, wxLEFT|wxRIGHT|wxEXPAND, 5);
    
    wxGridSizer* gSizer5 = new wxGridSizer(  0, 1, 0, 0);
    
    sbSizer6->Add(gSizer5, 0, wxEXPAND, 5);
    
    m_checkBoxDebugAssert = new wxCheckBox(m_panel7, wxID_ANY, _("Break at assertion failure (MinGW only)"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_checkBoxDebugAssert->SetValue(false);
    
    gSizer5->Add(m_checkBoxDebugAssert, 0, wxALL|wxEXPAND, 5);
    
    m_staticText5 = new wxStaticText(m_panel7, wxID_ANY, _("Cygwin path conversion command:"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_staticText5->SetToolTip(_("Set here the command to use in order to convert cygwin paths into native Windows paths (use $(File) as a place holder for the file name)"));
    
    gSizer5->Add(m_staticText5, 0, wxLEFT|wxRIGHT|wxTOP|wxALIGN_CENTER_VERTICAL, 5);
    
    m_textCtrlCygwinPathCommand = new wxTextCtrl(m_panel7, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1, -1), wxTE_RICH2);
    m_textCtrlCygwinPathCommand->SetToolTip(_("Set here the command to use in order to convert cygwin paths into native Windows paths (use $(File) as a place holder for the file name)"));
    
    gSizer5->Add(m_textCtrlCygwinPathCommand, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5);
    
    SetSizeHints(-1,-1);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    Centre(wxBOTH);
    // Connect events
    m_checkBoxDebugAssert->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(DbgPageMiscBase::OnDebugAssert), NULL, this);
    m_checkBoxDebugAssert->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DbgPageMiscBase::OnWindowsUI), NULL, this);
    m_staticText5->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DbgPageMiscBase::OnWindowsUI), NULL, this);
    m_textCtrlCygwinPathCommand->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DbgPageMiscBase::OnWindowsUI), NULL, this);
    
}

DbgPageMiscBase::~DbgPageMiscBase()
{
    m_checkBoxDebugAssert->Disconnect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(DbgPageMiscBase::OnDebugAssert), NULL, this);
    m_checkBoxDebugAssert->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DbgPageMiscBase::OnWindowsUI), NULL, this);
    m_staticText5->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DbgPageMiscBase::OnWindowsUI), NULL, this);
    m_textCtrlCygwinPathCommand->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DbgPageMiscBase::OnWindowsUI), NULL, this);
    
}

DbgPagePreDefTypesBase::DbgPagePreDefTypesBase(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style)
    : wxPanel(parent, id, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCrafter6v4fW1InitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* bSizer21 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(bSizer21);
    
    m_panel6 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(-1, -1), wxTAB_TRAVERSAL);
    
    bSizer21->Add(m_panel6, 1, wxALL|wxEXPAND, 5);
    
    wxBoxSizer* bSizer16 = new wxBoxSizer(wxVERTICAL);
    m_panel6->SetSizer(bSizer16);
    
    wxBoxSizer* bSizer14 = new wxBoxSizer(wxHORIZONTAL);
    
    bSizer16->Add(bSizer14, 0, wxALIGN_RIGHT, 5);
    
    m_buttonNewSet = new wxButton(m_panel6, wxID_NEW, _("&New"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_buttonNewSet->SetToolTip(_("Create new 'PreDefined' set"));
    
    bSizer14->Add(m_buttonNewSet, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);
    
    m_buttonDeleteSet = new wxButton(m_panel6, wxID_DELETE, _("&Delete"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_buttonDeleteSet->SetToolTip(_("Delete the currently selected set"));
    
    bSizer14->Add(m_buttonDeleteSet, 0, wxALL, 5);
    
    wxStaticBoxSizer* sbSizer5 = new wxStaticBoxSizer( new wxStaticBox(m_panel6, wxID_ANY, _("Available sets:")), wxVERTICAL);
    
    bSizer16->Add(sbSizer5, 1, wxEXPAND, 5);
    
    m_notebookPreDefTypes = new wxChoicebook(m_panel6, wxID_ANY, wxDefaultPosition, wxSize(-1, -1), 0);
    
    sbSizer5->Add(m_notebookPreDefTypes, 1, wxEXPAND, 5);
    
    SetSizeHints(-1,-1);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    Centre(wxBOTH);
    // Connect events
    m_buttonNewSet->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DbgPagePreDefTypesBase::OnNewSet), NULL, this);
    m_buttonDeleteSet->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DbgPagePreDefTypesBase::OnDeleteSet), NULL, this);
    m_buttonDeleteSet->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DbgPagePreDefTypesBase::OnDeleteSetUI), NULL, this);
    m_notebookPreDefTypes->Connect(wxEVT_COMMAND_CHOICEBOOK_PAGE_CHANGED, wxChoicebookEventHandler(DbgPagePreDefTypesBase::OnPageChanged), NULL, this);
    
}

DbgPagePreDefTypesBase::~DbgPagePreDefTypesBase()
{
    m_buttonNewSet->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DbgPagePreDefTypesBase::OnNewSet), NULL, this);
    m_buttonDeleteSet->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DbgPagePreDefTypesBase::OnDeleteSet), NULL, this);
    m_buttonDeleteSet->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DbgPagePreDefTypesBase::OnDeleteSetUI), NULL, this);
    m_notebookPreDefTypes->Disconnect(wxEVT_COMMAND_CHOICEBOOK_PAGE_CHANGED, wxChoicebookEventHandler(DbgPagePreDefTypesBase::OnPageChanged), NULL, this);
    
}

DebuggerDisassemblyTabBase::DebuggerDisassemblyTabBase(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style)
    : wxPanel(parent, id, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCrafter6v4fW1InitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* boxSizer14 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer14);
    
    wxFlexGridSizer* flexGridSizer22 = new wxFlexGridSizer(  0, 2, 0, 0);
    flexGridSizer22->SetFlexibleDirection( wxBOTH );
    flexGridSizer22->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer22->AddGrowableCol(1);
    
    boxSizer14->Add(flexGridSizer22, 0, wxEXPAND, 5);
    
    m_staticText24 = new wxStaticText(this, wxID_ANY, _("Current function:"), wxDefaultPosition, wxSize(-1,-1), 0);
    wxFont m_staticText24Font = wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT);
    m_staticText24Font.SetWeight(wxFONTWEIGHT_BOLD);
    m_staticText24->SetFont(m_staticText24Font);
    
    flexGridSizer22->Add(m_staticText24, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    m_textCtrlCurFunction = new wxTextCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), wxTE_READONLY);
    
    flexGridSizer22->Add(m_textCtrlCurFunction, 0, wxALL|wxEXPAND, 5);
    
    m_stc = new wxStyledTextCtrl(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), 0);
    // Configure the fold margin
    m_stc->SetMarginType     (4, wxSTC_MARGIN_SYMBOL);
    m_stc->SetMarginMask     (4, wxSTC_MASK_FOLDERS);
    m_stc->SetMarginSensitive(4, true);
    m_stc->SetMarginWidth    (4, 0);
    
    // Configure the tracker margin
    m_stc->SetMarginWidth(1, 0);
    
    // Configure the symbol margin
    m_stc->SetMarginType (2, wxSTC_MARGIN_SYMBOL);
    m_stc->SetMarginMask (2, ~(wxSTC_MASK_FOLDERS));
    m_stc->SetMarginWidth(2, 16);
    m_stc->SetMarginSensitive(2, true);
    
    // Configure the line numbers margin
    m_stc->SetMarginType(0, wxSTC_MARGIN_NUMBER);
    m_stc->SetMarginWidth(0,0);
    
    // Configure the line symbol margin
    m_stc->SetMarginType(3, wxSTC_MARGIN_FORE);
    m_stc->SetMarginMask(3, 0);
    m_stc->SetMarginWidth(3,0);
    // Select the lexer
    m_stc->SetLexer(wxSTC_LEX_ASM);
    // Set default font / styles
    m_stc->StyleClearAll();
    m_stc->SetWrapMode(0);
    m_stc->SetIndentationGuides(0);
    m_stc->SetKeyWords(0, wxT(""));
    m_stc->SetKeyWords(1, wxT(""));
    m_stc->SetKeyWords(2, wxT(""));
    m_stc->SetKeyWords(3, wxT(""));
    m_stc->SetKeyWords(4, wxT(""));
    
    boxSizer14->Add(m_stc, 1, wxALL|wxEXPAND, 2);
    
    SetSizeHints(500,300);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    Centre(wxBOTH);
    // Connect events
    m_stc->Connect(wxEVT_STC_MARGINCLICK, wxStyledTextEventHandler(DebuggerDisassemblyTabBase::OnMarginClicked), NULL, this);
    
}

DebuggerDisassemblyTabBase::~DebuggerDisassemblyTabBase()
{
    m_stc->Disconnect(wxEVT_STC_MARGINCLICK, wxStyledTextEventHandler(DebuggerDisassemblyTabBase::OnMarginClicked), NULL, this);
    
}

LocalsTableBase::LocalsTableBase(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style)
    : wxPanel(parent, id, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCrafter6v4fW1InitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* boxSizer29 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer29);
    
    m_auibar31 = new wxAuiToolBar(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxAUI_TB_DEFAULT_STYLE);
    m_auibar31->SetToolBitmapSize(wxSize(16,16));
    
    boxSizer29->Add(m_auibar31, 0, wxEXPAND, 5);
    
    m_auibar31->AddTool(wxID_REFRESH, _("Refresh"), wxXmlResource::Get()->LoadBitmap(wxT("restart")), wxNullBitmap, wxITEM_NORMAL, wxT(""), _("Refresh"), NULL);
    
    m_auibar31->AddSeparator();
    
    m_auibar31->AddTool(wxID_NEW, _("New..."), wxXmlResource::Get()->LoadBitmap(wxT("add")), wxNullBitmap, wxITEM_NORMAL, wxT(""), _("New..."), NULL);
    
    m_auibar31->AddTool(wxID_DELETE, _("Delete"), wxXmlResource::Get()->LoadBitmap(wxT("delete-line")), wxNullBitmap, wxITEM_NORMAL, wxT(""), _("Delete"), NULL);
    m_auibar31->Realize();
    
    m_listTable = new clTreeListCtrl(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTR_HIDE_ROOT|wxTR_COLUMN_LINES|wxTR_ROW_LINES|wxTR_FULL_ROW_HIGHLIGHT|wxTR_EDIT_LABELS|wxTR_HAS_BUTTONS);
    
    boxSizer29->Add(m_listTable, 1, wxALL|wxEXPAND, 2);
    
    SetSizeHints(500,300);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    Centre(wxBOTH);
    // Connect events
    this->Connect(wxID_REFRESH, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(LocalsTableBase::OnRefresh), NULL, this);
    this->Connect(wxID_NEW, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(LocalsTableBase::OnNewWatch), NULL, this);
    this->Connect(wxID_NEW, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(LocalsTableBase::OnNewWatchUI), NULL, this);
    this->Connect(wxID_DELETE, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(LocalsTableBase::OnDeleteWatch), NULL, this);
    this->Connect(wxID_DELETE, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(LocalsTableBase::OnDeleteWatchUI), NULL, this);
    m_listTable->Connect(wxEVT_COMMAND_TREE_BEGIN_LABEL_EDIT, wxTreeEventHandler(LocalsTableBase::OnListEditLabelBegin), NULL, this);
    m_listTable->Connect(wxEVT_COMMAND_TREE_END_LABEL_EDIT, wxTreeEventHandler(LocalsTableBase::OnListEditLabelEnd), NULL, this);
    m_listTable->Connect(wxEVT_COMMAND_TREE_ITEM_MENU, wxTreeEventHandler(LocalsTableBase::OnItemRightClick), NULL, this);
    m_listTable->Connect(wxEVT_COMMAND_TREE_KEY_DOWN, wxTreeEventHandler(LocalsTableBase::OnListKeyDown), NULL, this);
    m_listTable->Connect(wxEVT_COMMAND_TREE_ITEM_EXPANDING, wxTreeEventHandler(LocalsTableBase::OnItemExpanding), NULL, this);
    
}

LocalsTableBase::~LocalsTableBase()
{
    this->Disconnect(wxID_REFRESH, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(LocalsTableBase::OnRefresh), NULL, this);
    this->Disconnect(wxID_NEW, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(LocalsTableBase::OnNewWatch), NULL, this);
    this->Disconnect(wxID_NEW, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(LocalsTableBase::OnNewWatchUI), NULL, this);
    this->Disconnect(wxID_DELETE, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(LocalsTableBase::OnDeleteWatch), NULL, this);
    this->Disconnect(wxID_DELETE, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(LocalsTableBase::OnDeleteWatchUI), NULL, this);
    m_listTable->Disconnect(wxEVT_COMMAND_TREE_BEGIN_LABEL_EDIT, wxTreeEventHandler(LocalsTableBase::OnListEditLabelBegin), NULL, this);
    m_listTable->Disconnect(wxEVT_COMMAND_TREE_END_LABEL_EDIT, wxTreeEventHandler(LocalsTableBase::OnListEditLabelEnd), NULL, this);
    m_listTable->Disconnect(wxEVT_COMMAND_TREE_ITEM_MENU, wxTreeEventHandler(LocalsTableBase::OnItemRightClick), NULL, this);
    m_listTable->Disconnect(wxEVT_COMMAND_TREE_KEY_DOWN, wxTreeEventHandler(LocalsTableBase::OnListKeyDown), NULL, this);
    m_listTable->Disconnect(wxEVT_COMMAND_TREE_ITEM_EXPANDING, wxTreeEventHandler(LocalsTableBase::OnItemExpanding), NULL, this);
    
}
