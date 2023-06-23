#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    int i = 0;
    Animal *animals[100];

    while (i < 100)
    {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
        i++;
    }

    // Dog *dog = new Dog();
    // Dog *dog2 = new Dog();

    // int i = 0;
    // while (1)
    // {
    //     *dog = *dog2;
    //     i++;
    // }

    //system("leaks Animal");
    return (0);
}