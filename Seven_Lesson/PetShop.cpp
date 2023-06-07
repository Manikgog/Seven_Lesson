#include "PetShop.h"

void PetShop::AddAnimal(Animal* animal)
{
    AnimalInventory.push_back(animal);

}
void PetShop::BuyingAnimal(std::string name)
{
    int i = 0;
    for (const auto& it : AnimalInventory)
    {
        if (it->GetName() == name)
        {
            delete it;
            AnimalInventory.erase(AnimalInventory.begin() + i);
            it->SetAmount();
        }
        i++;
    }
}
void PetShop::ChangingAnimalParameters(std::string name)
{
    for (auto it = AnimalInventory.begin(); it != AnimalInventory.end(); ++it)
    {
        if ((*it)->GetName() == name)
        {
            std::cout << "Выберите какой параметр будем менять: 1 - имя, 2 - цену.\n";
            int tmp = 0;
            std::cin >> tmp;
            std::string str;
            switch (tmp)
            {
            case 1:
                std::cin.ignore();
                std::cout << "Введите имя животного -> ";
                std::getline(std::cin, str);
                (*it)->SetName(str);
                break;
            case 2:
                std::cout << "Введите новую цену -> ";
                std::cin >> tmp;
                (*it)->SetPrice(tmp);
            }
        }
    }
}

void PetShop::ShowInvertory()
{
    for (auto it = AnimalInventory.begin(); it != AnimalInventory.end(); ++it)
    {
        (*it)->ShowAnimal();
        std::cout << std::endl;
    }
}


PetShop::~PetShop()
{
    for (auto& it : AnimalInventory)
    {
        if (!it)
        {
            delete[] it;
        }
    }
}