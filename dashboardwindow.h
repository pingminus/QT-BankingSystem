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
private slots:
    void InformationButtonPressed();
    void HomeButtonPressed();
    void SignoutButtonPressed();

private:
    std::vector<std::string> Transactions;
    std::unordered_map<std::string, std::vector<std::string>> MapBalance;
    Ui::DashboardWindow *ui;
};

#endif // DASHBOARDWINDOW_H
