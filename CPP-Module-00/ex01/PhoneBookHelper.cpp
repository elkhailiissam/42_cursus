#include "PhoneBook.hpp"

std::string FormatField(const std::string &str)
{
    if (str.length() > 10)
        return (str.substr(0,9)+".");
    return str;
}

short   ReadNumber()
{
    short Number;
    bool breaking = true;
    std::cout << IndexForSearch << std::endl;
    do
    {
        std::cin >> Number;
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << InvalidInput << std::endl;
        }
        else
            breaking = false;
    } while (breaking);
    return Number;   
}

bool    CheckIfEmptyField(std::string str)
{
    if (str.empty() || str.at(0) == ' ' || str.at(0) == '\t')
        return false;
    return true;
}
