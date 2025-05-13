#ifndef DASHBOARDWINDOW_H
#define DASHBOARDWINDOW_H

#include <QMainWindow>
#include <vector>
#include <map>
#include <string>
#include <QLabel>
namespace Ui {
class DashboardWindow;
}

class DashboardWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit DashboardWindow(const std::string username,
                             std::map<std::string, std::vector<std::string>> &sharedMapBalance,
                             std::map<std::string, std::vector<std::string>> &sharedTransactions,
                             QWidget *parent = nullptr);
    ~DashboardWindow();

private slots:
    void InformationButtonPressed();
    void HomeButtonPressed();
    void TransferButtonPressed();
    void SignoutButtonPressed();
    void TransferMethod();
    void InvestButtonPressed();

private:
    void runPythonScript();
    Ui::DashboardWindow *ui;
    std::map<std::string, std::vector<std::string>> &MapBalance; // Reference to shared balance map
    std::map<std::string, std::vector<std::string>> &Transactions; // Reference to shared transaction history
};

#endif // DASHBOARDWINDOW_H
