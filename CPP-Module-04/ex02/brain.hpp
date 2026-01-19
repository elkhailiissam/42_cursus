#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
    public:
    Brain();
    Brain(const Brain &other);
    Brain& operator=(const Brain &other);
    ~Brain();
    std::string ideas[100];
    void setIdea(int idx, std::string idea);
    std::string getIdea(int idx);
};

#endif