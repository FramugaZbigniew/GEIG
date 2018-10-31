#include <wx/stattext.h>
#include "tab.h"


MainPanel::MainPanel(wxPanel * parent) : wxPanel(parent, -1, wxPoint(-1, -1), wxSize(-1, -1), wxBORDER_SUNKEN)
{

  m_parent = parent;
  test = new wxButton(this, 666, wxT("TEST"), wxPoint(10, 10));

}

void MainPanel::OnTest(wxCommandEvent & WXUNUSED(event))
{

}




