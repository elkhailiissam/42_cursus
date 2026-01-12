#ifndef PHONE_BOOK
#define PHONE_BOOK

#include <iostream>
#include <iomanip>
#include <limits>
#include <string>

#define IndexForSearch "\033[0;34mPlease Enter An Index For Search:\033[0m "
#define OutOfRange "\033[0;31mOut Of Range\033[0m "
#define FN "\033[0;36mFirst Name:\033[0m "
#define LN "\033[0;36mLast Name:\033[0m "
#define NN "\033[0;35mNickName:\033[0m "
#define PN "\033[0;32mPhone Number:\033[0m "
#define DS "\033[0;31mDarkest Secret:\033[0m "
#define EX "EXIT"
#define AD "ADD"
#define SE "SEARCH"
#define AskForCommand "\033[0;32mPlease Enter A Command: {ADD, SEARCH, EXIT}\033[0m"
#define ThereIsNoContact "\033[0;33mThere is no contact please ADD one.\033[0m"
#define EmptyField "\033[38;5;88mcannot have empty field.\033[0m"
#define InvalidInput "\033[38;5;226mInvalid input, please enter a valid index\033[0m"
#define NoContactInThisIndex "\033[38;5;201mThere is no contact in this index, fill it and try again.\033[0m"
#define CommandNotExist "\033[38;5;88m["<< Command <<"] Command Is Not Exist !\033[0m"

class Contact
{
    private:
    std::string _FirstName;
    std::string _LastName;
    std::string _NickName;
    std::string _PhoneNumber;
    std::string _DarkestSecret;
    public:
    void    SetFirstName(std::string FirstName);
    void    SetLastName(std::string LastName);
    void    SetNickName(std::string NickName);
    void    SetPhoneNumber(std::string PhoneNumber);
    void    SetDarkestSecret(std::string DarkestSecret);
    std::string GetFirstName();
    std::string GetLastName();
    std::string GetNickName();
    std::string GetPhoneNumber();
    std::string GetDarkestSecret();

};

class PhoneBook
{
    public:
    Contact Contact[8];
    bool    CheckCommand(std::string Command, bool   &ShouldExit, PhoneBook &MyPhoneBook, short &count);
    void    AddContact(PhoneBook &MyPhoneBook, short count);
    void    SearchContacts(PhoneBook &MyPhoneBook, short count);
    void    AskForSpecific(PhoneBook &MyPhoneBook, int test);
};

std::string FormatField(const std::string &str);
short   ReadNumber();
bool    CheckIfEmptyField(std::string str);

#endif
