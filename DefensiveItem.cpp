#include "DefensiveItem.h"
#include "Dwarf.h"
#include "Paladin.h"
#include "DragonSlayer.h"
#include "Dragon.h"
#include "Utility.h"
#include <cassert>

void DefensiveItem::use(Character* character)
{
    // assert(false); 
    useDefensiveItem(character, *this);
}
