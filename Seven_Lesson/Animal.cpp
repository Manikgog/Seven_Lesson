#include "Animal.h"

Animal::Animal() : _name(""), _price(0) {}
Animal::Animal(std::string name, int price) : _name(name), _price(price)
{}

void Animal::SetName(std::string name)
{
    _name = name;
}

void Animal::SetPrice(int price)
{
    _price = price;
}

std::string Animal::GetName()
{
    return _name;
}

int Animal::GetPrice()
{
    return _price;
}

void Animal::ShowAnimal()
{
    std::cout << "Имя животного: " << _name << std::endl;
    std::cout << "Цена: " << _price << std::endl;
}
