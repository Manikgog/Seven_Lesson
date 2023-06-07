#include "Cat.h"
#include "Animal.h"

Cat::Cat() : Animal(), _breed("") {}
Cat::Cat(std::string name, int price, std::string breed) : Animal(name, price), _breed(breed) 
{
    catCount++;
}

void Cat::ShowAnimal() 
{
    Animal::ShowAnimal();
    std::cout << "Порода: " << _breed << std::endl;
    std::cout << "Количество котов: " << catCount << std::endl;
}

std::string Cat::GetBreed()
{
    return _breed;
}

void Cat::SetAmount()
{
    catCount--;
}