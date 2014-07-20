//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: quickfindbarbase.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef QUICKFINDBARBASE_BASE_CLASSES_H
#define QUICKFINDBARBASE_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/panel.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/popupwin.h>
#include <wx/checkbox.h>
#include <wx/imaglist.h>
#include <wx/bitmap.h>
#include <map>
#include <wx/icon.h>

class QuickFindBarBase : public wxPanel
{
protected:
    wxBoxSizer* mainSizer;

protected:

public:
    QuickFindBarBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(400,-1), long style = wxTAB_TRAVERSAL|wxTRANSPARENT_WINDOW|wxBORDER_STATIC);
    virtual ~QuickFindBarBase();
};


class QuickFindBarOptionsMenuBase : public wxPopupTransientWindow
{
protected:
    wxBoxSizer* boxSizer60;
    wxPanel* m_panel71;
    wxGridSizer* gridSizer49;
    wxCheckBox* m_checkBoxCase;
    wxCheckBox* m_checkBoxRegex;
    wxCheckBox* m_checkBoxWord;
    wxCheckBox* m_checkBoxWildcard;
    wxCheckBox* m_checkBoxMultipleSelections;

protected:
    virtual void OnCheckBoxRegex(wxCommandEvent& event) { event.Skip(); }
    virtual void OnCheckWild(wxCommandEvent& event) { event.Skip(); }

public:
    QuickFindBarOptionsMenuBase(wxWindow* parent, long style = wxBORDER_NONE);
    virtual ~QuickFindBarOptionsMenuBase();
};


class QuickFindBarImages : public wxImageList
{
protected:
    // Maintain a map of all bitmaps representd by their name
    std::map<wxString, wxBitmap> m_bitmaps;


protected:

public:
    QuickFindBarImages();
    const wxBitmap& Bitmap(const wxString &name) const {
        if ( !m_bitmaps.count(name) )
            return wxNullBitmap;
        return m_bitmaps.find(name)->second;
    }
    virtual ~QuickFindBarImages();
};

#endif
