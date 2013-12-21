//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef GITUI_BASE_CLASSES_H
#define GITUI_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/treebook.h>
#include <wx/panel.h>
#include <wx/imaglist.h>
#include <wx/stattext.h>
#include <wx/filepicker.h>
#include <wx/textctrl.h>
#include <wx/checkbox.h>
#include <wx/button.h>
#include <wx/splitter.h>
#include <wx/checklst.h>
#include "gitCommitEditor.h"
#include <wx/dataview.h>
#include <wx/listbox.h>
#include <wx/stc/stc.h>
#include <wx/bitmap.h>
#include <map>
#include <wx/icon.h>
#include <wx/pen.h>
#include <wx/aui/auibar.h>
#include <wx/toolbar.h>
#include "dataviewfilesmodel.h"

class GitSettingsDlgBase : public wxDialog
{
protected:
    wxBoxSizer* mainSizer;
    wxTreebook* m_treebook230;
    wxPanel* m_panel232;
    wxBoxSizer* boxSizer240;
    wxFlexGridSizer* fgSizer11;
    wxStaticText* m_staticText42;
    wxFilePickerCtrl* m_pathGIT;
    wxStaticText* m_staticText54;
    wxFilePickerCtrl* m_pathGITK;
    wxPanel* m_panel234;
    wxBoxSizer* boxSizer242;
    wxFlexGridSizer* flexGridSizer244;
    wxStaticText* m_staticText246;
    wxTextCtrl* m_textCtrlGlobalName;
    wxStaticText* m_staticText250;
    wxTextCtrl* m_textCtrlGlobalEmail;
    wxStaticText* m_staticText254;
    wxTextCtrl* m_textCtrlLocalName;
    wxStaticText* m_staticText258;
    wxTextCtrl* m_textCtrlLocalEmail;
    wxPanel* m_panel236;
    wxBoxSizer* boxSizer766;
    wxCheckBox* m_checkBoxTerminal;
    wxCheckBox* m_checkBoxLog;
    wxCheckBox* m_checkBoxTrackTree;
    wxBoxSizer* bSizer3;
    wxButton* m_buttonOk;
    wxButton* m_buttonCancel;

protected:
    virtual void OnLocalRepoUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnOK(wxCommandEvent& event) { event.Skip(); }

public:
    GitSettingsDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Git settings..."), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~GitSettingsDlgBase();
};


class GitCommitDlgBase : public wxDialog
{
protected:
    wxBoxSizer* bSizer4;
    wxSplitterWindow* m_splitterMain;
    wxPanel* m_panel3;
    wxBoxSizer* bSizer12;
    wxSplitterWindow* m_splitterInner;
    wxPanel* m_panel1;
    wxBoxSizer* bSizer11;
    wxStaticText* m_staticText6;
    wxCheckListBox* m_listBox;
    wxPanel* m_panel2;
    wxBoxSizer* bSizer9;
    wxStaticText* m_staticText7;
    GitCommitEditor* m_editor;
    wxPanel* m_panel4;
    wxBoxSizer* bSizer13;
    wxStaticText* m_staticText8;
    wxTextCtrl* m_commitMessage;
    wxBoxSizer* bSizer5;
    wxButton* m_button5;
    wxButton* m_button6;

protected:
    virtual void OnChangeFile(wxCommandEvent& event) { event.Skip(); }
    virtual void OnCommitOK(wxCommandEvent& event) { event.Skip(); }

public:
    GitCommitDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Git commit..."), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~GitCommitDlgBase();
};


class GitCommitListDlgBase : public wxDialog
{
protected:
    wxBoxSizer* bSizer17;
    wxSplitterWindow* m_splitter174;
    wxPanel* m_splitterPage178;
    wxBoxSizer* boxSizer205;
    wxStaticText* m_staticText207;
    wxDataViewListCtrl* m_dvListCtrlCommitList;
    wxPanel* m_splitterPage182;
    wxBoxSizer* boxSizer184;
    wxSplitterWindow* m_splitter186;
    wxPanel* m_splitterPage190;
    wxBoxSizer* bSizer18;
    wxSplitterWindow* m_splitter196;
    wxPanel* m_splitterPage200;
    wxBoxSizer* boxSizer208;
    wxStaticText* m_staticText210;
    wxListBox* m_fileListBox;
    wxPanel* m_splitterPage204;
    wxBoxSizer* boxSizer215;
    wxStaticText* m_staticText217;
    wxStyledTextCtrl* m_stcDiff;
    wxPanel* m_splitterPage194;
    wxBoxSizer* boxSizer218;
    wxStaticText* m_staticText220;
    wxTextCtrl* m_commitMessage;
    wxBoxSizer* boxSizer224;
    wxButton* m_button226;

protected:
    virtual void OnClose(wxCloseEvent& event) { event.Skip(); }
    virtual void OnSelectionChanged(wxDataViewEvent& event) { event.Skip(); }
    virtual void OnContextMenu(wxDataViewEvent& event) { event.Skip(); }
    virtual void OnChangeFile(wxCommandEvent& event) { event.Skip(); }
    virtual void OnOK(wxCommandEvent& event) { event.Skip(); }

public:
    GitCommitListDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Commit List"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxMAXIMIZE_BOX);
    virtual ~GitCommitListDlgBase();
};


class GitDiffDlgBase : public wxDialog
{
protected:
    wxBoxSizer* bSizer17;
    wxSplitterWindow* m_splitter;
    wxPanel* m_splitterPageFiles;
    wxBoxSizer* boxSizer62;
    wxStaticText* m_staticText68;
    wxListBox* m_fileListBox;
    wxPanel* m_splitterPageDiff;
    wxBoxSizer* boxSizer64;
    wxStaticText* m_staticText66;
    GitCommitEditor* m_editor;
    wxStdDialogButtonSizer* m_sdbSizer1;
    wxButton* m_button145;

protected:
    virtual void OnChangeFile(wxCommandEvent& event) { event.Skip(); }

public:
    GitDiffDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Current Diffs"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(879,600), long style = wxCAPTION|wxRESIZE_BORDER|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxCLOSE_BOX);
    virtual ~GitDiffDlgBase();
};


class GitImages : public wxImageList
{
protected:
    // Maintain a map of all bitmaps representd by their name
    std::map<wxString, wxBitmap> m_bitmaps;


protected:

public:
    GitImages();
    const wxBitmap& Bitmap(const wxString &name) const {
        if ( !m_bitmaps.count(name) )
            return wxNullBitmap;
        return m_bitmaps.find(name)->second;
    }
    virtual ~GitImages();
};


class gitCloneDlgBaseClass : public wxDialog
{
protected:
    wxBoxSizer* boxSizer17;
    wxFlexGridSizer* flexGridSizer21;
    wxStaticText* m_staticText22;
    wxTextCtrl* m_textCtrlURL;
    wxStaticText* m_staticText24;
    wxDirPickerCtrl* m_dirPickerTargetDir;
    wxCheckBox* m_checkBoxUseLogin;
    wxStaticText* m_staticText28;
    wxTextCtrl* m_textCtrlUsername;
    wxStaticText* m_staticText30;
    wxTextCtrl* m_textCtrlPassword;
    wxBoxSizer* boxSizer18;
    wxButton* m_buttonOK;
    wxButton* m_button20;

protected:
    virtual void OnUseCredentialsUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnOKUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    gitCloneDlgBaseClass(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("git clone.."), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(500,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~gitCloneDlgBaseClass();
};


class GitConsoleBase : public wxPanel
{
protected:
    wxBoxSizer* boxSizer36;
    wxAuiToolBar* m_auibar;
    wxSplitterWindow* m_splitter;
    wxPanel* m_splitterPage100;
    wxBoxSizer* boxSizer94;
    wxDataViewCtrl* m_dvFiles;
    wxObjectDataPtr<DataViewFilesModel> m_dvFilesModel;

    wxPanel* m_splitterPage96;
    wxBoxSizer* boxSizer92;
    wxStyledTextCtrl* m_stcLog;

protected:
    virtual void OnClearGitLogUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnClearGitLog(wxCommandEvent& event) { event.Skip(); }
    virtual void OnStopGitProcess(wxCommandEvent& event) { event.Skip(); }
    virtual void OnStopGitProcessUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnApplyPatch(wxCommandEvent& event) { event.Skip(); }
    virtual void OnAddFile(wxCommandEvent& event) { event.Skip(); }
    virtual void OnItemSelectedUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnResetFile(wxCommandEvent& event) { event.Skip(); }
    virtual void OnContextMenu(wxDataViewEvent& event) { event.Skip(); }
    virtual void OnFileActivated(wxDataViewEvent& event) { event.Skip(); }

public:
    GitConsoleBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(500,300), long style = wxTAB_TRAVERSAL);
    virtual ~GitConsoleBase();
};


class GitFileDiffDlgBase : public wxDialog
{
protected:
    wxBoxSizer* boxSizer124;
    wxAuiToolBar* m_auibar132;
    GitCommitEditor* m_editor;
    wxBoxSizer* boxSizer126;
    wxButton* m_button128;

protected:
    virtual void OnSaveAsPatch(wxCommandEvent& event) { event.Skip(); }

public:
    GitFileDiffDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("File diff"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(500,300), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~GitFileDiffDlgBase();
};


class GitApplyPatchDlgBase : public wxDialog
{
protected:
    wxBoxSizer* boxSizer154;
    wxFlexGridSizer* flexGridSizer162;
    wxStaticText* m_staticText164;
    wxFilePickerCtrl* m_filePickerPatchFile;
    wxStaticText* m_staticText168;
    wxTextCtrl* m_textCtrlExtraFlags;
    wxBoxSizer* boxSizer156;
    wxButton* m_button158;
    wxButton* m_button160;

protected:
    virtual void OnApplyGitPatchUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    GitApplyPatchDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Git Apply Patch"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~GitApplyPatchDlgBase();
};

#endif
