#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal *dog = new Dog();
    const Animal *cat = new Cat();
    const Animal *animal = new Animal();
    const WrongAnimal *wr = new WrongCat();

    std::cout << "--------------------" << std::endl;

    std::cout << dog->getType() << std::endl;
    std::cout << cat->getType() << std::endl;
    std::cout << animal->getType() << std::endl;
    std::cout << wr->getType() << std::endl;

    std::cout << "--------------------" << std::endl;

    dog->makeSound();
    cat->makeSound();
    animal->makeSound();
    wr->makeSound();

    std::cout << "--------------------" << std::endl;

    delete dog;
    delete cat;
    delete animal;
    delete wr;

    return (0);
    
    // Animal *dog = new Dog();
    // Dog dog2(*dog);

    // dog2.makeSound();

    // delete dog;
    // return (0);
}