#include "Animal.h"
#include "Cat.h"

Cat::Cat() : Animal(), _breed("") {}
Cat::Cat(std::string name, int price, std::string breed) : Animal(name, price), _breed(breed) 
{
    catCount++;
}

void Cat::ShowAnimal() 
{
    Animal::ShowAnimal();
    std::cout << "������: " << _breed << std::endl;
    std::cout << "���������� �����: " << catCount << std::endl;
}

std::string Cat::GetBreed()
{
    return _breed;
}

void Cat::SetAmount()
{
    catCount--;
}