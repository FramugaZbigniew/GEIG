/***************************************************************
 * Name:      wxGEIGApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2018-10-18
 * Copyright:  ()
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "wxGEIGApp.h"
#include "wxGEIGMain.h"

IMPLEMENT_APP(wxGEIGApp)

bool wxGEIGApp::OnInit()
{

    wxGEIGDialog* dlg = new wxGEIGDialog(0L, _("wxWidgets Application Template"));
    dlg->SetIcon(wxICON(aaaa)); // To Set App Icon
    dlg->Show();
    return true;
}
