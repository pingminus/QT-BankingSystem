#ifndef DASHBOARDWINDOW_H
#define DASHBOARDWINDOW_H

#include <QMainWindow>
#include <map>
#include <string>
#include <vector>
#include <QCloseEvent>


namespace Ui {
class DashboardWindow;
}

/**
 * @brief The DashboardWindow class provides the main interface for banking and investment features
 *
 * This class handles user balances, transfers between accounts, and Bitcoin investment functionality.
 */
class DashboardWindow : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief DashboardWindow constructor
     * @param username User's login name
     * @param sharedMapBalance Reference to shared balance data
     * @param sharedTransactions Reference to shared transaction history
     * @param parent Parent widget pointer
     */
    explicit DashboardWindow(const std::string& username,
                             std::map<std::string, std::vector<std::string>>& sharedMapBalance,
                             std::map<std::string, std::vector<std::string>>& sharedTransactions,
                             QWidget *parent = nullptr);

    /**
     * @brief DashboardWindow destructor
     */
    ~DashboardWindow();

private slots:
    /**
     * @brief Show the investment view
     */
    void showInvestView();

    /**
     * @brief Show the information view
     */
    void showInfoView();

    /**
     * @brief Show the home view
     */
    void showHomeView();

    /**
     * @brief Show the transfer/payment view
     */
    void showTransferView();

    /**
     * @brief Handle user sign out
     */
    void signOut();

    /**
     * @brief Process Bitcoin purchase
     */
    void buyBitcoin();

    /**
     * @brief Process Bitcoin sale
     */
    void sellBitcoin();

    /**
     * @brief Process money transfer between accounts
     */
    void processTransfer();

    /**
     * @brief Updates the Bitcoin price and investment value
     */
    void updateBitcoinPrice();
protected:
    /**
     * @brief Override closeEvent to handle window closing properly
     * @param event The close event to handle
     */
    void closeEvent(QCloseEvent *event) override;

private:
    /**
     * @brief Initialize user balance and transaction data
     */
    void initializeUserData();

    /**
     * @brief Set up the user interface elements and styling
     */
    void setupUserInterface();

    /**
     * @brief Connect UI signals to their corresponding slots
     */
    void connectSignalsAndSlots();

    /**
     * @brief Load and set images for UI elements
     */
    void loadImages();

    /**
     * @brief Update the balance display in the UI
     */
    void updateBalanceDisplay();

    /**
     * @brief Update the transaction history display
     */
    void updateTransactionHistory();

    /**
     * @brief Updates the current investment value based on Bitcoin price changes
     * @param currentPriceStr Current Bitcoin price as string
     */
    void updateInvestmentValue(const QString& currentPriceStr);

    // Class members
    Ui::DashboardWindow *ui;
    std::map<std::string, std::vector<std::string>>& m_balanceMap;
    std::map<std::string, std::vector<std::string>>& m_transactions;
    std::string m_username;
    bool m_isInvested;

    // Style strings for investment display
    const QString m_redValueStyle = R"(
        QLabel {
            color: red;
            font-family: "San Francisco", "Helvetica Neue", "Segoe UI", "Arial", sans-serif;
            font-size: 45px;
            font-weight: 600;
            padding: 10px 22px;
            border: none;
            border-radius: 14px;
            min-height: 40px;
            min-width: 120px;
            letter-spacing: 0.4px;
            background: none;
        })";

    const QString m_greenValueStyle = R"(
        QLabel {
            color: #00d119;
            font-family: "San Francisco", "Helvetica Neue", "Segoe UI", "Arial", sans-serif;
            font-size: 45px;
            font-weight: 600;
            padding: 10px 22px;
            border: none;
            border-radius: 14px;
            min-height: 40px;
            min-width: 120px;
            letter-spacing: 0.4px;
            background: none;
        })";
};

#endif // DASHBOARDWINDOW_H
