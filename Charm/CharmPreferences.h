#ifndef CHARMPREFERENCES_H
#define CHARMPREFERENCES_H

#include <QDialog>

#include "Core/Configuration.h"
#include "ui_CharmPreferences.h"

class CharmPreferences : public QDialog
{
    Q_OBJECT

public:
    explicit CharmPreferences( const Configuration& config,
                               QWidget* parent = 0 );
    ~CharmPreferences();

    Configuration::DurationFormat durationFormat() const;
    bool detectIdling() const;
    bool warnUnuploadedTimesheets() const;

    Qt::ToolButtonStyle toolButtonStyle() const;

    Configuration::TimeTrackerFontSize timeTrackerFontSize() const;
private Q_SLOTS:
    void slotWarnUnuploadedChanged(bool);

private:
    Ui::CharmPreferences m_ui;
};

#endif
