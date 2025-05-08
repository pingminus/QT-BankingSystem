#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <unordered_map>
#include <string>
#include <vector>
#include <map>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    std::map<std::string, std::vector<std::string>> SharedMapBalance; // Shared balance map
    std::map<std::string, std::vector<std::string>> SharedTransactions; // Shared transaction history

private slots:
    void LoginButtonpressed();
    void RegisterButtonpressed();
    void ErrorFunction(std::string ErrorMessage);

private:
    Ui::MainWindow *ui;
    std::unordered_map<std::string, std::string> HashMap; // Stores username-password pairs
    QLabel *errorLabel; // Used for displaying error messages
};

#endif // MAINWINDOW_H
