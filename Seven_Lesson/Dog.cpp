#include "Dog.h"
#include "Animal.h"
#include <string>

Dog::Dog() : Animal(), _breed("") {}
Dog::Dog(std::string name, int price, std::string breed) : Animal(name, price), _breed(breed) 
{
    dogCount++;
}

void Dog::ShowAnimal()
{
    Animal::ShowAnimal();
    std::cout << "Порода: " << _breed << std::endl; 
    std::cout << "Количество собак: " << dogCount << std::endl;
}

std::string Dog::GetBreed()
{
    return _breed;
}

void Dog::SetAmount()
{
    dogCount--;
}
