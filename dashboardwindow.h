#ifndef DASHBOARDWINDOW_H
#define DASHBOARDWINDOW_H
#include <string>
#include <QMainWindow>

namespace Ui {
class DashboardWindow;
}

class DashboardWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit DashboardWindow(const std::string username, QWidget *parent = nullptr);
    ~DashboardWindow();


private:
    Ui::DashboardWindow *ui;
};

#endif // DASHBOARDWINDOW_H
