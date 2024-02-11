#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const WrongAnimal* meta1 = new WrongAnimal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* k = new WrongCat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << k->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    k->makeSound();
    meta->makeSound();
    meta1->makeSound();
return 0;
}