///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jul 28 2007)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifdef WX_PRECOMP

#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#else
#include <wx/wx.h>
#endif //WX_PRECOMP

#include "ext_db_page2.h"
#include "tags_options_data.h"
#include "editor_config.h"
#include "macros.h"
#include "checkdirtreectrl.h"

///////////////////////////////////////////////////////////////////////////

ExtDbPage2::ExtDbPage2(wxWizard* parent)
		: wxWizardPageSimple(parent)
{
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	m_staticText1 = new wxStaticText( this, wxID_ANY, wxT("Select the directories to be parsed:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	bSizer1->Add( m_staticText1, 0, wxALL|wxEXPAND, 5 );

	m_panel1 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );

	m_includeDirs = new CheckDirTreeCtrl( m_panel1, wxEmptyString, wxID_ANY);
	bSizer2->Add(m_includeDirs, 1, wxEXPAND | wxALL, 5 );

	wxString fileMask = EditorConfigST::Get()->GetStringValue(wxT("WizardFileMask"));
	if (fileMask.IsEmpty()) {
		fileMask = wxT("*.h;*.hpp;");
	}

	long pfwe(0);
	EditorConfigST::Get()->GetLongValue(wxT("WizardParseFileWithoutExtension"), pfwe);

	wxStaticText *txt = new wxStaticText( m_panel1, wxID_ANY, wxT("Parse files with the following extensions:"), wxDefaultPosition, wxDefaultSize, 0 );
	txt->Wrap( -1 );
	bSizer2->Add( txt, 0, wxALL|wxEXPAND, 5 );

	m_parseFileWithNoExtension = new wxCheckBox( m_panel1, wxID_ANY, wxT("Parse files without extension as well"), wxDefaultPosition, wxDefaultSize, 0 );
	m_parseFileWithNoExtension->SetValue(pfwe ? true : false);
	m_textCtrlFileMask = new wxTextCtrl(m_panel1, wxID_ANY, fileMask);
	bSizer2->Add(m_textCtrlFileMask, 0, wxEXPAND | wxALL, 5 );
	bSizer2->Add( m_parseFileWithNoExtension, 0, wxALL|wxEXPAND, 5 );
	
	m_panel1->SetSizer( bSizer2 );
	m_panel1->Layout();
	bSizer2->Fit( m_panel1 );
	bSizer1->Add( m_panel1, 1, wxEXPAND | wxALL, 0 );

	wxStaticBoxSizer* sbSizer1;
	sbSizer1 = new wxStaticBoxSizer( new wxStaticBox( this, -1, wxEmptyString ), wxVERTICAL );

	m_staticText3 = new wxStaticText( this, wxID_ANY, wxT("TIP: To make the database as small as possible (i.e. better performance),\nSelect only the directories that contains your symbols"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	sbSizer1->Add( m_staticText3, 1, wxALL|wxEXPAND, 5 );

	bSizer1->Add( sbSizer1, 0, wxEXPAND, 5 );

	this->SetSizer( bSizer1 );
	this->Layout();

}

void ExtDbPage2::GetIncludeDirs(wxArrayString &arr)
{
	m_includeDirs->GetSelectedDirs(arr);
}

void ExtDbPage2::BuildTree(const wxString &path)
{
	m_includeDirs->BuildTree(path);
}

wxString ExtDbPage2::GetFileMask()
{
	return m_textCtrlFileMask->GetValue();
}

bool ExtDbPage2::GetParseFilesWithoutExtension()
{
	return m_parseFileWithNoExtension->IsChecked();
}
