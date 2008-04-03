///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Feb 20 2008)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __cscopetabbase__
#define __cscopetabbase__

#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/treectrl.h>
#include <wx/gauge.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/panel.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class CscopeTabBase
///////////////////////////////////////////////////////////////////////////////
class CscopeTabBase : public wxPanel 
{
	private:
	
	protected:
		wxStaticText* m_statusMessage;
		wxTreeCtrl* m_treeCtrlResults;
		wxGauge* m_gauge;
		wxButton* m_buttonClear;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnLeftDClick( wxMouseEvent& event ){ event.Skip(); }
		virtual void OnItemActivated( wxTreeEvent& event ){ event.Skip(); }
		virtual void OnClearResults( wxCommandEvent& event ){ event.Skip(); }
		
	
	public:
		CscopeTabBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxTAB_TRAVERSAL );
		~CscopeTabBase();
	
};

#endif //__cscopetabbase__
