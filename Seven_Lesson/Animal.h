#pragma once

#include <string>
#include <iostream>

class Animal
{
private:
    std::string _name;
    int _price;

public:
    Animal();
    Animal(std::string name, int price);

    void SetName(std::string name);

    void SetPrice(int price);

    std::string GetName();

    int GetPrice();

    virtual void SetAmount() = 0;

    virtual std::string GetBreed()=0;

    virtual void ShowAnimal();
};