#include <wx/wx.h>
#include <wx/panel.h>

class MainPanel : public wxPanel
{
public:
    MainPanel(wxPanel *parent);
    void OnTest(wxCommandEvent & event);

    wxButton *test;

    wxPanel *m_parent;


};

