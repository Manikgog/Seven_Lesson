#pragma once
#include "Animal.h"
#include <string>

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

    void SetAmount() override;

};

