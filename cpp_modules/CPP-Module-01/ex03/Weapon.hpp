#pragma once

#include <string>

class Weapon
{
    private:
    std::string type;
    public:
    std::string getType() const;
    void    setType(std::string type);
    Weapon(std::string type);  
};