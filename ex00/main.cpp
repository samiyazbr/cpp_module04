#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->get_Type() << " " << std::endl;
    std::cout << i->get_Type() << " " << std::endl;

    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete i;
    delete j;
    delete meta;
    return (0);
}