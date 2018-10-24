#include <wx/wxprec.h>

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

class GEIGApp: public wxApp
{
public:
    virtual bool OnInit();
};

class GEIGFrame: public wxFrame
{
public:
    GEIGFrame(const wxString& title, const wxPoint& pos, const wxSize& size);
    wxStaticText *GEIGTitle;
private:
    void OnHello(wxCommandEvent& event);
    void OnExit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
    void OnSize(wxSizeEvent& event);
    wxDECLARE_EVENT_TABLE();
};

enum
{
    ID_Hello = 1
};

wxBEGIN_EVENT_TABLE(GEIGFrame, wxFrame)
    EVT_MENU(ID_Hello,   GEIGFrame::OnHello)
    EVT_MENU(wxID_EXIT,  GEIGFrame::OnExit)
    EVT_MENU(wxID_ABOUT, GEIGFrame::OnAbout)
    EVT_SIZE(GEIGFrame::OnSize)
wxEND_EVENT_TABLE()

wxIMPLEMENT_APP(GEIGApp);

bool GEIGApp::OnInit()
{
    GEIGFrame *frame = new GEIGFrame( "Hello World", wxPoint(50, 50), wxSize(450, 340) );
    frame->Show( true );
    return true;
}

GEIGFrame::GEIGFrame(const wxString& title, const wxPoint& pos, const wxSize& size)
        : wxFrame(NULL, wxID_ANY, title, pos, size)
{
    wxMenu *menuFile = new wxMenu;
    menuFile->Append(ID_Hello, "&Generate...\tCtrl-H",
                     "Used to generate invoices");
    menuFile->AppendSeparator();
    menuFile->Append(wxID_EXIT);
    wxMenu *menuHelp = new wxMenu;
    menuHelp->Append(wxID_ABOUT);
    wxMenuBar *menuBar = new wxMenuBar;
    menuBar->Append( menuFile, "&File" );
    menuBar->Append( menuHelp, "&Help" );
    SetMenuBar( menuBar );
    CreateStatusBar();
    SetStatusText( "Welcome to GEIG!" );
    SetFont(wxFont(32, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL));
    GEIGTitle = new wxStaticText(this, wxID_ANY, "GEIG");
}

void GEIGFrame::OnExit(wxCommandEvent& event)
{
    Close( true );
}

void GEIGFrame::OnAbout(wxCommandEvent& event)
{
    wxMessageBox( "This is a GEIG' GUI sample",
                  "About Global Exact Invoice Generator", wxOK | wxICON_INFORMATION );
}

void GEIGFrame::OnHello(wxCommandEvent& event)
{
    wxLogMessage("Global Exact Invoice Generator");
}

void GEIGFrame::OnSize(wxSizeEvent& event)
{
    wxSize size = event.GetSize();
    wxPoint titlePos(size.GetWidth(),size.GetHeight());
    GEIGTitle->SetPosition(titlePos);
}
