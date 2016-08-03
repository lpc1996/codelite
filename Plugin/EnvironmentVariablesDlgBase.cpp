//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: envvar_table_dlg.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "EnvironmentVariablesDlgBase.h"
#include "codelite_exports.h"


// Declare the bitmap loading function
extern void wxC48E6InitBitmapResources();

static bool bBitmapLoaded = false;


EnvVarsTableDlgBase::EnvVarsTableDlgBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC48E6InitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* bSizer1 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(bSizer1);
    
    m_staticText1 = new wxStaticText(this, wxID_ANY, _("Define here set of environment variables which will be applied by CodeLite before launching processes.\nVariables are defined in the format of NAME=VALUE"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    m_staticText1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_INFOBK));
    
    bSizer1->Add(m_staticText1, 0, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    m_staticText2 = new wxStaticText(this, wxID_ANY, _("Available environment sets:"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    
    bSizer1->Add(m_staticText2, 0, wxALL, WXC_FROM_DIP(5));
    
    wxBoxSizer* bSizer6 = new wxBoxSizer(wxHORIZONTAL);
    
    bSizer1->Add(bSizer6, 1, wxEXPAND, WXC_FROM_DIP(5));
    
    wxBoxSizer* bSizer2 = new wxBoxSizer(wxVERTICAL);
    
    bSizer6->Add(bSizer2, 1, wxEXPAND, WXC_FROM_DIP(5));
    
    m_book = new wxNotebook(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1,-1)), wxBK_DEFAULT);
    m_book->SetName(wxT("m_book"));
    
    bSizer2->Add(m_book, 1, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    m_panel1 = new wxPanel(m_book, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_book, wxSize(-1, -1)), wxTAB_TRAVERSAL);
    m_book->AddPage(m_panel1, _("Default"), false);
    
    wxBoxSizer* bSizer5 = new wxBoxSizer(wxVERTICAL);
    m_panel1->SetSizer(bSizer5);
    
    m_textCtrlDefault = new wxStyledTextCtrl(m_panel1, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_panel1, wxSize(-1,-1)), 0);
    // Configure the fold margin
    m_textCtrlDefault->SetMarginType     (4, wxSTC_MARGIN_SYMBOL);
    m_textCtrlDefault->SetMarginMask     (4, wxSTC_MASK_FOLDERS);
    m_textCtrlDefault->SetMarginSensitive(4, true);
    m_textCtrlDefault->SetMarginWidth    (4, 0);
    
    // Configure the tracker margin
    m_textCtrlDefault->SetMarginWidth(1, 0);
    
    // Configure the symbol margin
    m_textCtrlDefault->SetMarginType (2, wxSTC_MARGIN_SYMBOL);
    m_textCtrlDefault->SetMarginMask (2, ~(wxSTC_MASK_FOLDERS));
    m_textCtrlDefault->SetMarginWidth(2, 0);
    m_textCtrlDefault->SetMarginSensitive(2, true);
    
    // Configure the line numbers margin
    m_textCtrlDefault->SetMarginType(0, wxSTC_MARGIN_NUMBER);
    m_textCtrlDefault->SetMarginWidth(0,0);
    
    // Configure the line symbol margin
    m_textCtrlDefault->SetMarginType(3, wxSTC_MARGIN_FORE);
    m_textCtrlDefault->SetMarginMask(3, 0);
    m_textCtrlDefault->SetMarginWidth(3,0);
    // Select the lexer
    m_textCtrlDefault->SetLexer(wxSTC_LEX_NULL);
    // Set default font / styles
    m_textCtrlDefault->StyleClearAll();
    m_textCtrlDefault->SetWrapMode(0);
    m_textCtrlDefault->SetIndentationGuides(0);
    m_textCtrlDefault->SetKeyWords(0, wxT(""));
    m_textCtrlDefault->SetKeyWords(1, wxT(""));
    m_textCtrlDefault->SetKeyWords(2, wxT(""));
    m_textCtrlDefault->SetKeyWords(3, wxT(""));
    m_textCtrlDefault->SetKeyWords(4, wxT(""));
    
    bSizer5->Add(m_textCtrlDefault, 1, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    wxBoxSizer* bSizer7 = new wxBoxSizer(wxVERTICAL);
    
    bSizer6->Add(bSizer7, 0, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    m_buttonNewSet = new wxButton(this, wxID_ANY, _("&New Set..."), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    
    bSizer7->Add(m_buttonNewSet, 0, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    m_buttonDeleteSet = new wxButton(this, wxID_ANY, _("Delete Set"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    
    bSizer7->Add(m_buttonDeleteSet, 0, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    m_button5 = new wxButton(this, wxID_ANY, _("&Export"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    m_button5->SetToolTip(_("Export the current set to a platform \nspecific environment file"));
    
    bSizer7->Add(m_button5, 0, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    m_stdBtnSizer2 = new wxStdDialogButtonSizer();
    
    bSizer1->Add(m_stdBtnSizer2, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, WXC_FROM_DIP(10));
    
    m_button4 = new wxButton(this, wxID_OK, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    m_button4->SetDefault();
    m_stdBtnSizer2->AddButton(m_button4);
    
    m_button6 = new wxButton(this, wxID_CANCEL, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    m_stdBtnSizer2->AddButton(m_button6);
    m_stdBtnSizer2->Realize();
    
    
    #if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(m_book)){
        wxPersistenceManager::Get().RegisterAndRestore(m_book);
    } else {
        wxPersistenceManager::Get().Restore(m_book);
    }
    #endif
    
    SetName(wxT("EnvVarsTableDlgBase"));
    SetSize(-1,-1);
    if (GetSizer()) {
         GetSizer()->Fit(this);
    }
    if(GetParent()) {
        CentreOnParent(wxBOTH);
    } else {
        CentreOnScreen(wxBOTH);
    }
#if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(this)) {
        wxPersistenceManager::Get().RegisterAndRestore(this);
    } else {
        wxPersistenceManager::Get().Restore(this);
    }
#endif
    // Connect events
    this->Connect(wxEVT_CLOSE_WINDOW, wxCloseEventHandler(EnvVarsTableDlgBase::OnClose), NULL, this);
    m_buttonNewSet->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(EnvVarsTableDlgBase::OnNewSet), NULL, this);
    m_buttonDeleteSet->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(EnvVarsTableDlgBase::OnDeleteSet), NULL, this);
    m_buttonDeleteSet->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(EnvVarsTableDlgBase::OnDeleteSetUI), NULL, this);
    m_button5->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(EnvVarsTableDlgBase::OnExport), NULL, this);
    m_button4->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(EnvVarsTableDlgBase::OnButtonOk), NULL, this);
    m_button6->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(EnvVarsTableDlgBase::OnCancel), NULL, this);
    
}

EnvVarsTableDlgBase::~EnvVarsTableDlgBase()
{
    this->Disconnect(wxEVT_CLOSE_WINDOW, wxCloseEventHandler(EnvVarsTableDlgBase::OnClose), NULL, this);
    m_buttonNewSet->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(EnvVarsTableDlgBase::OnNewSet), NULL, this);
    m_buttonDeleteSet->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(EnvVarsTableDlgBase::OnDeleteSet), NULL, this);
    m_buttonDeleteSet->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(EnvVarsTableDlgBase::OnDeleteSetUI), NULL, this);
    m_button5->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(EnvVarsTableDlgBase::OnExport), NULL, this);
    m_button4->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(EnvVarsTableDlgBase::OnButtonOk), NULL, this);
    m_button6->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(EnvVarsTableDlgBase::OnCancel), NULL, this);
    
}
