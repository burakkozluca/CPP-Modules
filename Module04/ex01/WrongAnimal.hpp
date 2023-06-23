#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include "Animal.hpp"

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal();
    virtual ~WrongAnimal();
    //set
    void setType(const std::string &type);
    //get
    std::string getType() const;

    virtual void makeSound();
};

#endif