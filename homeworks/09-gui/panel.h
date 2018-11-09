#ifndef PANEL_H
#define PANEL_H
#include <wx/wx.h>
#include "frame.h"
#include "tic_tac_toe_manager.h"
#include <vector>
#include <string>

/*
class MyClass
{
public:
	std::string get_name()const { return name; }
	void set_name(std::string n) { name = n; }

private:
	std::string name = "John";
};
*/
class Panel : public wxPanel
{
public:
	Panel(wxWindow* parent);
	
private:
	void OnButtonClick(wxCommandEvent& event);
	wxTextCtrl* m_nameEntry;
	wxRadioBox* radio_box;
	void OnList(wxCommandEvent& event);
	wxListBox* list_box;
	std::vector<std::string> list_options{"joe", "larry", "curly"};
	TManager tm;

	//MyClass my_class;
};
#endif // !PANEL_H