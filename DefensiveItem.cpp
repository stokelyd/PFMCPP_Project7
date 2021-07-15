#include "DefensiveItem.h"
#include "Dwarf.h"
#include "Paladin.h"
#include "DragonSlayer.h"
#include "Dragon.h"
#include "Utility.h"

void DefensiveItem::use(Character* character)
{
    useDefensiveItem(character, *this);
}
