#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void ErrorFunction(std::string ErrorName);
private slots:
    void LoginButtonpressed();
    void RegisterButtonpressed();

private:
    std::unordered_map<std::string, std::string> HashMap;
    Ui::MainWindow *ui;
    QLabel* errorLabel = nullptr;

};
#endif // MAINWINDOW_H
