#ifndef MAINFRAME_H
#define MAINFRAME_H

#include <wx/wx.h>
#include <wx/notebook.h>
#include <vector>

// "designed by Madebyoliver from Flaticon"

using std::vector;

enum class ViewType {
    STANDARD = 10,
    MINIMAL = 20,
    TRAY = 30
};

class MainFrame : public wxFrame
{
    public:
        MainFrame();
        virtual ~MainFrame();

        bool updateView();

        void handleEvent(wxCommandEvent& WXUNUSED(event));

    private:
        wxPanel    *m_mainPanel;
        wxPanel    *m_taskPanel;
        wxPanel    *m_calendarPanel;

        wxButton   *m_settingsButton;

        wxBoxSizer *m_vertialSizer;
        wxBoxSizer *m_horizontalSizer;

        // IDs for events
        const int m_SETTINGS_BUT_ID = 100;
};
#endif // MAINFRAME_H
