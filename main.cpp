#include "main.h"
#include "GEIG.h"
#include "tab.h"

IMPLEMENT_APP(MyApp)

bool MyApp::OnInit()
{
    GEIGFrame *mainFrame = new GEIGFrame(wxT("Simple"));
    MainPanel *tabPanel = new MainPanel();

    mainFrame->Show(true);



    return true;
}
