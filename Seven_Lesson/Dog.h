#pragma once
#include "Animal.h"

class Dog : public Animal
{
private:
    std::string _breed;
    static int dogCount;
public:
    Dog();
    Dog(std::string name, int price, std::string breed);

    void ShowAnimal() override;

    std::string GetBreed() override;

    void SetAmount() override;

};

int Dog::dogCount = 0;