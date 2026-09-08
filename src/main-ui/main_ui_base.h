///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/statline.h>
#include <wx/sizer.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class DialogMainGuiBase
///////////////////////////////////////////////////////////////////////////////
class DialogMainGuiBase : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText1;
		wxStaticLine* m_staticline1;
		wxStaticText* m_staticText2;
		wxStaticText* m_staticText_cursorLat;
		wxStaticText* m_staticText4;
		wxStaticText* m_staticText_cursorLon;
		wxStaticLine* m_staticline2;
		wxStaticText* m_staticText6;
		wxStaticText* m_staticText_boatLat;
		wxStaticText* m_staticText8;
		wxStaticText* m_staticText_boatLon;

		// Virtual event handlers, override them in your derived class
		virtual void OnClose( wxCloseEvent& event ) { event.Skip(); }


	public:

		DialogMainGuiBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Template Plugin"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 300,150 ), long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER );

		~DialogMainGuiBase();

};

