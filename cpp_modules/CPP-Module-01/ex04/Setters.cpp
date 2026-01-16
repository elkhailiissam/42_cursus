#include "main.hpp"

void    ClsSed::setFilename(std::string filename)
{
    _filename = filename;
}

void    ClsSed::setS1(std::string s1)
{
    _s1 = s1;
}
void    ClsSed::setS2(std::string s2)
{
    _s2 = s2;
}
void    ClsSed::setFilenameReplace()
{
    _filename_replace = _filename + ".replace";
}