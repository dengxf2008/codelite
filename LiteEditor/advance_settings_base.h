//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: advance_settings.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef ADVANCE_SETTINGS_BASE_CLASSES_H
#define ADVANCE_SETTINGS_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/notebook.h>
#include <wx/button.h>

class AdvancedDlgBase : public wxDialog
{
protected:
    wxNotebook* m_notebook;
    wxButton* m_buttonRestoreDefaults;
    wxStdDialogButtonSizer* m_stdBtnSizer2;
    wxButton* m_buttonCancel;
    wxButton* m_buttonOK;
    wxButton* m_buttonApply;

protected:
    virtual void OnRestoreDefaults(wxCommandEvent& event) { event.Skip(); }
    virtual void OnButtonOKClicked(wxCommandEvent& event) { event.Skip(); }
    virtual void OnApply(wxCommandEvent& event) { event.Skip(); }
    virtual void OnApplyUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    AdvancedDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Advanced"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~AdvancedDlgBase();
};

#endif
