#include "main.hpp"

int main(int ac,char **av)
{
    ClsSed MySed;
    
    if (ac != 4)
    {
        std::cout << "Error, Please Enter Arguments like this :\n./SedIsForLosers filename.txt s1 s2" << std::endl;
        return 1;
    }
    MySed.setFilename(av[1]);
    MySed.setFilenameReplace();
    MySed.setS1(av[2]);
    MySed.setS2(av[3]);
    std::ifstream infile(MySed.getFilename().c_str());
    if (!infile.is_open())
    {
        std::cerr << "Error: cannot open input file" << std::endl;
        return 1;
    }
    if (MySed.getS1().empty())
    {
        std::cerr << "Error: s1 must not be empty" << std::endl;
        return 1;
    }
    std::string content((std::istreambuf_iterator<char>(infile)), std::istreambuf_iterator<char>());
    infile.close();
    if (content.empty())
    {
        std::cerr << "Error: file must not be empty\n";
        return 1;
    }
    std::string result;
    size_t last = 0;
    size_t found = content.find(MySed.getS1(), last);
    while (found != std::string::npos)
    {
        result.append(content, last, found - last);
        result.append(MySed.getS2());
        last = found + MySed.getS1().length();
        found = content.find(MySed.getS1(), last);
    }
    result.append(content, last, std::string::npos);
    std::ofstream outfile(MySed.getFilenameReplace().c_str());
    if (!outfile.is_open())
    {
        std::cerr << "Error: cannot open output file" << std::endl;
        return 1;
    }
    outfile << result;
}