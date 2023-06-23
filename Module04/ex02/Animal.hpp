#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <iomanip>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    virtual ~Animal();

    //set
    void setType(const std::string &type);
    //get
    std::string getType() const;

    virtual void makeSound() = 0;
};

#endif