#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{

    Animal* animals[10];
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    for (int i = 0; i < 10; i++)
        delete animals[i];

    //test deep copy
    // Dog dog1;
    // dog1.setIdea(0, "original idea");

    // Dog dog2(dog1);

    // dog1.setIdea(0, "changed idea");

    // std::cout << "dog1 idea: " << dog1.getIdea(0) << std::endl;
    // std::cout << "dog2 idea: " << dog2.getIdea(0) << std::endl;
    return 0;
}