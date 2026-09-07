#include "main_ui_derived.h"
#include "settings/global_settings.h"
#include "plugin/plugin.h"


////////////////////////////
/// Class Initialization ///
////////////////////////////
DialogMainGui::DialogMainGui(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : DialogMainGuiBase( parent )
{

}

DialogMainGui::~DialogMainGui()
{

}




//////////////
/// Others ///
//////////////
void DialogMainGui::OnClose(wxCloseEvent& event)
{
  if (plugin)
  {
    plugin->OnGuiClosed();

  }
}



/////////////////
/// Update UI ///
/////////////////
void DialogMainGui::updateCursorPosition(double lat, double lon)
{
    m_staticText_cursorLat->SetLabel(wxString::Format("%.6f", lat));
    m_staticText_cursorLon->SetLabel(wxString::Format("%.6f", lon));
}

void DialogMainGui::updateBoatPosition(double lat, double lon)
{
    m_staticText_boatLat->SetLabel(wxString::Format("%.6f", lat));
    m_staticText_boatLon->SetLabel(wxString::Format("%.6f", lon));
}

