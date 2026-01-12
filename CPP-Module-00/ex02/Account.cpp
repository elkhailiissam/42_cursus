#include "Account.hpp"
#include <ctime>
#include <iostream>

int Account::_nbAccounts;
int Account::_totalAmount;
int Account::_totalNbDeposits;
int Account::_totalNbWithdrawals;

int     Account::checkAmount(void) const
{
    return _amount;
}

int Account::getNbAccounts()
{
    return Account::_nbAccounts;
}
int Account::getTotalAmount()
{
    return Account::_totalAmount;
}

int Account::getNbDeposits()
{
    return Account::_totalNbDeposits;
}
int Account::getNbWithdrawals()
{
    return Account::_totalNbWithdrawals;
}

void    Account::_displayTimestamp()
{
    std::time_t now = std::time(NULL);
    struct tm* ptm = std::localtime(&now);

    char buffer[80];
    std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", ptm);
    std::cout << buffer;
}

void    Account::displayStatus(void) const
{
    Account::_displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl; 
}

void    Account::displayAccountsInfos()
{
    Account::_displayTimestamp();
    std::cout << " accounts:" << _nbAccounts << ";total:" <<_totalAmount
              <<";deposits:" <<_totalNbDeposits << ";withdrawals:"
              << _totalNbWithdrawals << std::endl;  
}

void    Account::makeDeposit(int deposit)
{
    Account::_displayTimestamp();
    std::cout << " index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit;
    _amount += deposit;
    _nbDeposits++;
    _totalAmount += deposit;
    _totalNbDeposits++;
    std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}


bool    Account::makeWithdrawal(int withdrawal)
{
    Account::_displayTimestamp();
    std::cout << " index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
    if (withdrawal > _amount)
    {
        std::cout << "refused" << std::endl;
        return false;
    }
    _amount-=withdrawal;
    _nbWithdrawals++;
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;
    std::cout << withdrawal <<";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    return true;
}

Account::Account( int initial_deposit ) 
    : _accountIndex(_nbAccounts),
    _amount(initial_deposit),
    _nbDeposits(0),
    _nbWithdrawals(0)
{
    _totalAmount += initial_deposit;
    _nbAccounts++;
    Account::_displayTimestamp();
    std::cout << " index:"<<_accountIndex << ";amount:" <<_amount << ";created" << std::endl;
}

Account::~Account()
{
    Account::_displayTimestamp();
    std::cout << " index:"<<_accountIndex << ";amount:" <<_amount << ";closed" << std::endl;
}
