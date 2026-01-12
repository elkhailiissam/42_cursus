#include <iostream>
#include <string>
#include <cctype>

std::string  StringToUpper(std::string str)
{
    unsigned int i = 0;
    while(i < str.length())
    {
        if (islower(str[i]))
            str[i] = toupper(str[i]);
        i++;
    }
    return (str);
}

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        int i = 1;
        while(i < ac)
        {
            std::string str = av[i];
            str =  StringToUpper(str);
            std::cout << str << " ";
            i++;
        }
        std::cout << std::endl;
    }
}
