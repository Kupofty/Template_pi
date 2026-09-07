///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "main_ui_base.h"

///////////////////////////////////////////////////////////////////////////

DialogMainGuiBase::DialogMainGuiBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );


	bSizer2->Add( 0, 0, 1, wxEXPAND, 5 );

	m_staticText1 = new wxStaticText( this, wxID_ANY, _("This is the template plugin GUI"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	bSizer2->Add( m_staticText1, 0, wxALIGN_CENTER|wxALL, 5 );


	bSizer2->Add( 0, 0, 1, wxEXPAND, 5 );

	m_staticline1 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer2->Add( m_staticline1, 0, wxEXPAND | wxALL, 5 );


	bSizer2->Add( 0, 0, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxHORIZONTAL );


	bSizer21->Add( 0, 0, 1, wxEXPAND, 5 );

	m_staticText2 = new wxStaticText( this, wxID_ANY, _("CursorLat:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	bSizer21->Add( m_staticText2, 0, wxALL, 5 );

	m_staticText_cursorLat = new wxStaticText( this, wxID_ANY, _("?"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_cursorLat->Wrap( -1 );
	bSizer21->Add( m_staticText_cursorLat, 0, wxALL, 5 );


	bSizer21->Add( 0, 0, 1, wxEXPAND, 5 );

	m_staticText4 = new wxStaticText( this, wxID_ANY, _("CursorLon:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	bSizer21->Add( m_staticText4, 0, wxALL, 5 );

	m_staticText_cursorLon = new wxStaticText( this, wxID_ANY, _("?"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_cursorLon->Wrap( -1 );
	bSizer21->Add( m_staticText_cursorLon, 0, wxALL, 5 );


	bSizer21->Add( 0, 0, 1, wxEXPAND, 5 );


	bSizer2->Add( bSizer21, 1, wxEXPAND, 5 );


	bSizer2->Add( 0, 0, 1, wxEXPAND, 5 );

	m_staticline2 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer2->Add( m_staticline2, 0, wxEXPAND | wxALL, 5 );


	bSizer2->Add( 0, 0, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );


	bSizer3->Add( 0, 0, 1, wxEXPAND, 5 );

	m_staticText6 = new wxStaticText( this, wxID_ANY, _("BoatLat:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	bSizer3->Add( m_staticText6, 0, wxALL, 5 );

	m_staticText_boatLat = new wxStaticText( this, wxID_ANY, _("?"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_boatLat->Wrap( -1 );
	bSizer3->Add( m_staticText_boatLat, 0, wxALL, 5 );


	bSizer3->Add( 0, 0, 1, wxEXPAND, 5 );

	m_staticText8 = new wxStaticText( this, wxID_ANY, _("BoatLon:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	bSizer3->Add( m_staticText8, 0, wxALL, 5 );

	m_staticText_boatLon = new wxStaticText( this, wxID_ANY, _("?"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_boatLon->Wrap( -1 );
	bSizer3->Add( m_staticText_boatLon, 0, wxALL, 5 );


	bSizer3->Add( 0, 0, 1, wxEXPAND, 5 );


	bSizer2->Add( bSizer3, 1, wxEXPAND, 5 );


	bSizer2->Add( 0, 0, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer2 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( DialogMainGuiBase::OnClose ) );
}

DialogMainGuiBase::~DialogMainGuiBase()
{
}
