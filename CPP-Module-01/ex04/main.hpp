#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <iterator>

class ClsSed
{
    private:
    std::string _filename;
    std::string _filename_replace;
    std::string _s1;
    std::string _s2;
    public:
    void    setFilename(std::string filename);
    void    setFilenameReplace();
    void    setS1(std::string s1);
    void    setS2(std::string s2);
    std::string getFilename() const;
    std::string getS1() const;
    std::string getS2() const;
    std::string getFilenameReplace() const;
};

