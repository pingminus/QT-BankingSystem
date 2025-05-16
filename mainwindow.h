
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <map>
#include <string>
#include <vector>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

/**
 * @brief The MainWindow class provides the login and registration interface
 *
 * This class handles user authentication and account creation before granting
 * access to the main dashboard.
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief MainWindow constructor
     * @param parent Parent widget pointer
     */
    explicit MainWindow(QWidget *parent = nullptr);

    /**
     * @brief MainWindow destructor
     */
    ~MainWindow();

private slots:
    /**
     * @brief Process user login attempt
     */
    void processLogin();

    /**
     * @brief Process user registration attempt
     */
    void processRegistration();

private:
    /**
     * @brief Initialize the user interface components
     */
    void initializeUI();

    /**
     * @brief Set up signal/slot connections
     */
    void setupConnections();

    /**
     * @brief Display an error message to the user
     * @param errorMessage The error message to display
     */
    void displayError(const std::string& errorMessage);

    /**
     * @brief Display a success message to the user
     * @param message The success message to display
     */
    void displaySuccess(const std::string& message);

    // UI component
    Ui::MainWindow *ui;
    QLabel *m_errorLabel;

    // User data storage
    std::map<std::string, std::string> m_userCredentials;
    std::map<std::string, std::vector<std::string>> m_userBalances;
    std::map<std::string, std::vector<std::string>> m_transactions;
};
#endif // MAINWINDOW_H
