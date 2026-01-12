#include "PhoneBook.hpp"

void    PhoneBook::AskForSpecific(PhoneBook &MyPhoneBook, int test)
{
    short specific_index = ReadNumber();
    if (specific_index<0 || specific_index >= 8)
        std::cout << OutOfRange << std::endl;
    else if (specific_index > test)
        std::cout << NoContactInThisIndex<< std::endl;
    else
    {
        std::cout << FN << MyPhoneBook.Contact[specific_index].GetFirstName() << std::endl;
        std::cout << LN << MyPhoneBook.Contact[specific_index].GetLastName()<< std::endl;
        std::cout << NN <<MyPhoneBook.Contact[specific_index].GetNickName() << std::endl;
        std::cout << PN <<MyPhoneBook.Contact[specific_index].GetPhoneNumber() << std::endl;
        std::cout << DS <<MyPhoneBook.Contact[specific_index].GetDarkestSecret() << std::endl;
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');    
}

void    ValidateContactInfos(std::string str, std::string &stInfo)
{
    bool empty = true;
    while(empty)
    {
        std::cout << str << std::endl;
        std::getline(std::cin, stInfo);
        if (!CheckIfEmptyField(stInfo))
        {
            std::cout << EmptyField << std::endl;
            continue;
        }
        empty = false;
    }
}

void    PhoneBook::AddContact(PhoneBook &MyPhoneBook, short count)
{
    if (count >= 8)
        count %= 8;
    std::string temp;
    ValidateContactInfos(FN, temp);
    MyPhoneBook.Contact[count].SetFirstName(temp);
    ValidateContactInfos(LN, temp);
    MyPhoneBook.Contact[count].SetLastName(temp);
    ValidateContactInfos(NN, temp);
    MyPhoneBook.Contact[count].SetNickName(temp);
    ValidateContactInfos(PN, temp);
    MyPhoneBook.Contact[count].SetPhoneNumber(temp);
    ValidateContactInfos(DS, temp);
    MyPhoneBook.Contact[count].SetDarkestSecret(temp);
}

void    PhoneBook::SearchContacts(PhoneBook &MyPhoneBook, short count)
{
    int i = 0;
    if (count != 0)
        std::cout << std::setw(10) << std::right << "Index"<<
        "|" << std::setw(10) << std::right << "First Name"<<
        "|" << std::setw(10) << std::right << "Last Name" <<
        "|" << std::setw(10) << std::right << "NickName" <<
        std::endl;
    while(i < count)
    {
        std::cout << std::setw(10) << std::right << i << 
        "|" <<std::setw(10) << std::right << FormatField(MyPhoneBook.Contact[i].GetFirstName())<<
        "|" << std::setw(10) << std::right << FormatField(MyPhoneBook.Contact[i].GetLastName())<<
        "|" << std::setw(10) << std::right << FormatField(MyPhoneBook.Contact[i].GetNickName())<<
         std::endl;
        i++;
    }
}

bool    PhoneBook::CheckCommand(std::string Command, bool   &ShouldExit, PhoneBook &MyPhoneBook, short &count)
{
    int test;
    
    if (Command == EX)
            ShouldExit = 1;
    else if (Command == AD)
    {
        MyPhoneBook.AddContact(MyPhoneBook, count);
        count++;
    }
    else if (Command == SE)
    {
        if (count == 0)
            return (false);
        if (count >= 8)
            test = 8;
        else
            test = count;
        MyPhoneBook.SearchContacts(MyPhoneBook, test);
        if (test != 0)
            AskForSpecific(MyPhoneBook, test-1);
    }
    return (true);
}

bool    IsCommandExist(std::string str)
{
    if (str == AD || str == SE || str == EX)
        return (true);
    return false;
}

int main()
{
    bool    ShouldExit=0;
    std::string Command;
    PhoneBook MyPhoneBook;
    short count = 0;
    
    while(!ShouldExit)
    {
        std::cout << AskForCommand << std::endl;
        std::getline(std::cin, Command);
        if (std::cin.fail())
            return 1;
        if (!IsCommandExist(Command))
        {
            std::cout << CommandNotExist << std::endl;
            continue;
        }
        if (!MyPhoneBook.CheckCommand(Command, ShouldExit, MyPhoneBook, count))
            std::cout << ThereIsNoContact << std::endl;
    }
}
