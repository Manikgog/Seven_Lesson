#pragma once
#include "Animal.h"

class Cat : public Animal
{
private:
    std::string _breed;
    static int catCount;
public:
    Cat();
    Cat(std::string name, int price, std::string breed);

    void ShowAnimal() override;

    std::string GetBreed() override;

    void SetAmount();

};

int Cat::catCount = 0;