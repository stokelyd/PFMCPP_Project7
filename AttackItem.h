#include "Item.h"

#include "Item.h"
#include "Character.h"

struct AttackItem : Item
{
    AttackItem();
    void use(Character* character) override;
};