#include "Dwarf.h"

Dwarf::Dwarf(std::string name_, int hp_, int armor_) :
    Character(hp_, armor_, 4)
{

}

const std::string& Dwarf::getName()
{
    return name;
}

std::string Dwarf::getStats()
{
    std::string str = "temp stats string";

    return str;
}
