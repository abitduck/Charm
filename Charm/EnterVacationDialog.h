#ifndef ENTERVACATIONDIALOG_H
#define ENTERVACATIONDIALOG_H

#include <QDialog>

#include "Core/Event.h"
#include "Core/Task.h"

namespace Ui {
    class EnterVacationDialog;
}

class EnterVacationDialog : public QDialog {
    Q_OBJECT
public:
    explicit EnterVacationDialog( QWidget* parent=0 );
    ~EnterVacationDialog();

    EventList events() const;

private:
    void updateTaskLabel();
    void createEvents();

private Q_SLOTS:
    void selectTask();
    void okClicked();
    void updateButtonStates();

private:
    Ui::EnterVacationDialog* m_ui;
    TaskId m_selectedTaskId;
    EventList m_events;
};

#endif
