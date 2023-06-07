#ifndef _DOG_H_
#define _DOG_H_
#include "Animal.h"
#include <string>

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



#endif