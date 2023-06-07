#pragma once

#include <vector>
#include "Animal.h"

class PetShop
{
private:
    std::vector<Animal*> AnimalInventory;

public:
    void AddAnimal(Animal* animal);
    void BuyingAnimal(std::string name);
    void ChangingAnimalParameters(std::string name);
    void ShowInvertory();
    ~PetShop();
};