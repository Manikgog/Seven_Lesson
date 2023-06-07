#include <iostream>
#include <vector>
#include <string>
#include <locale.h>
#include <Windows.h>
#include "PetShop.h"
#include "Animal.h"
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"



int main()
{
    system("chcp 1251");
    system("cls");
    
    Cat* cat1 = new Cat("Тимофей", 500, "Сибирский кот");
    Cat* cat2 = new Cat("Леопольд", 600, "Дворняга");
    Dog* dog1 = new Dog("Шарик", 800, "Колли");
    Dog* dog2 = new Dog("Палкан", 900, "Среднеазиатская овчарка");
    
    PetShop shop;
    
    shop.AddAnimal(cat1);
    shop.AddAnimal(cat2);
    shop.AddAnimal(dog1);
    shop.AddAnimal(dog2);
    shop.ShowInvertory();
    shop.BuyingAnimal("Тимофей");
    std::cout << "\n--------------------------------------------------\n";
    shop.ShowInvertory();
    shop.ChangingAnimalParameters("Леопольд");
    std::cout << "\n--------------------------------------------------\n";
    shop.ShowInvertory();
    



    return 0;
}
